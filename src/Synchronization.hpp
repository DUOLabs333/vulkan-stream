#include <vulkan/vulkan.h>
#include <debug.hpp>
#include <vulkan/vulkan_core.h>

void handle_sync_init(boost::json::object&);
void SyncAll();
void SyncOne(VkDeviceMemory memory, int offset, VkDeviceSize size, bool unmap);
void SyncAllocations();
void* registerDeviceMemoryMap(uintptr_t server_memory, VkDeviceMemory memory, VkDeviceSize size, void* mem, uintptr_t server_mem, bool);
void deregisterDeviceMemoryMap(VkDeviceMemory memory);
void registerAllocatedMem(void* mem, int size);
void registerClientServerMemoryMapping(uintptr_t client_mem, uintptr_t server_mem);
void deregisterClientServerMemoryMapping(uintptr_t client_mem);