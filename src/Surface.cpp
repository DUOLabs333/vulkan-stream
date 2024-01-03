#include "Surface.hpp"
#include <cstdint>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <vulkan/vulkan_core.h>

std::map<uintptr_t, SurfaceInfo> surface_to_info;
std::map<uintptr_t, VkSurfaceKHR> swapchain_to_surface;
std::map<uintptr_t, VkDevice> swapchain_to_device;

void registerSurface(VkSurfaceKHR pSurface, std::any info, SurfaceType type){
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

void QueuePresent(VkPresentInfoKHR* info){
    std::map<uintptr_t, std::vector<VkImage>> swapchain_to_images;
    
    for(int i=0; i<info->swapchainCount; i++){
        uint32_t numImages=0;
        VkImage* images=NULL;
        auto swapchain=info->pSwapchains[i];
        auto device=swapchain_to_device[(uintptr_t)swapchain];
        
        if (!swapchain_to_images.contains((uintptr_t)swapchain)){
            vkGetSwapchainImagesKHR(device,swapchain,&numImages,images);
            
            images=(VkImage*)malloc(numImages*sizeof(VkImage));
            vkGetSwapchainImagesKHR(swapchain_to_device[(uintptr_t)swapchain],swapchain,&numImages,images);
            
            std::vector<VkImage> vec(images, images + numImages);
            swapchain_to_images[(uintptr_t)swapchain]=vec;
        }
        
        auto imageIndex=info->pImageIndices[i];
        auto image=swapchain_to_images[(uintptr_t)swapchain][imageIndex];
        
        auto copy_info=VkCopyImageToMemoryInfoEXT{};
        copy_info.sType=VK_STRUCTURE_TYPE_COPY_IMAGE_TO_MEMORY_INFO_EXT;
        copy_info.pNext=NULL;
        
        vkCopyImageToMemoryEXT(device,&copy_info);
    }
    
    
    //Then, copy image into memory (make each memory 50kb and hard code it in)
}