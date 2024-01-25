from utils import *
import copy, re

write("#include <vulkan/vulkan.h>",header=True)
write(f"""
#include <boost/json/src.hpp>
#include <boost/json.hpp>

#include <ThreadStruct.hpp>

#include <Serialization.hpp>
#include <Server.hpp>
#include <Synchronization.hpp>
#include <map>
""")

write("""
typedef struct StreamStructure{
    VkStructureType sType;
    const void* pNext;
} StreamStructure;
""",header=True)

write("#include <debug.hpp>",header=True)
write("typedef void* pNext;",header=True)

def struct_is_callback(struct):
    members=parsed[struct]["members"]
    
    return any(member["name"]=="pUserData" for member in members) and any(parsed[member["type"]]["kind"]=="funcpointer" for member in members)

def funcpointer_in_callback(funcpointer):
    for name,obj in parsed.items():
        if not (obj["kind"]=="struct" and struct_is_callback(name)):
            continue
        
        members=obj["members"]
        if any(member["type"]==funcpointer for member in members):
            return struct
    return None

def is_not_struct(name,struct):
    return not(struct["kind"]=="struct" and ("alias" not in struct)) or ("ignore" in struct)

pUserData_members=set([member["name"] for member in parsed["pUserData"]["members"]])

write("""
typedef struct {
    void* pUserData;
""")

for member in pUserData_members:
    write(f"uintptr_t {member};")
write("} pUserData;")

write("""
void serialize_pNext(boost::json::object& json, void* member){
    if (member==NULL){
        json.erase("sType");
        return;
    }
    
    auto chain=((VkBaseInStructure*)member);
    switch(chain->sType){
""")

for name, struct in parsed.items():
    if is_not_struct(name, struct):
        continue
    if struct.get("sType","")=="":
        continue
        
    write(f"""
    case {struct["sType"]}:
        {{
        return serialize_struct(json, (({name}*)(member))[0]);
        }}
    """)
    
write("""
default:
    return serialize_pNext(json, (void*)(chain->pNext)); //Ignore invalid sTypes
}
}
""")

write("""
void deserialize_pNext(boost::json::object& json, void*& member ){
    if (!json.contains("sType")){
        member=NULL;
        return;
    }
    
    switch (value_to<int>(json["sType"])){
""")

for name,struct in parsed.items():
    if is_not_struct(name, struct):
        continue
    if struct.get("sType","")=="":
        continue
        
    write(f"""
    case {struct["sType"]}:
        {{
        auto result= new {name};
        deserialize_struct(json, result[0]);
        member=result;
        return;
        }}
    """)
write("}}")


write("std::map<VkStructureType, size_t> structure_type_to_size={")
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
    
    write(f"""
    void serialize_struct(boost::json::object& json, {name}& member){{
        
    """)
        
    for member in members:
        member=copy.deepcopy(member)
        
        write(f"""auto& json_value=json["{member["name"]}"];""")
        
        if member["type"]=="pUserData":
            write(f"""serialize_pUserData(json_value, member);""")
            continue
            
        for i,e in enumerate(member["length"]):
            member["length"][i]=add_struct_name(e, "member")
        
        write(convert(f"""member.{member["name"]}""","json_value",member,serialize=True))
        
    write("}")
        
    write(f"void deserialize_struct(boost::json::object& json, {name}& member){{")
    for member in members:
        member=copy.deepcopy(member)
        
        write(f"""auto& json_value=json["{member["name"]}"];""")
        
        if member["type"]=="pUserData":
            write(f"""deserialize_pUserData(json_value, member);""")
            continue
        
        for i,e in enumerate(member["length"]):
            member["length"][i]=add_struct_name(e, "member")
        
        write(convert(f"""member.{member["name"]}""","json_value",member,serialize=False, initialize=True))
            
    write("}")
    
    pUserData_info={"relation":"member","type":"void","num_indirection":1, "length":["null-terminated"]}
    
    write(f"""
    void serialize_pUserData(boost::json::object& json, {name}& member){{
    """)
    write(convert("member.pUserData","""json["pUserData"].emplace_object()""",pUserData_info,serialize=True))
    
    for member in members:
        if member["type"] in pUserData_members:
            write(f"""json["{member["type"]}"]=(uintptr_t)(member.{member["name"]});""")
    write("}")
    
    write(f"""
    void deserialize_pUserData(boost::json::object& json, {name}& member){{
        #ifdef CLIENT
           void* pUserData;
           {convert("pUserData",'json["pUserData"]',pUserData_info, serialize=False,initialize=True)}
        #else
            pUserData=new pUserData();
    """)
    write(convert("pUserData.pUserData",'json["pUserData"]',pUserData_info,serialize=False,initialize=True))
    for member in members:
        if member["type"] in pUserData_members:
            write(f"""pUserData.{member["name"]}=({member["type"]})(value_to<uintptr_t>(json["{member["type"]}"]));""")
    write("""
    #endif
    member.pUserData=pUserData;
    }
    """)
    
    write(f"""
        void serialize_struct(boost::json::object&, {name}&);
        void deserialize_struct(boost::json::object&, {name}&);
    """,header=True)

