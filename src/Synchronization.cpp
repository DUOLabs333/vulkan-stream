#include <cstddef>
#include <cstdint>

#include <boost/json.hpp>
#include <Server.hpp>
#include <vulkan/vulkan.h>
#include <Serialization.hpp>
#include <unordered_map>
extern "C" {
#include <shm_open_anon.h>
}

#ifndef CLIENT
    #include <ThreadStruct.hpp>
#else
    #include <sys/mman.h>
#endif

std::unordered_map<uintptr_t,int> allocated_mems;
std::unordered_map<uintptr_t,uintptr_t> client_to_server_mem;
std::unordered_map<uintptr_t,uintptr_t> server_to_client_mem;

typedef struct {
int fd;
VkDeviceSize size;
void* mem;
uintptr_t server_devicememory; //So we can tell the server what deviceMemory to delete when unmapping
} MemInfo;

typedef std::unordered_map<uintptr_t,MemInfo*> mem_info_map;
#ifdef CLIENT
    mem_info_map devicememory_to_mem_info;
#else
    std::unordered_map<int, mem_info_map> uuid_to_map;
#endif

uint64_t HashMem(void* mem, uintptr_t start, uintptr_t length) {
    // 32 bit params
    // uint32_t constexpr fnv_prime = 16777619U;
    // uint32_t constexpr fnv_offset_basis = 2166136261U;

    // 64 bit params
    uint64_t constexpr fnv_prime = 1099511628211ULL;
    uint64_t constexpr fnv_offset_basis = 14695981039346656037ULL;
    
    uint64_t hash = fnv_offset_basis;
    
    std::string_view src_string((char*)mem+start, length);
    
    for(auto c: src_string) {
        hash ^= c;
        hash *= fnv_prime;
    }

    return hash;
}

void registerClientServerMemoryMapping(uintptr_t client_mem, uintptr_t server_mem){
    debug_printf("Memory mapping in progress...\n");

    client_to_server_mem[client_mem]=server_mem;
    server_to_client_mem[server_mem]=client_mem;

}

void deregisterClientServerMemoryMapping(uintptr_t client_mem){
    debug_printf("Memory unmapping in progress...\n");

    auto server_mem=client_to_server_mem[client_mem];
    
    server_to_client_mem.erase(server_mem);
    
    client_to_server_mem.erase(client_mem);

}

void* registerDeviceMemoryMap(uintptr_t server_memory, VkDeviceMemory memory, VkDeviceSize size, void* mem, uintptr_t server_mem){
debug_printf("DeviceMemory mapping in progress...\n");
auto info=new MemInfo();
info->size=size;
#ifdef CLIENT
    info->fd=shm_open_anon(); //Make new place for memory
    ftruncate(info->fd,info->size);
    
    info->mem=mmap(NULL,info->size, PROT_EXEC | PROT_READ | PROT_WRITE, MAP_SHARED, info->fd,0);
    
    auto client_mem=(uintptr_t)(info->mem);
    
    registerClientServerMemoryMapping(client_mem, server_mem);
    
    memcpy(info->mem,mem,info->size);
    
    info->server_devicememory=server_memory;
    devicememory_to_mem_info[(uintptr_t)memory]=info;
#else
info->mem=(void*)server_mem;
uuid_to_map[currStruct()->uuid][(uintptr_t)memory]=info;
#endif

return info->mem;
}

void SyncOne(uintptr_t, void*, size_t);
void deregisterDeviceMemoryMap(VkDeviceMemory memory){
debug_printf("DeviceMemory unmapping in progress...\n");
auto key=(uintptr_t)memory;

#ifdef CLIENT
    if (!devicememory_to_mem_info.contains(key)){ //Already deregistered
        return;
    }
    auto info=devicememory_to_mem_info[key];
    SyncOne(key,info->mem, info->size);
    deregisterClientServerMemoryMapping((uintptr_t)(info->mem));
    munmap(info->mem, info->size);
    close(info->fd);
    devicememory_to_mem_info.erase(key);
#else
    if (!uuid_to_map.contains(currStruct()->uuid) || !uuid_to_map[currStruct()->uuid].contains(key) ){ //Already deregistered
        return;
    }
    auto info=uuid_to_map[currStruct()->uuid][key];
    uuid_to_map[currStruct()->uuid].erase(key);
#endif


delete info;

}

