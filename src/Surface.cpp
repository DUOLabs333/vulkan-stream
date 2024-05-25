#include "Surface.hpp"
#include <condition_variable>
#include <cstdint>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <vulkan/vulkan_core.h>
#include <shared_mutex>
#include <atomic>
#include <algorithm>
#include <queue>
#include <thread>

typedef struct {
std::atomic_int c;
std::mutex mu;
std::condition_variable cv;
std::atomic_bool skip;
} DeviceCounterInfo;

typedef struct {
VkFence fence;
uint32_t index;
} PresentInfo;

typedef struct {
std::queue<PresentInfo> queue;
std::shared_mutex queue_mutex;

std::mutex notify_mutex; //Notifies when the queue (when checking if empty, lock queue_mutex and only unlock it just before 
std::condition_variable notify_condition;
} SwapchainQueueInfo;

typedef struct {
VkSurfaceKHR surface = VK_NULL_HANDLE;
VkDevice device = VK_NULL_HANDLE;
VkExtent2D extent;
std::vector<VkImage> images = {};
SwapchainQueueInfo queue_info;
} SwapchainInfo;

typedef struct {
VkPhysicalDevice physical_device = VK_NULL_HANDLE;
VkCommandBuffer command_buffer = VK_NULL_HANDLE;
VkQueue queue = VK_NULL_HANDLE;
uint32_t queue_family_index;
DeviceCounterInfo counter_info;
std::unordered_map<VkDeviceSize,VkBuffer> buffers;
std::atomic_bool present_skip; //Whether associated swapchains should skip the actual presenting
} DeviceInfo;

std::unordered_map<uintptr_t, SurfaceInfo> surface_to_info;
std::unordered_map<uintptr_t, SwapchainInfo> swapchain_to_info;
std::unordered_map<uintptr_t, DeviceInfo> device_to_info;

//device maps to a map of different sized buffers
//Each buffer maps to a devicememory
//Each devicememory maps to a pointer

std::unordered_map<uintptr_t, VkDeviceSize> image_to_size;
std::unordered_map<uintptr_t, VkDeviceMemory> buffer_to_devicememory;
std::unordered_map<uintptr_t, void*> devicememory_to_mapped;

void registerSurface(VkSurfaceKHR pSurface, std::any info, SurfaceType type){
    auto& surface_info=surface_to_info[(uintptr_t)pSurface];
    surface_info.type=type;
    
    switch (type){
        #ifdef VK_USE_PLATFORM_XLIB_KHR
        case Xlib:
            {
            debug_printf("Actual type: %s\n",info.type().name());
            auto xlib_info=std::any_cast<const VkXlibSurfaceCreateInfoKHR*>(info);
            surface_info.info=XlibSurfaceInfo{.dpy=xlib_info->dpy,.window=xlib_info->window};
            break;
            }
        #endif
        
        #ifdef VK_USE_PLATFORM_XCB_KHR
        case Xcb:
            {
            debug_printf("Actual type: %s\n",info.type().name());
            auto xcb_info=std::any_cast<const VkXcbSurfaceCreateInfoKHR*>(info);
            auto info=XcbSurfaceInfo{.connection=xcb_info->connection,.window=xcb_info->window};

	    info.gc=xcb_generate_id(info.connection);
            xcb_create_gc(info.connection, info.gc, info.window, 0, NULL);

	    xcb_get_geometry_cookie_t cookie = xcb_get_geometry(info.connection, info.window);

	    xcb_get_geometry_reply_t *reply = xcb_get_geometry_reply(info.connection, cookie, NULL);

	    info.depth=reply->depth;

	    surface_info.info=info;

	    free(reply);
	    
            break;
            }
        #endif
        default:
            return;
    }
}

VkDevice getSwapchainDevice(VkSwapchainKHR swapchain){
    return swapchain_to_info[(uintptr_t)swapchain].device;
}

