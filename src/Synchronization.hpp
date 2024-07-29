#include <vulkan/vulkan.h>
#include <debug.hpp>
#include <vulkan/vulkan_core.h>

void handle_sync_init(Sync&);
void handle_sync_init(boost::json::object&);
void SyncAll();
void SyncOne(VkDeviceMemory memory, int offset, VkDeviceSize size, bool unmap);
void SyncAllocations();
void* registerDeviceMemoryMap(uint64_t server_memory, VkDeviceMemory memory, VkDeviceSize size, void* mem, uint64_t server_mem, bool);
void deregisterDeviceMemoryMap(VkDeviceMemory memory);
void registerAllocatedMem(void* mem, int size);
void registerClientServerMemoryMapping(uint64_t client_mem, uint64_t server_mem);
void deregisterClientServerMemoryMapping(uint64_t client_mem);
