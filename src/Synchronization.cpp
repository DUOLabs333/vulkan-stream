#include <cstddef>
#include <cstdint>


#include <xxhash.h>
#include <turbob64.h>

#include <boost/json.hpp>
#include <glaze/glaze.hpp>

#include <vulkan/vulkan.h>
#include "Server.hpp"
#include "Synchronization.hpp"
#include <unordered_map>
extern "C" {
#include <shm_open_anon.h>
}

#ifndef CLIENT
    #include "ThreadStruct.hpp"
#else
    #include <sys/mman.h>
#endif

std::unordered_map<uint64_t,int> allocated_mems;
std::unordered_map<uint64_t,uint64_t> client_to_server_mem;
std::unordered_map<uint64_t,uint64_t> server_to_client_mem;

typedef struct {
int fd;
VkDeviceSize size;
void* mem;
uint64_t server_devicememory; //So we can tell the server what deviceMemory to delete when unmapping
uint64_t prev_hash =0;
bool coherent;
} MemInfo;

template<typename K, typename V>
class Map {
	private:
	typedef std::unordered_map<K, V> map_type;
	#ifdef CLIENT
		map_type _map;
	#else
		std::unordered_map<int, map_type> _map;
	#endif
	public:
		V& operator[](const K key){
			#ifdef CLIENT
				return _map[key];
			#else
				return _map[currStruct().uuid][key];
			#endif
		}

		bool contains(const K key){
			#ifdef CLIENT
				return _map.contains(key);
			#else
				auto uuid=currStruct().uuid;
				return _map.contains(uuid) && _map[uuid].contains(key);
			#endif
		}

		void erase(const K key){
			#ifdef CLIENT
				_map.erase(key);
			#else	
				auto uuid=currStruct().uuid;
				_map[uuid].erase(key);
				if (_map[uuid].empty()){
					_map.erase(uuid);
				}
			#endif
		}

		map_type::iterator begin(){
			#ifdef CLIENT
				return _map.begin();
			#else
				return _map[currStruct().uuid].begin();
			#endif
		}

		map_type::iterator end(){
			#ifdef CLIENT
				return _map.end();
			#else
				return _map[currStruct().uuid].end();
			#endif
		}
			
};	

Map<uintptr_t,MemInfo> devicememory_to_mem_info;

uint64_t HashMem(void* mem, uint64_t start, uint64_t length) {
    return XXH3_64bits((char*)mem+start,length);
}

void registerClientServerMemoryMapping(uint64_t client_mem, uint64_t server_mem){
    debug_printf("Memory mapping in progress...\n");

    client_to_server_mem[client_mem]=server_mem;
    server_to_client_mem[server_mem]=client_mem;

}

void deregisterClientServerMemoryMapping(uint64_t client_mem){
    debug_printf("Memory unmapping in progress...\n");

    auto server_mem=client_to_server_mem[client_mem];
    
    server_to_client_mem.erase(server_mem);
    
    client_to_server_mem.erase(client_mem);

}

void* registerDeviceMemoryMap(uint64_t server_memory, VkDeviceMemory memory, VkDeviceSize size, void* mem, uint64_t server_mem, bool coherent){
	debug_printf("DeviceMemory mapping in progress...\n");
	
	auto& info=devicememory_to_mem_info[(uint64_t)memory];

	info.size=size;
	info.coherent=coherent;
	#ifdef CLIENT
	    info.fd=shm_open_anon(); //Make new place for memory
	    ftruncate(info.fd,info.size);
	    
	    info.mem=mmap(NULL,info.size, PROT_EXEC | PROT_READ | PROT_WRITE, MAP_SHARED, info.fd,0);
	    
	    auto client_mem=(uint64_t)(info.mem);
	    
	    registerClientServerMemoryMapping(client_mem, server_mem);
	    
	    memcpy(info.mem,mem,info.size);
	    
	    info.server_devicememory=server_memory;    
	    free(mem); //Important: This only applies to the client --- the memory must still be alive on the server
	#else
		info.mem=(void*)server_mem;
	#endif

	return info.mem;
}

void deregisterDeviceMemoryMap(VkDeviceMemory memory){
debug_printf("DeviceMemory unmapping in progress...\n");
	auto key=(uint64_t)memory;

	if (!devicememory_to_mem_info.contains(key)){ //Already deregistered
		return;
	}

	#ifdef CLIENT
	    auto& info=devicememory_to_mem_info[key];
	    SyncOne(memory, 0, VK_WHOLE_SIZE, true);
	    deregisterClientServerMemoryMapping((uint64_t)(info.mem));
	    munmap(info.mem, info.size);
	    close(info.fd);
	#endif

	devicememory_to_mem_info.erase(key);
}

