#include <vulkan/vulkan.h>
#include <any>
#include <vulkan/vulkan_core.h>
#include <unordered_map>
#include <iostream>
#include <shared_mutex>
#include <debug.hpp>
#include <memory>
#include <optional>

enum SurfaceType {Xlib, Xcb};

struct hash_tuple {

    template <class T1, class T2, class T3, class T4>

    size_t operator()(
        const std::tuple<T1, T2, T3, T4>& x)
        const
    {
        return (uint64_t)(std::get<0>(x))
               ^ std::get<1>(x)
               ^ std::get<2>(x)
               ^ std::get<3>(x);
    }
};

#ifdef VK_USE_PLATFORM_XLIB_KHR
#include <X11/extensions/XShm.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <cstring>

typedef struct {
    Display* dpy;
    Window window;
    GC gc;
    std::unordered_map<std::tuple<Visual*, int, uint32_t, uint32_t>, std::tuple<XImage*, XShmSegmentInfo, int>, hash_tuple> images;

    std::shared_ptr<std::mutex> images_mutex;
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
    std::optional<std::chrono::time_point<std::chrono::steady_clock>> now;
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
