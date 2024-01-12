#include "Surface.hpp"
#include <cstdint>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <vulkan/vulkan_core.h>
#include <shared_mutex>

std::shared_mutex DisplayLock;

std::map<uintptr_t, SurfaceInfo> surface_to_info;

std::map<uintptr_t, VkSurfaceKHR> swapchain_to_surface;
std::map<uintptr_t, VkDevice> swapchain_to_device;
std::map<uintptr_t, VkExtent2D> swapchain_to_extent;

std::map<uintptr_t, VkPhysicalDevice> device_to_phyiscal_device;
std::map<uintptr_t, void*> device_to_mapped;
std::map<uintptr_t, VkDeviceSize> device_to_mapped_size;
std::map<uintptr_t, VkBuffer> device_to_buffer;
std::map<uintptr_t, VkCommandBuffer> device_to_command_buffer;
std::map<uintptr_t, VkDeviceMemory> device_to_devicememory;
std::map<uintptr_t, VkQueue> device_to_queue;
std::map<uintptr_t, uint32_t> device_to_queue_family_index;

void registerSurface(VkSurfaceKHR pSurface, std::any info, SurfaceType type){
    auto surface_info=SurfaceInfo{.type=type};
    
    switch (type){
        #ifdef VK_USE_PLATFORM_XLIB_KHR
        case Xlib:
            {
            printf("Actual type: %s\n",info.type().name());
            auto xlib_info=std::any_cast<const VkXlibSurfaceCreateInfoKHR*>(info);
            surface_info.info=XlibSurfaceInfo{.dpy=xlib_info->dpy,.window=xlib_info->window};
            break;
            }
        #endif
        
        #ifdef VK_USE_PLATFORM_XCB_KHR
        case Xcb:
            {
            printf("Actual type: %s\n",info.type().name());
            auto xcb_info=std::any_cast<const VkXcbSurfaceCreateInfoKHR*>(info);
            surface_info.info=XcbSurfaceInfo{.connection=xcb_info->connection,.window=xcb_info->window};
            break;
            }
        #endif
        default:
            return;
    }
    
    surface_to_info[(uintptr_t)pSurface]=surface_info;
}


void registerSwapchain(VkSwapchainKHR swapchain, VkDevice device, const VkSwapchainCreateInfoKHR* info){
    swapchain_to_surface[(uintptr_t)swapchain]=info->surface;
    swapchain_to_device[(uintptr_t)swapchain]=device;
    swapchain_to_extent[(uintptr_t)swapchain]=info->imageExtent;
}

void registerDevice(VkDevice device, VkPhysicalDevice phyiscal_device){
    device_to_phyiscal_device[(uintptr_t)device]=phyiscal_device;
}

VkQueue getQueue(VkDevice device,uint32_t* pIndex){
auto key=(uintptr_t)device;
if (device_to_queue.contains(key)){
    if (pIndex!=NULL){
        *pIndex=device_to_queue_family_index[key];
    }
    return device_to_queue[key];
}

auto physical_device=device_to_phyiscal_device[key];

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

device_to_queue[key]=queue;
device_to_queue_family_index[key]=queue_family_index;

*pIndex=queue_family_index;
return queue;
}

VkCommandBuffer getCommandBuffer(VkDevice device){ 
auto key=(uintptr_t)device;
if (device_to_command_buffer.contains(key)){
    return device_to_command_buffer[key];
}

VkCommandPool command_pool; 
uint32_t queue_family_index;

getQueue(device,&queue_family_index);
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

device_to_command_buffer[key]=command_buffer;
return command_buffer;
}

