#include <cstddef>
#include <cstdint>
#include <picosha2.h>

#include <schema.capnp.h>
using namespace capnp;

#include <Server.hpp>
#include <vulkan/vulkan.h>
#include <Serialization.hpp>
#include <map>
extern "C" {
#include <shm_open_anon.h>
}

#ifndef CLIENT
    #include <ThreadStruct.hpp>
#else
    #include <sys/mman.h>
#endif

std::map<uintptr_t,int> allocated_mems;
std::map<uintptr_t,uintptr_t> client_to_server_mem;
std::map<uintptr_t,uintptr_t> server_to_client_mem;

typedef struct {
int fd;
VkDeviceSize size;
void* mem;
uintptr_t server_devicememory; //So we can tell the server what deviceMemory to delete when unmapping
} MemInfo;

typedef std::map<uintptr_t,MemInfo*> mem_info_map;
#ifdef CLIENT
    mem_info_map devicememory_to_mem_info;
#else
    std::map<int, mem_info_map> uuid_to_map;
#endif


std::string HashMem(void* mem, uintptr_t start, uintptr_t length){
    
    std::string src_string((char*)mem+start,(char*)mem+start+length);
    
    std::vector<unsigned char> hash(picosha2::k_digest_size);
    
    picosha2::hash256(src_string.begin(), src_string.end(), hash.begin(), hash.end());
    
    return picosha2::bytes_to_hex_string(hash.begin(), hash.end());
    
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

void Sync(uintptr_t, void*, size_t);
void deregisterDeviceMemoryMap(VkDeviceMemory memory){
debug_printf("DeviceMemory unmapping in progress...\n");
auto key=(uintptr_t)memory;

#ifdef CLIENT
    if (!devicememory_to_mem_info.contains(key)){ //Already deregistered
        return;
    }
    auto info=devicememory_to_mem_info[key];
    Sync(key,info->mem, info->size);
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
void handle_sync_response(Sync::Reader& reader){
    //Recieved the bytes. Send a notification that it finished sending the bytes.
    #ifdef CLIENT
        void* mem=(char*)server_to_client_mem[value_to<uintptr_t>(data["mem"])];
    #else
        void* mem=(void*)value_to<uintptr_t>(data["mem"]);
    #endif
    
    MallocMessageBuilder m;
    auto message=m.initRoot<Message>();
    auto builder=message.initSync();
    
    auto starts=reader.getStarts();
    auto lengths=reader.getLengths();
    auto buffers=reader.getBuffers();
    
    for(int i=0; i < starts.size(); i++){
        debug_printf("Memory %p: Data has changed!\n",(char*)mem);
        memcpy((char*)mem+starts[i],buffers[i].begin(), lengths[i]);
    }
    
    writeToConn(m);
}

void handle_sync_init(Sync::Reader& reader){
    //Received an init, sent a request for bytes. Wait for bytes to be sent
   
    #ifdef CLIENT
        if (!server_to_client_mem.contains(reader.getMem())){
            debug_printf("Panic! It's not found!\n");
        }
        void* mem=(char*)server_to_client_mem[reader.getMem()];
    #else
        void* mem=(void*)(reader.getMem());
    #endif
    
    MallocMessageBuilder m;
    auto message=m.initRoot<Message>();
    auto builder=message.initSync();
    
    auto readerStarts=reader.getStarts();
    auto readerLengths=reader.getLengths();
    auto readerHashes=reader.getHashes();
    
    builder.setMem(reader.getMem());
    
    std::vector<std::array<size_t, 2>> sections;
    
    for (int i=0; i<readerStarts.size(); i++){
        if (HashMem(mem, readerStarts[i], readerLengths[i])!= readerHashes[i]){
            sections[i].push_back({readerStarts[i],readerLengths[i]});
        }
    }
    
    auto builderStarts=builder.initStarts(sections.size());
    auto builderLengths=builder.initLengths(sections.size());
    
    for (int i=0; i< sections.size(); i++){
        builderStarts[i]=sections[i][0];
        builderLengths[i]=sections[i][1];
    }
        
    writeToConn(m);
    
    while(true){
        auto reader=readFromConn().getRoot<Sync>();
        handle_sync_response(reader);
        break;
    }
    
    #ifndef CLIENT
        if (data.contains("devicememory")){
             auto devicememory = value_to<uintptr_t>(data["devicememory"]);
            deregisterDeviceMemoryMap((VkDeviceMemory)devicememory);
        }
    #endif
        
    
}

void handle_sync_request(Sync::Reader& reader){
    //Recieved a request for bytes, sent the bytes. Wait for the recipient to set the bytes
    #ifdef CLIENT
        void* mem=(void*)server_to_client_mem[reader.getMem()];
    #else
        void* mem=(void*)(reader.getMem());
    #endif
    
    MallocMessageBuilder m;
    auto message=m.initRoot<Message>();
    auto builder=message.initSync();
    
    auto readerStarts=reader.getStarts();
    auto readerLengths=reader.getLengths();
    
    builder.setStarts(readerStarts);
    builder.setLengths(readerLengths);
    builder.setMem(reader.getMem());
    
    auto builderBuffers=builder.initBuffers(readerStarts.size());
    
    for(int i=0; i<readerStarts.size(); i++){
        auto length=readerLengths[i];
        auto start=readerStarts[i];
        
        std::string buffer((char*)mem+start, (char*)mem+start+length);
        
        builderBuffers.set(i, buffer);
    }
    
    writeToConn(m);
    
    while(true){
        readFromConn(); //Wait for the other computer to return that it's finished setting the bytes.
        break;
    }
}

void Sync(uintptr_t devicememory, void* mem, size_t length){

    int parts=10;
    auto d=length/parts;
    auto remainder=length%parts;
    
    MallocMessageBuilder m;
    auto message=m.initRoot<Message>();
    auto builder=message.initSync();
    
    #ifdef CLIENT
        if (devicememory!=0){
            builder.setDevicememory(devicememory_to_mem_info[devicememory]->server_devicememory);
        }
    #endif
    
    auto starts=build.initStarts(parts);
    auto lengths=build.initLengths(parts);
    auto hashes=build.initHashes(parts);
    
    #ifdef CLIENT
        builder.setMem(client_to_server_mem[(uintptr_t)mem]);
    #else
        builder.setMem((uintptr_t)mem);
    #endif
    
    auto offset=0;
    for (int i=0; i<remainder; i++){
        starts.set(i,offset);
        lengths.set(i,d+1);
        hashes.set(i,HashMem(mem,offset,d+1));
        offset+=(d+1);
    }
    
    for (int i=0; i<(parts-remainder); i++){
        starts.set(i,offset);
        lengths.set(i,d);
        hashes.set(i,HashMem(mem,offset,d));
        offset+=d;
    }
    
    writeToConn(m);
    
    while(true){
        auto reader=readFromConn();
        handle_sync_request(reader);
       break;
    }
}

void SyncAll(){
#ifdef CLIENT
for (auto& [devicememory, mem_info] : devicememory_to_mem_info){
#else
for (auto& [devicememory, mem_info] : uuid_to_map[currStruct()->uuid]){
#endif

    Sync(0, mem_info->mem,mem_info->size);
}
}

void SyncAllocations(){
for (auto& [mem, size] : allocated_mems){
    Sync(0, (void*)mem, size);
}
}