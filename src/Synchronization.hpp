
extern std::map<uintptr_t,int> allocated_mems;
extern std::map<uintptr_t,uintptr_t> client_to_server_mem;
extern std::map<uintptr_t,uintptr_t> server_to_client_mem;

void handle_sync_init(json data);
void Sync(void* mem, uintptr_t length);