void registerAllocatedMem(void* mem, int size){
    allocated_mems[(uint64_t)mem]=size;
}
void handle_sync_response(Sync& sync){
    //Recieved the bytes. Send a notification that it finished sending the bytes.

    #ifdef CLIENT
        void* mem=(char*)server_to_client_mem[sync.mem];
    #else
        void* mem=(void*)(sync.mem);
    #endif
    
    for(int i=0; i < sync.starts.size(); i++){
        debug_printf("Memory %p: Data has changed!\n",(char*)mem);
        tb64dec(reinterpret_cast<const unsigned char*>(sync.buffers[i].data()), sync.buffers[i].size(), reinterpret_cast<unsigned char*>((char*)mem+sync.starts[i]));
    }
    
    boost::json::object json;
    writeToConn(json);
}

void handle_sync_init(boost::json::object& json){
    //Received an init, sent a request for bytes. Wait for bytes to be sent
    
    Sync sync; //Hacky workaround for the lack of reflection available in boost
    auto str=boost::json::serialize(json);
    glz::read_json(sync,str);

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
    
    writeToConn(sync);
    readFromConn(sync);

    handle_sync_response(sync);
    
    if (sync.devicememory!=0 && !sync.unmap && starts.size()>0){
    	VkDeviceMemory target_devicememory;
        #ifdef CLIENT
            auto server_devicememory=boost::json::value(sync.devicememory);
            deserialize_VkDeviceMemory(server_devicememory, target_devicememory);
	#else
		target_devicememory=(VkDeviceMemory)sync.devicememory;
	#endif

        auto& info=devicememory_to_mem_info[(uint64_t)target_devicememory];
        info.prev_hash=HashMem(info.mem, 0, info.size);
    }
    
    #ifndef CLIENT
        if (sync.unmap){
             deregisterDeviceMemoryMap((VkDeviceMemory)(sync.devicememory));
        }
    #endif
        
    
}

void handle_sync_request(Sync& sync){
    //Recieved a request for bytes, sent the bytes. Wait for the recipient to set the bytes
        
    #ifdef CLIENT
        void* mem=(void*)server_to_client_mem[sync.mem];
    #else
        void* mem=(void*)(sync.mem);
    #endif
    
    sync.buffers.resize(sync.starts.size());
    
    char* temp_buffer=NULL;
    
    if (sync.lengths.size()>=1){
        temp_buffer=new char[tb64enclen(sync.lengths[0]+1)];
    }
    
    for(int i=0; i<sync.starts.size(); i++){
        auto length=sync.lengths[i];
        auto start=sync.starts[i];

        auto encoded_size=tb64enc(reinterpret_cast<unsigned char*>((char*)mem+start), length, reinterpret_cast<unsigned char*>(temp_buffer));
        
        sync.buffers[i]=std::move(std::string(temp_buffer,temp_buffer+encoded_size));
    }
    
    if (temp_buffer!=NULL){
    	delete[] temp_buffer;
    }
    
    writeToConn(sync);
    
    readFromConn(); //Wait for the other computer to return that it's finished setting the bytes.
}

void SyncOne(uint64_t devicememory, void* mem, int offset, size_t length, bool unmap){

    //int parts=floor(sqrt(length));
    //int parts=10;
    int parts=1;
    auto d=length/parts;
    auto remainder=length%parts;
    
    Sync sync;
    
     if (devicememory!=0){
        #ifdef CLIENT
            sync.devicememory=devicememory_to_mem_info[devicememory].server_devicememory;
        #else
            sync.devicememory=devicememory;
        #endif
     }
    
    sync.starts.resize(parts);
    sync.lengths.resize(parts);
    sync.hashes.resize(parts);
    sync.unmap=unmap;
    
    #ifdef CLIENT
        sync.mem=client_to_server_mem[(uint64_t)mem];
    #else
        sync.mem=(uint64_t)mem;
    #endif
    
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
    
    writeToConn(sync);
    readFromConn(sync);
    handle_sync_request(sync);
}

void SyncOne(VkDeviceMemory memory, int offset, VkDeviceSize size, bool unmap){
    auto devicememory=(uint64_t)memory;
    
    auto& info=devicememory_to_mem_info[devicememory];


    if (size==VK_WHOLE_SIZE){
        size=info.size-offset;
    }
    
    if (!unmap){
        auto hash=HashMem(info.mem, 0, info.size);
        if (hash==info.prev_hash){
            return;
        }
        info.prev_hash=hash;
    }
    SyncOne(devicememory, info.mem, offset, size, unmap);
}

void SyncAll(){
	for (auto& [devicememory, mem_info] : devicememory_to_mem_info){
	    if (mem_info.coherent){
		SyncOne((VkDeviceMemory)devicememory, 0, VK_WHOLE_SIZE, false);
	    }
	}
}

void SyncAllocations(){
for (auto& [mem, size] : allocated_mems){
    SyncOne(0, (void*)mem, 0, size, false);
}
}
