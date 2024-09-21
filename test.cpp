#include <cstdint>
#include <vulkan/vulkan.h>
#include <vulkan/vulkan_core.h>
#include <cstdio>

int main(){
	VkPhysicalDevice device;
	VkInstance instance;
	
	const char* extensions[]={"VK_KHR_portability_enumeration", NULL};

	VkInstanceCreateInfo create_info = {.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO, .pNext = NULL, .flags = VK_INSTANCE_CREATE_ENUMERATE_PORTABILITY_BIT_KHR, .pApplicationInfo = NULL, .enabledLayerCount = 0, .ppEnabledLayerNames = NULL, .enabledExtensionCount = 1, .ppEnabledExtensionNames = extensions};

	vkCreateInstance(&create_info, NULL, &instance);
	uint32_t device_count = 1;
	vkEnumeratePhysicalDevices(instance, &device_count, &device);
	
	VkPhysicalDeviceProperties props;
	
	props.limits.maxUniformBufferRange = 1;
	vkGetPhysicalDeviceProperties(device, &props);

	printf("%d\n", props.limits.maxUniformBufferRange);

}
