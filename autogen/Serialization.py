from utils import *
import copy, re
write("""
#pragma once
#include <vulkan/vulkan.h>
#include <boost/json/fwd.hpp>
#define amin(a, b) (a > b ? b: a)
""", header=True)

write(f"""
#include <boost/json.hpp>
#include <boost/json/src.hpp>
      
#include <Serialization.hpp>
#include <Server.hpp>
#include <Synchronization.hpp>
#include <unordered_map>
#include <Surface.hpp>
""")

write("""
typedef struct StreamStructure{
    VkStructureType sType;
    const void* pNext;
} StreamStructure;
""",header=True)

write("""
typedef struct StreamStructure2{
    VkStructureType sType;
    void* pNext;
} StreamStructure2;
""",header=True)

write("""
enum StreamType {
SYNC = 0,
""",header=True)
for i, name in enumerate(parsed):
    if parsed[name].get("kind","") not in ["command", "funcpointer"]:
        continue
    
    write(f"""{name.upper()}={parsed[name]["id"]},""", header=True)
write("};",header=True)


write("""
#include <vector>
#include <string>
typedef struct {
int stream_type; //Maybe find some way of serializing MsgHeader to json::object directly. In that case, we can just add MsgHeader directly as a member here
int uuid;
uint64_t devicememory = 0;
uint64_t mem;
std::vector<size_t> starts;
std::vector<size_t> lengths;
std::vector<uint64_t> hashes;
std::vector<std::string> buffers;
bool unmap = false;
} Sync;
""",header=True)

write("""
#include <shared_mutex>
#include <mutex>
#include <unordered_map>
template<typename Key, typename Value>
class ConcurrentMap : public std::unordered_map<Key, Value> {
public:
    std::shared_mutex mutex;

    // Override operator[] to use exclusive locking
    Value& operator[](const Key& key) {
        std::unique_lock<std::shared_mutex> lock(mutex);
        return std::unordered_map<Key, Value>::operator[](key);
    }

    // Override at() to use shared locking
    Value& at(const Key& key) {
        std::shared_lock<std::shared_mutex> lock(mutex);
        return std::unordered_map<Key, Value>::at(key);
    }
    
    void erase(const Key& key) {
        std::unique_lock<std::shared_mutex> lock(mutex);
        std::unordered_map<Key, Value>::erase(key);
    }
    
    bool contains(const Key& key) {
        std::shared_lock<std::shared_mutex> lock(mutex);
        return std::unordered_map<Key, Value>::contains(key);
    }

    // Other constructors and methods can be added as needed
};
""",header=True)
write("#include <debug.hpp>",header=True)
write("typedef void* pNext;",header=True)

def is_not_struct(name,struct):
    return not(struct["kind"]=="struct" and ("alias" not in struct)) or ("ignore" in struct)

pUserData_members=set([member["name"] for member in parsed["pUserData"]["members"]])

write("""
typedef struct {
    void* pUserData;
""")

for member in pUserData_members:
    write(f"uint64_t {member};")
write("} pUserData_struct;")

for name,funcpointer in parsed.items():
    if funcpointer["kind"]!="funcpointer":
        continue
    write(f"std::unordered_map<uint64_t,{name}> id_to_{name};")

#Return Null if not found

write("""
PFN_vkVoidFunction handle_pNext(VkStructureType sType, bool serialize){
switch (sType){
""")
for name, struct in parsed.items():
    if is_not_struct(name, struct):
        continue
    if struct.get("sType","")=="":
        continue
        
    write(f"""
    case {struct["sType"]}:
        {{
        if (serialize){{
            return (PFN_vkVoidFunction)(+[](boost::json::object& json, const void* member) -> void{{
                return serialize_struct(json, (({name}*)(member))[0]);
            }});
        }}else{{
              return (PFN_vkVoidFunction)(+[](boost::json::object& json, void*& member) -> void{{
                #ifdef CLIENT
                if (member==NULL){{
                #else
                if (true){{ //The server needs pNext to be initalized, no matter what
                #endif
                    auto result= new {name};
                    result->pNext=NULL;

 member=result;
                }}

    deserialize_struct(json, *(({name}* )member));
                return;
            }});
        }}
        
        }}
    """)
    
write("""
default:
    debug_printf("sType %d not in switch! Serialization: %d\\n", sType, serialize); 
    return NULL;
}
}
""")
write("""
void serialize_pNext(boost::json::object& json, const void* member){
    if (member==NULL){
        json.erase("sType");
        return;
    }
    
    auto chain=((VkBaseInStructure*)member);
    
    auto serialize_function=(void(*)(boost::json::object&, const void*))(handle_pNext(chain->sType,true));
    if (serialize_function==NULL){
        return serialize_pNext(json, (void*)(chain->pNext)); //Ignore invalid sTypes
    }else{
        return serialize_function(json, member);
    }
}
""")