void registerDevice(VkDevice device, VkPhysicalDevice phyiscal_device){
    device_to_info[(uintptr_t)device].physical_device=phyiscal_device;
}
 
void updateCounter(VkDevice device, int direction){
    auto& counter_info=device_to_info[(uintptr_t)device].counter_info;
    
    counter_info.c+=direction;
    
    if ((direction==-1) && (counter_info.c.load()==0)){
        counter_info.cv.notify_all();
    }
}
void waitForCounterIdle(VkDevice device){
    auto& device_info=device_to_info[(uintptr_t)device];
    auto& counter_info=device_info.counter_info;

    if (counter_info.c.load()==0){ //Indicates that there is no present currently enqueued.
        return;
    }
    
    device_info.present_skip=true; //Want to skip the presentation of image on the swapchain

    std::unique_lock<std::mutex> lk(counter_info.mu);
    
    counter_info.cv.wait(lk);

    device_info.present_skip=false;
}

VkDeviceSize getImageSize(VkDevice device, VkImage image){
auto key = (uintptr_t)image;

if (image_to_size.contains(key)){
    return image_to_size[key];
}

VkMemoryRequirements memory_reqirements={};

vkGetImageMemoryRequirements(device, image, &memory_reqirements);


image_to_size[key]=memory_reqirements.size;
return memory_reqirements.size;

}

VkQueue getQueue(VkDevice device,uint32_t& pIndex){
auto& info=device_to_info[(uintptr_t)device];
auto key=(uintptr_t)device;
if (info.queue!=VK_NULL_HANDLE){
    pIndex=info.queue_family_index;
    return info.queue;
}

auto physical_device=info.physical_device;

uint32_t num_queue_families=0;
vkGetPhysicalDeviceQueueFamilyProperties(physical_device,&num_queue_families,NULL);

auto queue_families=(VkQueueFamilyProperties*)malloc(num_queue_families*sizeof(VkQueueFamilyProperties));
vkGetPhysicalDeviceQueueFamilyProperties(physical_device,&num_queue_families,queue_families);

uint32_t queue_family_index=0;
for (int i=0; i<num_queue_families; i++){
    if ((queue_families[i].queueFlags & VK_QUEUE_GRAPHICS_BIT)!=0){
        queue_family_index=i;
        break;
    }
}

VkQueue queue;
vkGetDeviceQueue(device,queue_family_index,0,&queue);

info.queue=queue;
info.queue_family_index=queue_family_index;

pIndex=queue_family_index;
return queue;
}

VkCommandBuffer getCommandBuffer(VkDevice device){ 
auto& info=device_to_info[(uintptr_t)device];
if (info.command_buffer!=VK_NULL_HANDLE){
    return info.command_buffer;
}

VkCommandPool command_pool; 
uint32_t queue_family_index;

getQueue(device,queue_family_index);
auto command_pool_create_info=VkCommandPoolCreateInfo{
.sType=VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO,
.pNext=NULL,
.flags=VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT,
.queueFamilyIndex=queue_family_index,
};

vkCreateCommandPool(device, &command_pool_create_info, NULL, &command_pool);


auto command_buffer_allocate_info=VkCommandBufferAllocateInfo{
.sType=VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO,
.pNext=NULL,
.commandPool=command_pool,
.level=VK_COMMAND_BUFFER_LEVEL_PRIMARY,
.commandBufferCount=1,
};

VkCommandBuffer command_buffer;
vkAllocateCommandBuffers(device,&command_buffer_allocate_info,&command_buffer);

info.command_buffer=command_buffer;
return command_buffer;
}

