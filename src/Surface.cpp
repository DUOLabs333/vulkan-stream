#include "Surface.hpp"
#include <cstdint>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <vulkan/vulkan_core.h>

std::map<uintptr_t, SurfaceInfo> surface_to_info;
std::map<uintptr_t, VkSurfaceKHR> swapchain_to_surface;
std::map<uintptr_t, VkDevice> swapchain_to_device;
std::map<uintptr_t, VkExtent3D> image_to_extent;
std::map<uintptr_t, VkPhysicalDevice> device_to_phyiscal_device;

void registerSurface(VkSurfaceKHR& pSurface, std::any info, SurfaceType type){
    auto surface_info=SurfaceInfo{.type=type};
    
    switch (type){
        #ifdef VK_USE_PLATFORM_XCB_KHR
        case Xlib:
            {
            printf("Actual type: %s\n",info.type().name());
            auto xlib_info=std::any_cast<const VkXlibSurfaceCreateInfoKHR*>(info);
            surface_info.info=XlibSurfaceInfo{.dpy=xlib_info->dpy,.window=xlib_info->window};
            break;
            }
        #endif
        
        #ifdef VK_USE_PLATFORM_XLIB_KHR
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


void registerSwapchain(VkSwapchainKHR swapchain, VkSurfaceKHR surface, VkDevice device){
    swapchain_to_surface[(uintptr_t)swapchain]=surface;
    swapchain_to_device[(uintptr_t)swapchain]=device;
}

void registerImage(VkImage& image, VkExtent3D& extent){
    image_to_extent[(uintptr_t)image]=extent;
}

void registerDevice(VkDevice& device, VkPhysicalDevice& phyiscal_device){
    device_to_phyiscal_device[(uintptr_t)device]=phyiscal_device;
}


bool queue_present_init_finished=false;

VkQueue queue;
VkCommandPool command_pool;
VkCommandBuffer command_buffer;
void queue_present_init(VkDevice& device){ //Move this function to one that returns a recording buffer, caching it against devices as needed. Then, another function submits the command
    if (!queue_present_init_finished){
        return;
    }
    
    auto physical_device=device_to_phyiscal_device[(uintptr_t)device];
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
    
    vkGetDeviceQueue(device,queue_family_index,0,&queue);
    
    auto command_pool_create_info=VkCommandPoolCreateInfo{};
    command_pool_create_info.sType=VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO;
    command_pool_create_info.pNext=NULL;
    command_pool_create_info.flags=0;
    command_pool_create_info.queueFamilyIndex=queue_family_index;
    vkCreateCommandPool(device, &command_pool_create_info, NULL, &command_pool);
    
    
    auto command_buffer_allocate_info=VkCommandBufferAllocateInfo{};
    command_buffer_allocate_info.sType=VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO;
    command_buffer_allocate_info.pNext=NULL;
    command_buffer_allocate_info.commandPool=command_pool;
    command_buffer_allocate_info.level=VK_COMMAND_BUFFER_LEVEL_PRIMARY;
    command_buffer_allocate_info.commandBufferCount=1;
    vkAllocateCommandBuffers(device,&command_buffer_allocate_info,&command_buffer);
    
    
    
    queue_present_init_finished=true;
}
void QueuePresent(VkPresentInfoKHR* info){
    
    std::map<uintptr_t, std::vector<VkImage>> swapchain_to_images;
    
    for(int i=0; i<info->swapchainCount; i++){
        uint32_t numImages=0;
        VkImage* images=NULL;
        auto swapchain=info->pSwapchains[i];
        auto device=swapchain_to_device[(uintptr_t)swapchain];
        
        queue_present_init(device);
        
        if (!swapchain_to_images.contains((uintptr_t)swapchain)){
            vkGetSwapchainImagesKHR(device,swapchain,&numImages,images);
            
            images=(VkImage*)malloc(numImages*sizeof(VkImage));
            vkGetSwapchainImagesKHR(swapchain_to_device[(uintptr_t)swapchain],swapchain,&numImages,images);
            
            std::vector<VkImage> vec(images, images + numImages);
            swapchain_to_images[(uintptr_t)swapchain]=vec;
        }
        
        
        auto imageIndex=info->pImageIndices[i];
        auto image=swapchain_to_images[(uintptr_t)swapchain][imageIndex];
        VkBuffer buffer;
        
        auto buffer_create_info=VkBufferCreateInfo{};
        buffer_create_info.sType=VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO;
        buffer_create_info.pNext=NULL;
        buffer_create_info.flags=0;
        buffer_create_info.size=100000;
        buffer_create_info.usage=0;
        buffer_create_info.sharingMode=VK_SHARING_MODE_EXCLUSIVE;
        buffer_create_info.queueFamilyIndexCount=0;
        buffer_create_info.pQueueFamilyIndices=NULL;
        
        vkCreateBuffer(device,&buffer_create_info,NULL,&buffer);
        
        VkDeviceMemory memory;
        auto memory_allocate_info=VkMemoryAllocateInfo{};
        memory_allocate_info.sType=VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO;
        memory_allocate_info.pNext=NULL;
        memory_allocate_info.allocationSize=100000;
        memory_allocate_info.memoryTypeIndex=0;
        
        vkAllocateMemory(device,&memory_allocate_info,NULL,&memory);
        
        
        
        
        vkCmdCopyImageToBuffer(
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
    

}