write("""
void deserialize_pNext(boost::json::object& json, void*& member ){
    if (!json.contains("sType")){
        member=NULL;
        return;
    }

    auto sType=static_cast<VkStructureType>(value_to<int>(json["sType"]));
    debug_printf("Deserializing structure: %d\\n", static_cast<int>(sType));

    auto deserialize_function=(void(*)(boost::json::object&, void*&))(handle_pNext(sType,false));

      #ifdef CLIENT
    if (member!=NULL && sType!=static_cast<VkBaseInStructure*>(member)->sType){ //This must mean that the pNext chain sent to the server skipped this struct, so we skip it on the client too
    #else
    if(false){ //On the server, pNext is not default-constructed, so we can not rely on it being NULL. However, we still must deserialize it
    #endif
        auto chain=reinterpret_cast<StreamStructure2*>(member);
        return deserialize_pNext(json, (chain->pNext));
    }else{
        return deserialize_function(json, member);
    }
}
""")


write("std::unordered_map<VkStructureType, size_t> structure_type_to_size={")
for name, struct in parsed.items():
    if is_not_struct(name,struct):
        continue
    
    type=struct.get("sType","")
    if type=="":
        continue   

    write(f"{{{type}, sizeof({name}) }},")
write("};")

write("""
void* memdup(const void* mem, size_t size) { 
   void* out = malloc(size);

   if(out != NULL)
       memcpy(out, mem, size);

   return out;
}
""")

write("void* memdup(const void* mem, size_t size);", header=True)

write("""
void* copyVkStruct (const void* data){
    auto curr=data;
    while (true){
        if (curr==NULL){
        return NULL;
        }
        auto structure_type=((StreamStructure*)curr)->sType;
        if (!structure_type_to_size.contains(structure_type)){
            curr=((StreamStructure*)curr)->pNext;
            continue;
        }
        
        auto struct_size=structure_type_to_size[structure_type];
        auto result=memdup(curr, struct_size);
        
        return result;
    }
    
}
""")
write("void* copyVkStruct (const void* data);",header=True)


for name, struct in parsed.items():
    if is_not_struct(name, struct):
        continue
    
    members=struct["members"]
    
    members_names=[member["name"] for member in members]
    
    def add_struct_name(name,struct_name):
        return re.sub(rf"\b({'|'.join(members_names)})\b",rf"{struct_name}.\1",name)
    
    if "pUserData" in members_names:
        pUserData_info={"relation":"member","type":"void","num_indirection":1, "length":["null-terminated"]}
        
        write(f"""
        void serialize_pUserData(boost::json::object& json, const {name}& member){{
        auto& pUserData_json=json["pUserData"];
        """)
        write(convert("member.pUserData","pUserData_json",pUserData_info,serialize=True))
        
        for member in members:
            if member["type"] in pUserData_members:
                write(f"""json["{member["type"]}"]=(uint64_t)(member.{member["name"]});""")
                write(f"""
                #ifdef CLIENT
                id_to_{member["type"]}[(uint64_t)(member.{member["name"]})]=member.{member["name"]};
                #endif
                """)
        write("}")
        
        write(f"""
        void deserialize_pUserData(boost::json::object& json, {name}& member){{
            #ifdef CLIENT
               void* pUserData;
               {convert("pUserData",'json["pUserData"]',pUserData_info, serialize=False,initialize=True)}
            #else 
                auto pUserData=new pUserData_struct();
        """)
        write(convert("pUserData->pUserData",'json["pUserData"]',pUserData_info,serialize=False,initialize=True))
        for member in members:
            if member["type"] in pUserData_members:
                write(f"""pUserData->{member["type"]}=(value_to<uint64_t>(json["{member["type"]}"]));""")
        write("""
        #endif
        member.pUserData=pUserData;
        }
        """)
    
    write(f"""
    void serialize_struct(boost::json::object& json, const {name}& member){{
        
    """)
      
    for member in members:
        member=copy.deepcopy(member)
        
        member_name=member["name"]
        member_json=f"{member_name}_json"
        
        write(f"""auto& {member_json}=json["{member_name}"];""")
        
        if member["type"]=="pUserData":
            old_member_json=member_json
            member_json=f"{member_json}_1"
            write(f"""
            auto& {member_json}={old_member_json}.emplace_object();
            serialize_pUserData({member_json}, member);
            """)
            continue
            
        for i,e in enumerate(member["length"]):
            member["length"][i]=add_struct_name(e, "member")
        
        write(convert(f"""member.{member_name}""",member_json,member,serialize=True))
        
    write("}")
        
    write(f"void deserialize_struct(boost::json::object& json, {name}& member){{")
    for member in members:
        member=copy.deepcopy(member)
        
        member_name=member["name"]
        member_json=f"{member_name}_json"
        
        write(f"""auto& {member_json}=json["{member_name}"];""")
        
        if member["type"]=="pUserData":
            old_member_json=member_json
            member_json=f"{member_json}_1"
            write(f"""
            auto& {member_json}={old_member_json}.as_object();
            deserialize_pUserData({member_json}, member);
            """)
            continue
        
        for i,e in enumerate(member["length"]):
            member["length"][i]=add_struct_name(e, "member")
        
        write(convert(f"""member.{member_name}""",member_json,member,serialize=False, initialize=True))
            
    write("}")
    
    write(f"""
        void serialize_struct(boost::json::object&, const {name}&);
        void deserialize_struct(boost::json::object&, {name}&);
    """,header=True)

