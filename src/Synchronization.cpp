#include <PicoSHA2/picosha2.h>

#include <nlohmann/json_fwd.hpp>
using json = nlohmann::json;

std::string HashMem(void* mem, uintptr_t start, uintptr_t length){
    char* src_char_array=malloc(sizeof(char)*(length+1));
    
    strncpy(src_char_array,(char*)(mem+start),length);
    
    src_char_array[length]='\0';
    
    std::string src_string(src_char_array);
    
    std::vector<unsigned char> hash(picosha2::k_digest_size);
    
    picosha2::hash256(src_string.begin(), src_string.end(), hash.begin(), hash.end());
    
    return picosha2::bytes_to_hex_string(hash.begin(), hash.end());
    
}
    
void handle_sync_init(json data){
    //Recived an init, sent a request for bytes. Wait for bytes to be sent
    #ifdef CLIENT
        void* mem=(void*)server_to_client_mem[data["mem"]];
    #else
        void* mem=(void*)data["mem"];
    #endif
    
    json result=json({});
    
    result["type"]="sync_request";
    result["ranges"]={};
    result["lengths"]={};
    result["mem"]=data["mem"];
    
    for (int i=0; i<data["ranges"].size(); i++){
        if (HashMem(mem,data["ranges"][i],data["lengths"][i])!=data["hashes"][i]){
            result["ranges"].push_back(data["ranges"][i]);
            result["lengths"].push_back(data["lengths"][i]);
        }
    }
    
    sendtoConn(result);
    
    
    while(true){
        std::string type=result["type"]
        if (result["type"]=="sync_response"){
            handle_sync_response(json data);
            break;
        }
    }
}

void handle_sync_request(json data){
    //Recieved a request for bytes, sent the bytes. Wait for the recipient to set the bytes
    #ifdef CLIENT
        void* mem=(void*)server_to_client_mem[data["mem"]];
    #else
        void* mem=(void*)data["mem"];
    #endif
    
    json result=json({});
    
    result["type"]="sync_response";
    result["ranges"]=data["ranges"];
    result["lengths"]=data["lengths"];
    result["mem"]=data["mem"];
    
    result["buffers"]={};
    
    for(int i=0; i<data["ranges"].size(); i++){
        void* buffer=malloc(sizeof(char)*data["lengths"][i]);
        memcpy(buffer,mem+range,data["lengths"][i]);
        result["buffers"].push_back(buffer);
    }
    
    sendtoConn(result);
    
    while(true){
        result=readfromConn();
        if(result["type"]=="handle_sync_end"){
           break;
        }
    }

void handle_sync_response(json data){
    //Recieved the bytes. Send a notification that it finished sending the bytes.
    #ifdef CLIENT
        void* mem=(void*)server_to_client_mem[data["mem"]];
    #else
        void* mem=(void*)data["mem"];
    #endif
    
    result=json({});
    
    result["type"]="handle_sync_end"];
    
    void* buffer=malloc(sizeof(char)*data["length"];
    
    for(int i=0; i < data["ranges"].size(); i++){
        memcpy(mem+data["ranges"][i],(void*)data["buffers"][i],data["lengths"][i]);
    }
    
    sendtoConn(result);
    
    #ifndef CLIENT
        thread_to_mem_to_sync[pthread_self()].insert((uintptr_t)mem)
    #endif
}


void Sync(void* mem, uintptr_t length){
    int parts=10;
    auto d=length/parts;
    auto remainder=length%parts;
    
    json result=json({});
    result["type"]="sync_init";
    result["ranges"]={};
    result["lengths"]={};
    result["hashes"]={};
    
    auto offset=0;
    for (int i=0; i<remainder; i++){
        result["ranges"].push_back(offset);
        result["lengths"].push_back(d+1);
        result["hashes"].push_back(HashMem(mem,offset,d+1));
        offset+=(d+1);
    }
    
    for (int i=0; i<(parts-remainder); i++){
        result["ranges"].push_back(offset);
        result["lengths"].push_back(d);
        result["hashes"].push_back(HashMem(mem,offset,d));
        offset+=d;
    }
    
    sendtoConn(result);
    
    while(true){
        data=readfromConn();
        
        if(data["type"]=="sync_request"){
            handle_sync_request(data);
            break;
        }
    }
}