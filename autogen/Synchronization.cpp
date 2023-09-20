#include <nlohmann/json.hpp>
using json = nlohmann::json;

#include <PicoSHA2/picosha2.h>

std::string HashMem(void* mem, uintptr_t start, uintptr_t length){
    char* src_char_array=malloc(sizeof(char)*(length+1));
    
    strncpy(src_char_array,(char*)mem,length);
    
    src_char_array[length]='\0';
    
    std::string src_string(src_char_array);
    
    std::vector<unsigned char> hash(picosha2::k_digest_size);
    
    picosha2::hash256(src_string.begin(), src_string.end(), hash.begin(), hash.end());
    
    return picosha2::bytes_to_hex_string(hash.begin(), hash.end());
    
}
    
void handle_sync_init(json data){
    #ifdef CLIENT
    void* mem=(void*)data["mem"];
    json result=json({});
    
    result["type"]="sync_request";
    result["ranges"]={};
    result["length"]=data["length"];
    for (int i=0; i<data["ranges"].size(); i++){
        if (HashMem(mem,data["ranges"][i],data["length"])!=data["hashes"][i]){
            result["ranges"].push_back(data["ranges"][i]);
        }
    }
    
    sendtoConn(result);
    
    //The recpient must return a sync_request
    
    while(true){
        std::string type=result["type"]
        if (result["type"]=="sync_response"){
            handle_sync_response(json data);
            break;
        }
    }
}

void handle_sync_request(json data){
    void* mem=(void*)data["mem"];
    json result=json({});
    
    result["type"]="sync_request";
        
    
/*
handle_sync_init
handle_sync_request
handle_sync_response
handle_sync_acknowledgement
"""
Sync:
send init
wait for handle_sync_request 

handle_init, calculate hash
"""
*/