VkBuffer getBuffer(VkDevice device, VkDeviceSize* size){
VkDeviceSize BUFFER_SIZE=1000000;
auto key=(uintptr_t)device;

if (size!=NULL){
    *size=BUFFER_SIZE;
}

if (device_to_buffer.contains(key)){
    return device_to_buffer[key];
}

VkBuffer buffer;
auto buffer_create_info=VkBufferCreateInfo{
.sType=VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO,
.pNext=NULL,
.flags=0,
.size=BUFFER_SIZE,
.usage=VK_BUFFER_USAGE_TRANSFER_DST_BIT,
.sharingMode=VK_SHARING_MODE_EXCLUSIVE,
.queueFamilyIndexCount=0,
.pQueueFamilyIndices=NULL,
};
vkCreateBuffer(device,&buffer_create_info,NULL,&buffer);

device_to_buffer[key]=buffer;


auto memory_properties=VkPhysicalDeviceMemoryProperties{};
vkGetPhysicalDeviceMemoryProperties(device_to_phyiscal_device[(uintptr_t)device],&memory_properties);

uint32_t memory_type_index=0;
bool found=false;
for (uint32_t i=0; i< memory_properties.memoryTypeCount; i++){
    if ((memory_properties.memoryTypes[i].propertyFlags & (VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT|VK_MEMORY_PROPERTY_HOST_COHERENT_BIT))== (VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT|VK_MEMORY_PROPERTY_HOST_COHERENT_BIT)){ //Switch it back to just host_visible when done
        memory_type_index=i;
        found=true;
        break;
    }
}

if (!found){
    printf("None found!\n");
}

auto memory_allocate_info=VkMemoryAllocateInfo{
.sType=VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO,
.pNext=NULL,
.allocationSize=*size,
.memoryTypeIndex=memory_type_index
};

VkDeviceMemory memory;
vkAllocateMemory(device,&memory_allocate_info,NULL, &memory);
vkBindBufferMemory(device, buffer,memory,0);

device_to_devicememory[key]=memory;

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

VkDeviceSize size;
auto buffer=getBuffer(device,&size);
 
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

auto queue=getQueue(device,NULL);
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

vkQueueSubmit(queue,1,&queue_submit_info,fence);

while(true){
if (vkWaitForFences(device,1,&fence,VK_TRUE, 5ULL*10000)!=VK_TIMEOUT){
    break;
}
}
}


void getImageData(VkDevice device, VkImage image, void** data, VkDeviceSize* pSize, VkExtent2D extent){
auto key=(uintptr_t)device;
if (device_to_mapped.contains(key)){
    *data=device_to_mapped[key];
    *pSize=device_to_mapped_size[key];
    return;
}


copyImageToBuffer(device,image,extent);

VkDeviceSize size;

auto memory=device_to_devicememory[key];
getBuffer(device,&size);

void* ppData=NULL;
vkMapMemory(device,memory,0,size,0,&ppData);

device_to_mapped[key]=ppData;
device_to_mapped_size[key]=size;

*data=ppData;
*pSize=size;
return;
}