import re
for name,funcpointer in parsed.items():
    if funcpointer["kind"]!="funcpointer":
        continue
    
    if name=="PFN_vkVoidFunction": #Not used anywhere (we handle PFN_vkVoidFunction specially)
        continue

    header=re.sub(r"^(.*?)\(", "(", funcpointer["header"])

    write(f"std::map<uintptr_t,{name}> id_to_{name};")
    
    write(f"""
    void serialize_funcpointer(boost::json::object&, {name}&){{
        //Will only be called by the client
        return;
    }}
    """)
    
    write(f"""void serialize_funcpointer(boost::json::object&, {name}&);""",header=True)
    
    if name!="PFN_vkGetInstanceProcAddrLUNARG": #PFN_vkGetInstanceProcAddrLUNARG is a pointer to the client's vkGetInstanceProcAddr. However, since the client's vkGetInstanceProcAddr is just a thin wrapper over the server's vkGetInstanceProcAddr (as well as that the client does not support recieving objects from the server outside of a command), we just return the server's vkGetInstanceProcAddr.
        
        write(f"""
        void deserialize_funcpointer(boost::json::object& json, {name}& member){{
            //Will only be called by the server
            
            member={name}_wrapper;
            }};
        """)
        
        write(f"""
        auto {name}_wrapper{header}{{
        //Will only be called by the server
        
        boost::json::object& json;
        json["type"]={name.upper()};
        """)
        
        for param in funcpointer["params"]:
            write(convert(param["name"],f"""json["{param["name"]}"]""",param,serialize=True))
        
        write(f"""
        json["id"]=((pUserData*)pUserData)->{name};
        
        writeToConn(json); //Send request
        json=readFromConn(); //Recieve response
        {funcpointer["type"]}{"*"*funcpointer["num_indirection"]} result;
        """)
        
        for param in funcpointer["params"]:
            write(convert(param["name"],f"""json["{param["name"]}"]""",param,serialize=False))
        
        write(convert("result",'json["result"]',funcpointer | {"name": "result"},serialize=False,initialize=True))
        
        write("json.clear();")
        
        if funcpointer["type"]=="void" and funcpointer["num_indirection"]==1:
            write("registerAllocatedMem(result,size);")
            write('json["mem"](uintptr_t)result;')
        else:
            write('json.erase("mem");')
        
        write("""
        writeToConn(json); //Send (possible) memory to client so it can store it
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
            
            // Recieved data from server's {name} wrapper, and will execute the actual function
            auto funcpointer=id_to_{name}[value_to<uintptr_t>(json["id"])];
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
            write(f"""
            json=readFromConn();
            registerClientServerMemoryMapping((uintptr_t)result, value_to<uintptr_t>(json["mem"]) );
            
            json.clear();
            writeConn(json); //Send empty message to signal to the server the mapping is done.
            """)
        
        write("};")
                
        
        write(f"void handle_{name}(boost::json::object&);",header=True);
        
    else:
        write(f"""
            void deserialize_funcpointer(boost::json::object& json, {name}& member){{
            //Will only be called by the server
            
            member=vkGetInstanceProcAddr;
            }};
        """)
    
    write(f"void deserialize_funcpointer(boost::json::object&, {name}&);",header=True)
        
for handle in parsed:
        if "alias" in parsed[handle] or parsed[handle].get("kind","")!="handle":
            continue
        #The loader may want to write to this handle, so we make our own in our address space, so there won't be a semgnetation fault.
        write(f"""
        #ifdef CLIENT
            std::map<uintptr_t,uintptr_t> client_{handle}_to_server_{handle};
            std::map<uintptr_t,uintptr_t> server_{handle}_to_client_{handle};
            
        #endif
        """)
        write(f"""
        void serialize_handle(boost::json::object& json, {handle}& data){{
            uintptr_t result;
            #ifdef CLIENT
                if (data==NULL){{
                    result=(uintptr_t)NULL;
                    debug_printf("Handle is NULL, serializing to %p...\\n",result);
                }}else{{
                    if(!(client_{handle}_to_server_{handle}.contains( (uintptr_t)data ))){{
                        debug_printf("Panic: {handle} %p not found!\\n",data);
                    }}
                     debug_printf("Serializing {handle} %p...\\n",({handle})client_{handle}_to_server_{handle}[(uintptr_t)data]);
                    result=client_{handle}_to_server_{handle}[(uintptr_t)data];
                }}
            #else
                result=(uintptr_t)data;
            #endif
        """)
        write("""
            json=result;
        }
       """)
       
        write(f"""void serialize_handle(boost::json::object&, {handle}&);""",header=True)
        
        write(f"""
          void deserialize_handle(boost::json::object& json, {handle}& member){{
                {handle} result;
                auto data=value_to<uintptr_t>(json);
                
                #ifdef CLIENT
                    debug_printf("Handling server pointer %p:\\n",({handle})data);
                    if (server_{handle}_to_client_{handle}.contains(data)){{
                        result=({handle})server_{handle}_to_client_{handle}[data];
                        debug_printf("Deserializing to {handle} %p...\\n",result);
                    }}else{{
                        auto handle=malloc(sizeof({handle}));
                        debug_printf("Mapping to {handle} %p...\\n",handle);
                        server_{handle}_to_client_{handle}[data]=(uintptr_t)handle;
                        client_{handle}_to_server_{handle}[(uintptr_t)handle]=data;
                        
                        result=({handle})handle; //This is highly dangerous -- I'm basically casting {handle}* to {handle}. I should do *(({handle}*)alloc_icd_object())
                    }}
                #else
                    result=({handle})data;
                #endif
                
                member=result;
       }}""")
       
        write(f"""void deserialize_handle(boost::json::object&, {handle}&);""",header=True)
              
          