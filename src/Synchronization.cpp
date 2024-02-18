#include <cstddef>
#include <cstdint>

#include <komihash.h>
#include <boost/json.hpp>
#include <turbob64.h>
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

std::unordered_map<uintptr_t,uintptr_t> client_to_server_mem;
std::unordered_map<uintptr_t,uintptr_t> server_to_client_mem;

typedef struct {
int fd;
VkDeviceSize size;
void* mem;
uintptr_t server_devicememory; //So we can tell the server what deviceMemory to delete when unmapping
uint64_t prev_hash =0;
std::vector<uint64_t> prev_hashes;
} MemInfo;

typedef std::unordered_map<uintptr_t,MemInfo*> mem_info_map;
#ifdef CLIENT
    mem_info_map devicememory_to_mem_info;
#else
    std::unordered_map<int, mem_info_map> uuid_to_map;
#endif

uint64_t HashMem(void* mem, uintptr_t start, uintptr_t length) {
    return komihash((char*)mem+start, length, 500);
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

void SyncOne(uintptr_t, MemInfo*);
void deregisterDeviceMemoryMap(VkDeviceMemory memory){
debug_printf("DeviceMemory unmapping in progress...\n");
auto key=(uintptr_t)memory;

#ifdef CLIENT
    if (!devicememory_to_mem_info.contains(key)){ //Already deregistered
        return;
    }
    auto info=devicememory_to_mem_info[key];
    SyncOne(key, info);
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

void handle_sync(boost::json::object& json){
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
        tb64dec(reinterpret_cast<const unsigned char*>(sync.buffers[i].data()), sync.buffers[i].size(), reinterpret_cast<unsigned char*>((char*)mem+sync.starts[i]));
    }
    
    #ifndef CLIENT
        if (sync.devicememory!=0){
             deregisterDeviceMemoryMap((VkDeviceMemory)(sync.devicememory));
        }
    #endif
    
    json.clear();
    writeToConn(json);
}

void SyncOne(uintptr_t devicememory, MemInfo* info){
    
    auto size=info->size;
    auto mem=info->mem;
    auto& prev_hash=info->prev_hash;
    auto& prev_hashes=info->prev_hashes;
    
    //int parts=floor(sqrt(length));
    int parts=10;
    auto d=size/parts;
    auto remainder=size%parts;
    
    Sync sync;
    
    #ifdef CLIENT
        if (devicememory!=0){
            sync.devicememory=devicememory_to_mem_info[devicememory]->server_devicememory;
        }
    #endif
    
    auto new_hash=HashMem(mem, 0, size);
    if (sync.devicememory==0){ //If devicememory!=0, then the sync must be sent, no matter what
        if (new_hash==prev_hash){
            return;
        }
    }
    prev_hash=new_hash;
    
    prev_hashes.resize(parts);
    
    #ifdef CLIENT
        sync.mem=client_to_server_mem[(uintptr_t)mem];
    #else
        sync.mem=(uintptr_t)mem;
    #endif

    auto b64buffer=new char[tb64enclen(d+1)];
    
    auto offset=0;
    for (int i=0; i<parts; i++){
        int length;
        if (i < remainder){
            length=d+1;
        }else{
            length=d;
        }
        
        auto hash=HashMem(mem,offset, length);
        if (hash!=prev_hashes[i]){
            sync.starts.push_back(offset);
            sync.lengths.push_back(length);
            
            auto encoded_size=tb64enc(reinterpret_cast<unsigned char*>((char*)mem+offset), length, reinterpret_cast<unsigned char*>(b64buffer));
            
            sync.buffers.push_back(std::string(b64buffer,b64buffer+encoded_size));
            
            prev_hashes[i]=hash;
        }
        offset+=length;
    }
    
    delete[] b64buffer;
    boost::json::object json;
    
    serialize_Sync(json, sync);
    writeToConn(json);
    
    readFromConn();
}

void SyncAll(){
#ifdef CLIENT
for (auto& [devicememory, mem_info] : devicememory_to_mem_info){
#else
for (auto& [devicememory, mem_info] : uuid_to_map[currStruct()->uuid]){
#endif

    SyncOne(0, mem_info);
}
}