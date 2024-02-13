#include <cstddef>
#include <cstdint>

#include <komihash.h>
#include <boost/json.hpp>
#include <memory>
#include <cpp_yyjson.hpp>
#include <turbob64.h>
#include <vulkan/vulkan.h>
#include <unordered_map>
#include <Serialization.hpp>
#include <Server.hpp>

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
void handle_sync_response(parsed_map& read_json){
    //Recieved the bytes. Send a notification that it finished sending the bytes.
    
    Sync sync;
    deserialize_Sync(read_json, sync);
    
    #ifdef CLIENT
        void* mem=(char*)server_to_client_mem[sync.mem];
    #else
        void* mem=(void*)(sync.mem);
    #endif
    
    for(int i=0; i < sync.starts.size(); i++){
        debug_printf("Memory %p: Data has changed!\n",(char*)mem);
        tb64dec(reinterpret_cast<const unsigned char*>(sync.buffers[i].data()), sync.buffers[i].size(), reinterpret_cast<unsigned char*>((char*)mem+sync.starts[i]));
    }
    
    boost::json::object write_json;
    write_json.clear();
    writeToConn(write_json);
}

void handle_sync_init(parsed_map& read_json){
    //Received an init, sent a request for bytes. Wait for bytes to be sent
    
    Sync sync;
    deserialize_Sync(read_json, sync);
    
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
    
    boost::json::object write_json;
    serialize_Sync(write_json, sync);
    writeToConn(write_json);
    
    read_json=readFromConn();
    handle_sync_response(read_json);
    
    #ifndef CLIENT
        if (sync.devicememory!=0){
             deregisterDeviceMemoryMap((VkDeviceMemory)(sync.devicememory));
        }
    #endif
        
    
}

void handle_sync_request(parsed_map& read_json){
    //Recieved a request for bytes, sent the bytes. Wait for the recipient to set the bytes
    
    Sync sync;
    deserialize_Sync(read_json, sync);
    
    #ifdef CLIENT
        void* mem=(void*)server_to_client_mem[sync.mem];
    #else
        void* mem=(void*)(sync.mem);
    #endif
    
    sync.buffers.resize(sync.starts.size());
    
    std::array<std::tuple<int, char*>, 3> temp_buffers;
    
    if (sync.lengths.size()>=1){
        auto length=sync.lengths[0];
        temp_buffers= {{ {length-1, new char[tb64enclen(length-1)]},  {length, new char[tb64enclen(length)]},  {length+1, new char[tb64enclen(length+1)]} }};
    }
    
    for(int i=0; i<sync.starts.size(); i++){
        auto length=sync.lengths[i];
        auto start=sync.starts[i];
        
        auto buffer=std::get<1>(temp_buffers[length-std::get<0>(temp_buffers[0])]);
        auto encoded_size=tb64enc(reinterpret_cast<unsigned char*>((char*)mem+start), length, reinterpret_cast<unsigned char*>(buffer));
        
        sync.buffers[i]=std::string(buffer,buffer+encoded_size);
    }
    
    if (sync.lengths.size()>=1){
        for(auto& elem: temp_buffers){
            delete[] std::get<1>(elem);
        }
    }
    
    boost::json::object write_json;
    serialize_Sync(write_json, sync);
    writeToConn(write_json);
    
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
    
    auto read_json=readFromConn();
    handle_sync_request(read_json);
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