VkBuffer getBuffer(VkDevice device, VkDeviceSize& size){ //Gets buffer that is at least as big as *size
auto& info=device_to_info[(uintptr_t)device];

if (info.buffers.contains(size)){
    return info.buffers[size];
}

/*
std::vector<VkDeviceSize> keys(info.buffers.size());
for (auto& [key, value] : info.buffers){
    keys.push_back(key);
}

std::sort(keys.begin(), keys.end());

auto buffer_size=std::lower_bound(keys.begin(), keys.end(), size);

if (buffer_size!=keys.end()){
    size=*buffer_size;
    return info.buffers[*buffer_size];
}
*/

VkBuffer buffer;
auto buffer_create_info=VkBufferCreateInfo{
.sType=VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO,
.pNext=NULL,
.flags=0,
.size=size,
.usage=VK_BUFFER_USAGE_TRANSFER_DST_BIT,
.sharingMode=VK_SHARING_MODE_EXCLUSIVE,
.queueFamilyIndexCount=0,
.pQueueFamilyIndices=NULL,
};
vkCreateBuffer(device,&buffer_create_info,NULL,&buffer);

info.buffers[size]=buffer;

auto memory_properties=VkPhysicalDeviceMemoryProperties{};
vkGetPhysicalDeviceMemoryProperties(info.physical_device,&memory_properties);

uint32_t memory_type_index=0;
bool found=false;
auto flags_bitmask= VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT|VK_MEMORY_PROPERTY_HOST_CACHED_BIT;

for (uint32_t i=0; i< memory_properties.memoryTypeCount; i++){
    if ((memory_properties.memoryTypes[i].propertyFlags & flags_bitmask)== flags_bitmask){
        memory_type_index=i;
        found=true;
        break;
    }
}

if (!found){
    debug_printf("None found!\n");
}

auto memory_allocate_info=VkMemoryAllocateInfo{
.sType=VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO,
.pNext=NULL,
.allocationSize=size,
.memoryTypeIndex=memory_type_index
};

VkDeviceMemory memory;
vkAllocateMemory(device,&memory_allocate_info,NULL, &memory);
vkBindBufferMemory(device, buffer,memory,0);

buffer_to_devicememory[(uintptr_t)buffer]=memory;
return buffer;      
}


void transferImageToLayout(VkCommandBuffer command_buffer, VkImage image, VkImageLayout oldLayout, VkImageLayout newLayout){


auto image_barrier=VkImageMemoryBarrier{
.sType=VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER,
.pNext=NULL,
.srcAccessMask=VK_ACCESS_MEMORY_READ_BIT|VK_ACCESS_MEMORY_WRITE_BIT,
.dstAccessMask=VK_ACCESS_MEMORY_READ_BIT|VK_ACCESS_MEMORY_WRITE_BIT,
.oldLayout=oldLayout,
.newLayout=newLayout,
.srcQueueFamilyIndex=VK_QUEUE_FAMILY_IGNORED,
.dstQueueFamilyIndex=VK_QUEUE_FAMILY_IGNORED,
.image=image,
.subresourceRange=VkImageSubresourceRange{
.aspectMask=VK_IMAGE_ASPECT_COLOR_BIT,
.baseMipLevel=0,
.levelCount=1,
.baseArrayLayer=0,
.layerCount=1
}
};


auto stage_mask=VK_PIPELINE_STAGE_ALL_COMMANDS_BIT;

vkCmdPipelineBarrier(command_buffer, stage_mask, stage_mask, VK_DEPENDENCY_BY_REGION_BIT, 0, NULL, 0, NULL, 1, &image_barrier);

}

