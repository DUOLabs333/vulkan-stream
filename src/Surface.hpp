#include <vulkan/vulkan.h>
#include <any>
#include <vulkan/vulkan_core.h>
#include <map>

enum SurfaceType {Xlib, Xcb};

typedef struct {
    Display* dpy;
    Window window;
} XlibSurfaceInfo;

typedef struct {
    xcb_connection_t* connection;
    xcb_window_t window;
} XcbSurfaceInfo;

typedef struct {
    SurfaceType type;
    std::any info;
} SurfaceInfo;

void registerSurface(VkSurfaceKHR pSurface, std::any info, SurfaceType type); 