void handle_sync_init(json data);
void SyncAll();
void SyncAllocations();
void* registerDeviceMemoryMap(VkDeviceMemory memory, VkDeviceSize size, void* mem, uintptr_t server_mem);
void registerAllocatedMem(void* mem, int size);
void registerClientServerMemoryMapping(uintptr_t client_mem, uintptr_t server_mem);