void copyImageToBuffer(VkDevice device, VkImage image, VkExtent2D extent){

auto command_buffer=getCommandBuffer(device);
auto begin_command_buffer_info=VkCommandBufferBeginInfo{.sType=VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO,.pNext=NULL,.flags=VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT,.pInheritanceInfo=NULL};
vkBeginCommandBuffer(command_buffer,&begin_command_buffer_info);

transferImageToLayout(command_buffer,image,VK_IMAGE_LAYOUT_PRESENT_SRC_KHR, VK_IMAGE_LAYOUT_GENERAL);

VkDeviceSize size=getImageSize(device, image);
auto buffer=getBuffer(device,size);
 
auto region=VkBufferImageCopy{
.bufferOffset=0,
.bufferRowLength=0,
.bufferImageHeight=0,
.imageSubresource=VkImageSubresourceLayers{.aspectMask=VK_IMAGE_ASPECT_COLOR_BIT,.mipLevel=0,.baseArrayLayer=0,.layerCount=1},
.imageOffset=VkOffset3D{0,0,0},
.imageExtent=VkExtent3D{extent.width,extent.height,1}
};


vkCmdCopyImageToBuffer(command_buffer,image,VK_IMAGE_LAYOUT_GENERAL,buffer,1,&region);

transferImageToLayout(command_buffer,image,VK_IMAGE_LAYOUT_GENERAL, VK_IMAGE_LAYOUT_PRESENT_SRC_KHR);

vkEndCommandBuffer(command_buffer);

VkFence fence;
auto fence_create_info=VkFenceCreateInfo{.sType=VK_STRUCTURE_TYPE_FENCE_CREATE_INFO,.pNext=NULL,.flags=0};
vkCreateFence(device,&fence_create_info,NULL,&fence);

uint32_t dummy=0; //Is ignored
auto queue=getQueue(device,dummy);
auto queue_submit_info=VkSubmitInfo{
.sType=VK_STRUCTURE_TYPE_SUBMIT_INFO,
.pNext=NULL,
.waitSemaphoreCount=0,
.pWaitSemaphores=NULL,
.pWaitDstStageMask=NULL,
.commandBufferCount=1,
.pCommandBuffers=&command_buffer,
.signalSemaphoreCount=0,
.pSignalSemaphores=NULL
};

vkQueueSubmit(queue,VK_STREAM_SUBMIT_COUNT,&queue_submit_info,fence);

vkWaitForFences(device,1,&fence,VK_TRUE, VK_STREAM_TIMEOUT);
}


void getImageData(VkDevice device, VkImage image, void** data, VkDeviceSize& size, VkExtent2D extent){
copyImageToBuffer(device,image,extent);

size=getImageSize(device, image);

VkDeviceSize buffer_size=size;
auto buffer=getBuffer(device,buffer_size);

auto memory=buffer_to_devicememory[(uintptr_t)buffer];
auto key=(uintptr_t)memory;

if (devicememory_to_mapped.contains(key)){
    *data=devicememory_to_mapped[key];
}else{
    vkMapMemory(device,memory,0,buffer_size,0,data);
    devicememory_to_mapped[key]=*data;
}

auto range=VkMappedMemoryRange{
    .sType=VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE,
    .pNext=NULL,
    .memory=memory,
    .offset=0,
    .size=VK_WHOLE_SIZE
};

vkInvalidateMappedMemoryRanges(device, 1, &range);

return;

}

void pushToQueue(VkFence fence, VkSwapchainKHR swapchain, uint32_t index){
auto& info= swapchain_to_info[(uintptr_t)swapchain];
auto& queue_info= info.queue_info;

queue_info.queue_mutex.lock();
queue_info.queue.push({fence, index});
queue_info.notify_condition.notify_all();
if (fence!=VK_NULL_HANDLE){
    updateCounter(info.device, 1);
}
queue_info.queue_mutex.unlock();

}

