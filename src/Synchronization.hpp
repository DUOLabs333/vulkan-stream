#include <vulkan/vulkan.h>
#include <debug.hpp>

void handle_sync_init(parsed_map&);
void SyncAll();
void SyncAllocations();
void* registerDeviceMemoryMap(uintptr_t server_memory, VkDeviceMemory memory, VkDeviceSize size, void* mem, uintptr_t server_mem);
void deregisterDeviceMemoryMap(VkDeviceMemory memory);
void registerAllocatedMem(void* mem, int size);
void registerClientServerMemoryMapping(uintptr_t client_mem, uintptr_t server_mem);
void deregisterClientServerMemoryMapping(uintptr_t client_mem);