import re
for name,funcpointer in parsed.items():
    if funcpointer["kind"]!="funcpointer":
        continue
    
    if name=="PFN_vkVoidFunction": #Not used anywhere (we handle PFN_vkVoidFunction specially)
        continue

    header=re.sub(r"^(.*?)\(", "(", funcpointer["header"])
    
    write(f"""
    void serialize_{name}(boost::json::object&, const {name}&){{
        //Will only be called by the client
        return;
    }}
    """)
    
    write(f"""void serialize_{name}(boost::json::object&, const {name}&);""",header=True)
    
    if name!="PFN_vkGetInstanceProcAddrLUNARG": #PFN_vkGetInstanceProcAddrLUNARG is a pointer to the client's vkGetInstanceProcAddr. However, since the client's vkGetInstanceProcAddr is just a thin wrapper over the server's vkGetInstanceProcAddr (and that the client does not support recieving objects from the server outside of a command), we just return the server's vkGetInstanceProcAddr.
        
        write(f"""
        auto {name}_wrapper{header}{{
        //Will only be called by the server
        
        boost::json::object json;
        json["stream_type"]={name.upper()};
        """)
        
        for param in funcpointer["params"]:
            write(convert(param["name"],f"""json["{param["name"]}"]""",param,serialize=True))
        
        write(f"""
        json["id"]=((pUserData_struct*)pUserData)->{name};
        
        writeToConn(json); //Send request
        json=readFromConn(); //Recieve response
        """)
        
        for param in funcpointer["params"]:
            write(convert(param["name"],f"""json["{param["name"]}"]""",param,serialize=False))
        
        if not is_void(funcpointer):
            write(f"""{funcpointer["type"]}{"*"*funcpointer["num_indirection"]} result;""")
            write(convert("result",'json["result"]',funcpointer | {"name": "result"},serialize=False,initialize=True))
        
        write("json.clear();")
        
        if funcpointer["type"]=="void" and funcpointer["num_indirection"]==1:
            write("""
            registerAllocatedMem(result,size);
            json["mem"]=(uint64_t)result;

            writeToConn(json); //Send memory to client so it can store it
            readFromConn(); //Get the confirmation that the client has registered the memory
            """)

        write("SyncAllocations();")
        if not is_void(funcpointer):
            write("return result;")
        else:
            write("return;")
        write("}")
        
        write(f"""
            void handle_{name}(boost::json::object& json){{
            //Will only be called by the client

             debug_printf("Handling {name}!\\n");

             auto line=boost::json::serialize(json,boost::json::serialize_options{{.allow_infinity_and_nan=true}});

            // Recieved data from server's {name} wrapper, and will execute the actual function
            auto funcpointer=id_to_{name}[value_to<uint64_t>(json["id"])];
        """)
        
        #Just in case if they change when executing (none of the variables are const)
        for param in funcpointer["params"]:
            write(param["header"]+";") #Initialize variable
            write(convert(param["name"],f"""json["{param["name"]}"]""",param,serialize=False,initialize=True))
        
        funcpointer_call=f"""funcpointer({",".join([param["name"] for param in funcpointer["params"]])})"""
        
        if not is_void(funcpointer):
            write(f"""auto result={funcpointer_call};""")
        else:
            write(funcpointer_call+";")
        
        write("json.clear();")
        
        for param in funcpointer["params"]:
            write(convert(param["name"],f"""json["{param["name"]}"]""",param,serialize=True))
        
        write(convert("result","""json["result"]""",funcpointer,serialize=True))
        
        write("writeToConn(json);")
        
        if funcpointer["type"]=="void" and funcpointer["num_indirection"]==1:
            write("""
            json=readFromConn();
            registerClientServerMemoryMapping((uint64_t)result, value_to<uint64_t>(json["mem"]) );

            json.clear();
            writeToConn(json); //Send empty message to signal to the server the mapping is complete
            """)

        write(f"""debug_printf("Finished handling {name}!\\n");""")
        write("};")
                
        write(f"""
        void deserialize_{name}(boost::json::object& json, {name}& member){{
            //Will only be called by the server
            
            member={name}_wrapper;
            }};
        """)
        
        write(f"void handle_{name}(boost::json::object&);",header=True);
        
    else:
        write(f"""
            void deserialize_{name}(boost::json::object& json, {name}& member){{
            //Will only be called by the server
            
            member=vkGetInstanceProcAddr;
            }};
        """)
    
    write(f"void deserialize_{name}(boost::json::object&, {name}&);",header=True)
        