void QueueDisplay(VkFence* fences_list, const VkSwapchainKHR* swapchains_list, const uint32_t* indices_list, uint32_t swapchain_count){
    DisplayLock.lock(); //This is important --- otherwise, every thread will be stepping all over each other
    std::map<uintptr_t, std::vector<VkImage>> swapchain_to_images;
    
    for(int i=0; i<swapchain_count; i++){
        uint32_t numImages=0;
        VkImage* images=NULL;
        auto swapchain=swapchains_list[i];
        auto device=swapchain_to_device[(uintptr_t)swapchain];
        
        while(true){
            if (vkWaitForFences(device,1,&(fences_list[i]),VK_TRUE,5ULL*10000) != VK_TIMEOUT){
                break;
            }
        }
        
        if (!swapchain_to_images.contains((uintptr_t)swapchain)){
            vkGetSwapchainImagesKHR(device,swapchain,&numImages,images);
            
            images=(VkImage*)malloc(numImages*sizeof(VkImage));
            vkGetSwapchainImagesKHR(swapchain_to_device[(uintptr_t)swapchain],swapchain,&numImages,images);
            
            std::vector<VkImage> vec(images, images + numImages);
            
            swapchain_to_images[(uintptr_t)swapchain]=vec;
        }
        
        
        auto imageIndex=indices_list[i];
        auto image=swapchain_to_images[(uintptr_t)swapchain][imageIndex];
        auto extent=swapchain_to_extent[(uintptr_t)swapchain];
        printf("Image Extent: %d, %d\n",extent.width,extent.height);
        
        void* data=NULL;
        VkDeviceSize size;
        getImageData(device, image, &data, &size, extent); //Returns pointer holding the data
        
        auto surface=swapchain_to_surface[(uintptr_t)swapchain];
        
        if (!surface_to_info.contains((uintptr_t)surface)){
            continue;
        }
        
        auto surface_info=surface_to_info[(uintptr_t)surface];
        
        switch (surface_info.type){
        
            #ifdef VK_USE_PLATFORM_XLIB_KHR
            case Xlib:
            {
            auto info=std::any_cast<XlibSurfaceInfo>(surface_info.info);
            auto display=info.dpy;
            auto window=info.window;
            
            int screen = DefaultScreen(display);
            XImage *x_image = XCreateImage(display, DefaultVisual(display, screen), 0,
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
                auto info=std::any_cast<XcbSurfaceInfo>(surface_info.info);
                auto connection=info.connection;
                auto window=info.window;
                
                xcb_gcontext_t gc = xcb_generate_id(connection);
                xcb_create_gc(connection, gc, window, 0, NULL);
                
                auto screen=xcb_setup_roots_iterator(xcb_get_setup(connection)).data;
                auto depth = screen->root_depth; //This is important --- ntohing will show on screen otherwise
                
                // Create an XCB image
                xcb_image_t *x_image = xcb_image_create_native(connection, extent.width, extent.height, XCB_IMAGE_FORMAT_Z_PIXMAP, depth, data, size, (uint8_t*)data);
                
                xcb_pixmap_t pixmap = xcb_generate_id(connection);
                xcb_create_pixmap(connection, depth, pixmap, window, extent.width, extent.height);
                // Put the XCB image onto the window
                xcb_image_put(connection, pixmap, gc, x_image, 0, 0, 0);
                xcb_copy_area(connection, pixmap, window, gc, 0, 0, 0, 0, extent.width, extent.height);
                
                // Flush and free resources
                xcb_flush(connection);
                xcb_free_gc(connection, gc);
                break;
            }
            #endif
            
            default:
                break;
        }
        
        
        
        
        
        
        
        /*
        auto copy_info=VkCopyImageToMemoryInfoEXT{};
        copy_info.sType=VK_STRUCTURE_TYPE_COPY_IMAGE_TO_MEMORY_INFO_EXT;
        copy_info.pNext=NULL;
        copy_info.flags=0;
        copy_info.srcImage=image;
        copy_info.srcImageLayout=VK_IMAGE_LAYOUT_GENERAL;
        copy_info.regionCount=1;
        
        auto copy_to_memory_info=VkImageToMemoryCopyEXT{};
        copy_to_memory_info.sType=VK_STRUCTURE_TYPE_IMAGE_TO_MEMORY_COPY_EXT;
        copy_to_memory_info.pNext=NULL;
        copy_to_memory_info.pHostPointer=malloc(100000);
        copy_to_memory_info.memoryRowLength=0;
        copy_to_memory_info.memoryImageHeight=0;
        copy_to_memory_info.imageSubresource=VkImageSubresourceLayers{.aspectMask=VK_IMAGE_ASPECT_COLOR_BIT,.mipLevel=0,.baseArrayLayer=0,.layerCount=1};
        copy_to_memory_info.imageOffset=VkOffset3D{0,0,0};
        copy_to_memory_info.imageExtent=image_to_extent[(uintptr_t)image];
        
        copy_info.pRegions=&copy_to_memory_info;
        
        vkCopyImageToMemoryEXT(device,&copy_info);
        */
    }
    DisplayLock.unlock();

}