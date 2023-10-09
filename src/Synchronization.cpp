#include <cstddef>
#include <picosha2.h>
#include <nlohmann/json.hpp>
#include <Server.hpp>

#ifndef CLIENT
    #include <ThreadStruct.hpp>
#endif

using json = nlohmann::json;

std::map<uintptr_t,int> allocated_mems;
std::map<uintptr_t,uintptr_t> client_to_server_mem;
std::map<uintptr_t,uintptr_t> server_to_client_mem;
std::string HashMem(void* mem, uintptr_t start, uintptr_t length){
    char* src_char_array=(char*)malloc(sizeof(char)*(length+1));
    
    strncpy(src_char_array,(char*)mem+start,length);
    
    src_char_array[length]='\0';
    
    std::string src_string(src_char_array);
    
    std::vector<unsigned char> hash(picosha2::k_digest_size);
    
    picosha2::hash256(src_string.begin(), src_string.end(), hash.begin(), hash.end());
    
    return picosha2::bytes_to_hex_string(hash.begin(), hash.end());
    
}


void handle_sync_response(json data){
    //Recieved the bytes. Send a notification that it finished sending the bytes.
    #ifdef CLIENT
        void* mem=(char*)server_to_client_mem[data["mem"]];
    #else
        void* mem=(void*)data["mem"].get<uintptr_t>();
    #endif
    
    auto result=json({});
    
    result["type"]="handle_sync_end";
    
    for(int i=0; i < data["starts"].size(); i++){
        memcpy((char*)mem+data["starts"][i].get<size_t>(),data["buffers"][i].get<std::string>().c_str(),data["lengths"][i].get<size_t>());
    }
    
    writeToConn(result);
    
    #ifndef CLIENT
        currStruct()->mem_to_sync->insert((uintptr_t)mem);
    #endif
}

void handle_sync_init(json data){
    //Recived an init, sent a request for bytes. Wait for bytes to be sent
    #ifdef CLIENT
        void* mem=(char*)server_to_client_mem[data["mem"]];
    #else
        void* mem=(void*)data["mem"].get<uintptr_t>();
    #endif
    
    json result=json({});
    
    result["type"]="sync_request";
    result["starts"]={};
    result["lengths"]={};
    result["mem"]=data["mem"];
    
    for (int i=0; i<data["starts"].size(); i++){
        if (HashMem(mem,data["starts"][i],data["lengths"][i])!=data["hashes"][i]){
            result["starts"].push_back(data["starts"][i]);
            result["lengths"].push_back(data["lengths"][i]);
        }
    }
    
    writeToConn(result);
    
    
    while(true){
        result=readFromConn();
        if (result["type"]=="sync_response"){
            handle_sync_response(result);
            break;
        }
    }
}

void handle_sync_request(json data){
    //Recieved a request for bytes, sent the bytes. Wait for the recipient to set the bytes
    #ifdef CLIENT
        void* mem=(char*)server_to_client_mem[data["mem"]];
    #else
        void* mem=(void*)data["mem"].get<uintptr_t>();
    #endif
    
    json result=json({});
    
    result["type"]="sync_response";
    result["starts"]=data["starts"];
    result["lengths"]=data["lengths"];
    result["mem"]=data["mem"];
    
    result["buffers"]={};
    
    for(int i=0; i<data["starts"].size(); i++){
        auto buffer=(char*)malloc(sizeof(char)*data["lengths"][i].get<size_t>());
        memcpy(buffer,(char*)mem+result["starts"][i].get<size_t>(),data["lengths"][i].get<size_t>());
        result["buffers"].push_back(buffer);
    }
    
    writeToConn(result);
    
    while(true){
        result=readFromConn();
        if(result["type"]=="handle_sync_end"){
           break;
        }
    }
}

void Sync(void* mem, uintptr_t length){
    int parts=10;
    auto d=length/parts;
    auto remainder=length%parts;
    
    json result=json({});
    result["type"]="sync_init";
    result["starts"]={};
    result["lengths"]={};
    result["hashes"]={};
    
    #ifdef CLIENT
        result["mem"]=server_to_client_mem[(uintptr_t)mem];
    #else
        result["mem"]=(uintptr_t)mem;
    #endif
    
    auto offset=0;
    for (int i=0; i<remainder; i++){
        result["starts"].push_back(offset);
        result["lengths"].push_back(d+1);
        result["hashes"].push_back(HashMem(mem,offset,d+1));
        offset+=(d+1);
    }
    
    for (int i=0; i<(parts-remainder); i++){
        result["starts"].push_back(offset);
        result["lengths"].push_back(d);
        result["hashes"].push_back(HashMem(mem,offset,d));
        offset+=d;
    }
    
    writeToConn(result);
    
    while(true){
        result=readFromConn();
        
        if(result["type"]=="sync_request"){
            handle_sync_request(result);
            break;
        }
    }
}