#include <vulkan/vulkan.h>
#include <any>
#include <vulkan/vulkan_core.h>
#include <unordered_map>
#include <iostream>
#include <shared_mutex>
#include <debug.hpp>

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
    xcb_gcontext_t gc;
    uint8_t depth;
} XcbSurfaceInfo;
#endif

typedef struct {
    SurfaceType type;
    std::any info;
} SurfaceInfo;

static uint64_t VK_STREAM_TIMEOUT= std::numeric_limits<uint64_t>::max()-33; //Special marker for special behavior
static uint32_t VK_STREAM_SUBMIT_COUNT= std::numeric_limits<uint32_t>::max()-33; //Special marker for special behavior

VkDevice getSwapchainDevice(VkSwapchainKHR); //Made for one function in Commands.cpp
void registerSurface(VkSurfaceKHR pSurface, std::any info, SurfaceType type);
void registerSwapchain(VkSwapchainKHR swapchain, VkDevice device, const VkSwapchainCreateInfoKHR* info);
void deregisterSwapchain(VkSwapchainKHR swapchain);
void registerDevice(VkDevice device, VkPhysicalDevice phyiscal_device);
void waitForCounterIdle(VkDevice device);
void pushToQueue(VkFence, VkSwapchainKHR, uint32_t);