for handle in parsed:
        if "alias" in parsed[handle] or parsed[handle].get("kind","")!="handle":
            continue
        #The loader may want to write to this handle, so we make our own in our address space, so there won't be a semgnetation fault.
        write(f"""
        #ifdef CLIENT
            std::unordered_map<uint64_t,uint64_t> client_{handle}_to_server_{handle};
            std::unordered_map<uint64_t,uint64_t> server_{handle}_to_client_{handle};
            std::shared_mutex {handle}_lock;
            
        #endif
        """)
        write(f"""
        void serialize_{handle}(boost::json::value& json, const {handle}& data){{
            uint64_t result;
            #ifdef CLIENT
                if (data==NULL){{
                    result=(uint64_t)NULL;
                    debug_printf("{handle} handle is NULL, serializing to %p...\\n",result);
                }}else{{
                    {handle}_lock.lock_shared();
                    if(!(client_{handle}_to_server_{handle}.contains( (uint64_t)data ))){{
                        debug_printf("Panic: {handle} %p not found!\\n",data);
                    }}
                     debug_printf("Serializing {handle} %p...\\n",({handle})client_{handle}_to_server_{handle}[(uint64_t)data]);
                    result=client_{handle}_to_server_{handle}[(uint64_t)data];
                    {handle}_lock.unlock_shared();
                }}
            #else
                result=(uint64_t)data;
            #endif
        """)
        write("""
            json=result;
        }
       """)
       
        write(f"""void serialize_{handle}(boost::json::value&, const {handle}&);""",header=True)
        
        write(f"""
          void deserialize_{handle}(boost::json::value& json, {handle}& member){{
                {handle} result;
                auto data=value_to<uint64_t>(json);
                
                #ifdef CLIENT
                    debug_printf("Handling server pointer %p:\\n",({handle})data);
                    if (data==(uint64_t)NULL){{
                        result=({handle})NULL;
                        debug_printf("{handle} is NULL, deserializing to %p...\\n", NULL);
                    }}else{{
                        {handle}_lock.lock_shared();
                        auto contains=server_{handle}_to_client_{handle}.contains(data);
                        {handle}_lock.unlock_shared();

                        if (contains){{
                            result=({handle})server_{handle}_to_client_{handle}[data];
                            debug_printf("Deserializing to {handle} %p...\\n",result);
                        }}else{{
                            auto handle=malloc(sizeof({handle}));
                            debug_printf("Mapping to {handle} %p...\\n",handle);
                            {handle}_lock.lock();
                            server_{handle}_to_client_{handle}[data]=(uint64_t)handle;
                            client_{handle}_to_server_{handle}[(uint64_t)handle]=data;
                            {handle}_lock.unlock();
                            
                            result=({handle})handle; //This is highly dangerous -- I'm basically casting {handle}* to {handle}. I should do *(({handle}*)alloc_icd_object())
                        }}
                    }}
                #else
                    result=({handle})data;
                #endif
                
                member=result;
       }}""")
       
        write(f"""
               void delete_{handle}(const {handle}& client_handle){{
                    #ifdef CLIENT
                    
                    {handle}_lock.lock_shared();
                    auto server_handle=client_{handle}_to_server_{handle}[(uint64_t)client_handle];
                    
                    {{
                        auto client_handle=server_{handle}_to_client_{handle}[server_handle]; //Need to get non-const {handle} so we can free it;
                        
                        free(({handle})client_handle);
                    }}
                    {handle}_lock.unlock_shared();
                    
                    {handle}_lock.lock();
                    client_{handle}_to_server_{handle}.erase((uint64_t)client_handle);
                    server_{handle}_to_client_{handle}.erase(server_handle);
                    {handle}_lock.unlock();
                    
            """)
        
        if handle=="VkSwapchainKHR":
                write("deregisterSwapchain(client_handle);")
        write("""
        #endif
        }
        """)
       
        write(f"""
        void deserialize_{handle}(boost::json::value&, {handle}&);
        void delete_{handle}(const {handle}&);
        """,header=True)
              
          