void registerAllocatedMem(void* mem, int size){
    allocated_mems[(uintptr_t)mem]=size;
}
void handle_sync_response(boost::json::object& json){
    //Recieved the bytes. Send a notification that it finished sending the bytes.
    
    Sync sync;
    deserialize_Sync(json, sync);
    
    #ifdef CLIENT
        void* mem=(char*)server_to_client_mem[sync.mem];
    #else
        void* mem=(void*)(sync.mem);
    #endif
    
    for(int i=0; i < sync.starts.size(); i++){
        debug_printf("Memory %p: Data has changed!\n",(char*)mem);
        memcpy((char*)mem+sync.starts[i],sync.buffers[i].c_str(), sync.lengths[i]);
    }
    
    writeToConn(json);
}

void handle_sync_init(boost::json::object& json){
    //Received an init, sent a request for bytes. Wait for bytes to be sent
    
    Sync sync;
    deserialize_Sync(json, sync);
    
    #ifdef CLIENT
        if (!server_to_client_mem.contains(sync.mem)){
            debug_printf("Panic! It's not found!\n");
        }
        void* mem=(char*)server_to_client_mem[sync.mem];
    #else
        void* mem=(void*)(sync.mem);
    #endif
    
    auto starts=sync.starts;
    auto lengths=sync.lengths;
    auto hashes=sync.hashes;
    //After serialize and deserialize, clear json
    
    sync.starts.clear();
    sync.lengths.clear();
    sync.hashes.clear();
    
    for (int i=0; i<starts.size(); i++){
        if (HashMem(mem, starts[i], lengths[i])!= hashes[i]){
            sync.starts.push_back(starts[i]);
            sync.lengths.push_back(lengths[i]);
        }
    }
    
    serialize_Sync(json, sync);
    writeToConn(json);
    
    json=readFromConn();
    handle_sync_response(json);
    
    #ifndef CLIENT
        if (sync.devicememory!=0){
             deregisterDeviceMemoryMap((VkDeviceMemory)(sync.devicememory));
        }
    #endif
        
    
}

void handle_sync_request(boost::json::object& json){
    //Recieved a request for bytes, sent the bytes. Wait for the recipient to set the bytes
    
    Sync sync;
    deserialize_Sync(json, sync);
    
    #ifdef CLIENT
        void* mem=(void*)server_to_client_mem[sync.mem];
    #else
        void* mem=(void*)(sync.mem);
    #endif
    
    sync.buffers.resize(sync.starts.size());
    
    for(int i=0; i<sync.starts.size(); i++){
        auto length=sync.lengths[i];
        auto start=sync.starts[i];
        
        std::string_view buffer((char*)mem+start, length);
        
        sync.buffers[i]=buffer;
    }
    
    serialize_Sync(json, sync);
    writeToConn(json);
    
    readFromConn(); //Wait for the other computer to return that it's finished setting the bytes.
}

void SyncOne(uintptr_t devicememory, void* mem, size_t length){

    int parts=floor(sqrt(length));
    auto d=length/parts;
    auto remainder=length%parts;
    
    Sync sync;
    
    #ifdef CLIENT
        if (devicememory!=0){
            sync.devicememory=devicememory_to_mem_info[devicememory]->server_devicememory;
        }
    #endif
    
    sync.starts.resize(parts);
    sync.lengths.resize(parts);
    sync.hashes.resize(parts);
    
    #ifdef CLIENT
        sync.mem=client_to_server_mem[(uintptr_t)mem];
    #else
        sync.mem=(uintptr_t)mem;
    #endif
    
    auto offset=0;
    for (int i=0; i<remainder; i++){
        sync.starts[i]=offset;
        sync.lengths[i]=d+1;
        sync.hashes[i]=HashMem(mem,offset,d+1);
        offset+=(d+1);
    }
    
    for (int i=remainder; i<parts; i++){
        sync.starts[i]=offset;
        sync.lengths[i]=d;
        sync.hashes[i]=HashMem(mem,offset,d);
        offset+=d;
    }
    
    boost::json::object json;
    
    serialize_Sync(json, sync);
    writeToConn(json);
    
    json=readFromConn();
    handle_sync_request(json);
}

void SyncAll(){
#ifdef CLIENT
for (auto& [devicememory, mem_info] : devicememory_to_mem_info){
#else
for (auto& [devicememory, mem_info] : uuid_to_map[currStruct()->uuid]){
#endif

    SyncOne(0, mem_info->mem,mem_info->size);
}
}

void SyncAllocations(){
for (auto& [mem, size] : allocated_mems){
    SyncOne(0, (void*)mem, size);
}
}