void HandleSwapchainQueue(VkSwapchainKHR swapchain){
    auto& info=swapchain_to_info[(uintptr_t)swapchain];
    auto& queue_info=info.queue_info;
    
    std::unique_lock<std::mutex> lock(queue_info.notify_mutex);
    while(true){
        queue_info.queue_mutex.lock_shared();
        if(!queue_info.queue.empty()){ //Queue is not empty, so we can immediately go and pull item from it
            queue_info.queue_mutex.unlock_shared();
        }else{ //Queue is empty, so wait for a new item
            queue_info.queue_mutex.unlock_shared();
            queue_info.notify_condition.wait(lock);
        }
        
        queue_info.queue_mutex.lock();
        auto present_info=queue_info.queue.front();
        queue_info.queue.pop();
        queue_info.queue_mutex.unlock();

        if (present_info.fence==VK_NULL_HANDLE){
            swapchain_to_info.erase((uintptr_t)swapchain);
            break;
        }

        auto device=info.device; //The image can come from a different device
        
	if(device_to_info[(uintptr_t)device].present_skip.load()==true){ //Skip presentation
		updateCounter(device, -1);
		continue;
	}

	        printf("We're displaying something!\n");
        vkWaitForFences(device,1, &present_info.fence,VK_TRUE, VK_STREAM_TIMEOUT);
        
        auto image=info.images[present_info.index];
        auto extent=info.extent;
        debug_printf("Image Extent: %d, %d\n",extent.width,extent.height);

        void* data=NULL;
        VkDeviceSize size;
        getImageData(device, image, &data, size, extent); //Returns pointer holding the data
        debug_printf("Memory %p: Displaying!\n",data);
	
        auto& surface=info.surface;
        
        if (!surface_to_info.contains((uintptr_t)surface)){
            continue;
        }
        
        auto& surface_info=surface_to_info[(uintptr_t)surface];
        
        switch (surface_info.type){
        
            #ifdef VK_USE_PLATFORM_XLIB_KHR
            case Xlib:
            {
	    debug_printf("Displaying with Xlib!\n");
            auto info=std::any_cast<XlibSurfaceInfo>(surface_info.info);
            auto display=info.dpy;
            auto window=info.window;
            
            XWindowAttributes attributes;
            XGetWindowAttributes(display, window, &attributes);
            
            XImage *x_image = XCreateImage(display, attributes.visual, attributes.depth,
                             ZPixmap, 0, (char *)data, extent.width, extent.height, 32, 0);
            
            GC gc = XCreateGC(display, window, 0, NULL);
            XPutImage(display, window, gc, x_image, 0, 0, 0, 0, extent.width, extent.height);
            XFreeGC(display, gc);
            break;
            }
            #endif
            
            #ifdef VK_USE_PLATFORM_XCB_KHR
            case Xcb:
            {
                debug_printf("Displaying with Xcb!\n");
                auto info=std::any_cast<XcbSurfaceInfo>(surface_info.info);
                auto connection=info.connection;
                auto window=info.window;
                auto depth=info.depth; //This is important --- nothing will show on screen otherwise
		auto gc=info.gc;

                // Create an XCB image
                xcb_image_t *x_image = xcb_image_create_native(connection, extent.width, extent.height, XCB_IMAGE_FORMAT_Z_PIXMAP, depth, data, size, (uint8_t*)data);
                
                xcb_pixmap_t pixmap = xcb_generate_id(connection);
                xcb_create_pixmap(connection, depth, pixmap, window, extent.width, extent.height);
                // Put the XCB image onto the window
                xcb_image_put(connection, pixmap, gc, x_image, 0, 0, 0);
                xcb_copy_area(connection, pixmap, window, gc, 0, 0, 0, 0, extent.width, extent.height);
                
                // Flush and free resources
                xcb_flush(connection);
                break;
            }
            #endif
            
            default:
                break;
        }
        
        updateCounter(device, -1);
        
    }

}

void registerSwapchain(VkSwapchainKHR swapchain, VkDevice device, const VkSwapchainCreateInfoKHR* create_info){
    auto& info=swapchain_to_info[(uintptr_t)swapchain];
    
    info.surface=create_info->surface;
    info.extent=create_info->imageExtent;
    info.device=device;
    
    auto& vec=info.images;
    uint32_t numImages=0;
    vkGetSwapchainImagesKHR(device,swapchain,&numImages,NULL);
    vec.resize(numImages);
    vkGetSwapchainImagesKHR(device,swapchain,&numImages,vec.data());
    
    std::thread(HandleSwapchainQueue, swapchain).detach();
}

void deregisterSwapchain(VkSwapchainKHR swapchain){
    pushToQueue(VK_NULL_HANDLE, swapchain, 0); //Signal that the display thread should end
}
