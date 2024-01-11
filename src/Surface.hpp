#include <vulkan/vulkan.h>
#include <any>
#include <vulkan/vulkan_core.h>
#include <map>
#include <iostream>
#include <shared_mutex>

enum SurfaceType {Xlib, Xcb};

//Automate generation of this file
#ifdef VK_USE_PLATFORM_XLIB_KHR
typedef struct {
    Display* dpy;
    Window window;
} XlibSurfaceInfo;
#endif 

#ifdef VK_USE_PLATFORM_XCB_KHR
    extern "C"{
        #include <xcb/xcb_image.h>
    }
typedef struct {
    xcb_connection_t* connection;
    xcb_window_t window;
} XcbSurfaceInfo;
#endif

typedef struct {
    SurfaceType type;
    std::any info;
} SurfaceInfo;

extern std::map<uintptr_t, VkDevice> swapchain_to_device;

void registerSurface(VkSurfaceKHR pSurface, std::any info, SurfaceType type);
void registerSwapchain(VkSwapchainKHR swapchain, VkDevice device, const VkSwapchainCreateInfoKHR* info);
void registerDevice(VkDevice device, VkPhysicalDevice phyiscal_device);
void QueueDisplay(VkFence* fences_list, const VkSwapchainKHR* swapchain_list, const uint32_t* index_list, uint32_t swapchain_count);