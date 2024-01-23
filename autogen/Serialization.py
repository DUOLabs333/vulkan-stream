from utils import *
import copy, re

write("#include <vulkan/vulkan.h>",header=True)
write(f"""
#include <ThreadStruct.hpp>

#include <schema.capnp.h>
using namespace capnp;

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
void serialize_pNext(PNext::Builder builder, void* member){
    if (member==NULL){
        builder.initNone();
        return;
    }
    
    auto chain=((VkBaseInStructure*)member);
    switch(chain->sType){
""")

for name, strict in parsed.items():
    if is_not_struct(name, struct):
        continue
    write(f"""
    case {struct["sType"]}:
        return serialize_struct(builder.get{name.title()}(), (({name}*)(member))[0]);
    """)
    
write("""
default:
    return serialize_pNext(builder, (void*)(chain->pNext)); //Ignore invalid sTypes
}
}
""")

write("""
void* deserialize_pNext(PNext::Reader& reader){
    if (reader.hasNone()){
        return NULL;
    }
    
    void* result;
    switch (reader.which()){
""")

for struct, obj in parsed.items():
    if is_not_struct(struct,obj):
        continue
    write(f"""
    case PNext::{struct.upper()}:
        result=({struct}*)malloc(sizeof({struct}));
        result[0]=deserialize_struct(reader.get{struct.title()}());
        return result;
    """)
write("}}")


write("std::map<VkStructureType, size_t> structure_type_to_size={")
for name, struct in parsed.items():
    if is_not_struct(name,struct):
        continue
        
    type=struct["sType"]

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
    
    write(f"""
    void serialize_struct({struct.title()}::Builder& builder, {struct} member){{
        
    """)
    
    members_names=[member["name"] for member in members]
    
    def add_struct_name(name,struct_name):
        return re.sub(rf"\b({'|'.join(members_names)})\b",rf"{struct_name}.\1",name)
        
    for member in members:
        member=copy.deepcopy(member)

        for i,e in enumerate(member["length"]):
            member["length"][i]=add_struct_name(e, "member")
        
        write(convert("member","builder",member["name"],member,serialize=True))
        
    write("}")
        
    write(f"""
    {struct} deserialize_struct({struct.title()}::Reader reader){{
        auto result={struct}();
    """)
    for member in members:
        member=copy.deepcopy(member)
        
        for i,e in enumerate(member["length"]):
            member["length"][i]=add_struct_name(e, "result")
        
        write(convert("result","reader",member["name"],member,serialize=False, initialize=True))
            
    write("return result;}")
    
    pUserData_info={"relation":"member","type":"void","num_indirection":1, "length":["null-terminated"]}
    
    write(f"""
    void serialize_pUserData(PUserData::Builder builder, {struct} member){{
    """)
    write(convert("member","builder","pUserData",pUserData_info,serialize=True))
    for member in members:
        if member["type"] in pUserData_members:
            write(f"""builder.set{member["type"]}((uintptr_t)(member.{member["name"]}));""")
    write("}")
    
    write(f"""
    void* deserialize_pUserData(PUserData::Reader& reader){{
        #ifdef CLIENT
           void* pUserData;
           {write(convert("","reader","pUserData",pUserData_info| {"relation":"param"},serialize=False))}
           return pUserData;
        #else
            auto result = new pUserData();
    """)
    write(convert("result","reader","pUserData",pUserData_info,serialize=False))
    for member in members:
        if member["type"] in pUserData_members:
            write(f"""result.{member["name"]}=reader.get{member["type"]}();""")
    write("""
    return result;
    #endif
    }
    """)
    
    write(f"""
        void serialize_struct({struct.title()}::Builder&, {struct});
        {struct} deserialize_struct({struct.title()}::Reader&);
    """,header=True)

import re
for name,funcpointer in parsed.items():
    if funcpointer["kind"]!="funcpointer":
        continue
    
    if name=="PFN_vkVoidFunction": #Not used anywhere (we handle PFN_vkVoidFunction specially)
        continue

    header=re.sub(r"^(.*?)\(", "(", funcpointer["header"])

    write(f"std::map<uintptr_t,{fname}> id_to_{name};")
    
    write(f"""
    void serialize_funcpointer({name}::Builder builder, {name} build){{
        //Will only be called by the client
        return;
    }}
    """)
    
    write(f"""void serialize_funcpointer({name}::Builder, {name});""",header=True)
    
    if name!="PFN_vkGetInstanceProcAddrLUNARG": #PFN_vkGetInstanceProcAddrLUNARG is a pointer to the client's vkGetInstanceProcAddr. However, since the client's vkGetInstanceProcAddr is just a thin wrapper over the server's vkGetInstanceProcAddr (as well as that the client does not support recieving objects from the server outside of a command), we just return the server's vkGetInstanceProcAddr.
    
        write(f"""
        auto {name}_wrapper{header}{{
        //Will only be called by the server
        
        MallocMessageBuilder m;
        auto message=m.initRoot<Message>();
        auto builder=message.init{name}();
        """)
        
        for param in funcpointer["params"]:
            write(convert("","builcer",param["name"],param,serialize=True))
        
        write(f"""
        writeToConn(m); //Send request
        auto reader=readFromConn().get{name}(); //Recieve response
        {funcpointer["type"]}{"*"*funcpointer["num_indirection"]} result;
        """)
        
        for param in funcpointer["params"]+[funcpointer]:
            write(convert("","reader",param["name"],param,serialize=False))
        
        write(f"""
        MallocMessageBuilder m;
        auto message=m.initRoot<Message>();
        auto builder=message.init{name}();
        """)
        
        if function["type"]=="void" and function["num_indirection"]==1:
            write("registerAllocatedMem(result,size);")
            write("builder.setMem((uintptr_t)result);")
        else:
            write("builder.setMem(0);")
        
        write("""
        writeToConn(m); //Send (possible) memory to client so it can store it
        readFromConn(); //Get the confirmation that the client has registered the memory
        """)
            
        write("SyncAllocations();")
        if not is_void(function):
            write("return result;")
        else:
            write("return;")
        write("}")
    
        write(f"""
        {funcpointer} deserialize_funcpointer({name}::Reader reader){{
            //Will only be called by the server
            
            return {name}_wrapper;
            }};
        """)
        
        write(f"""
            void handle_{funcpointer}_request(object &data){{
            //Will only be called by the client
            // Recieved data from server's {funcpointer} wrapper, and will execute the actual function
            
            object result;
            auto funcpointer=id_to_{funcpointer}[value_to<uintptr_t>(data["id"])];
            
            result["type"]="{funcpointer}_response";
            result["members"]=object();
        """)
        
        #Just in case if they change when executing (none of the variables are const)
        for param in function["params"]:
            write(param["header"]+";") #Initialize variable
            
            param_copy=param.copy()
            param_copy["name"]=f"""data["members"].as_object()["{param["name"]}"].as_object()"""
            
            write(deserialize(param["name"],param_copy,initialize=True))
        
        funcpointer_call=f"""funcpointer({",".join([param["name"] for param in function["params"]])})"""
        if not is_void(function):
            write(f"""auto result_temp={funcpointer_call};""")
        
            function_copy=function.copy()
            function_copy["name"]="result_temp"
            function_copy["length"]=[];
        
            write(serialize('result["result"]',function_copy))
        else:
            write(funcpointer_call+";")
    
        for param in function["params"]:
            write(serialize(f"""result["members"].as_object()["{param["name"]}"]""",param))
        
        write("writeToConn(result);")
        
        if function["type"]=="void" and function["num_indirection"]==1:
            write(f"""
                while(true){{
                    data=readFromConn();
                    if (value_to<std::string>(data["type"])=="{funcpointer}_malloc"){{
                        registerClientServerMemoryMapping(value_to<uintptr_t>(result["result"]), value_to<uintptr_t>(data["mem"]));
                        break;
                    }}
                }}
            """)
        
        write("};")
                
        
        write(f"void handle_{funcpointer}_request(object &data);",header=True);
        
        write(f"""
        {function["type"]}{'*'*function["num_indirection"]} handle_{funcpointer}_response(object &data, {header.removeprefix("(")} {{
            //Will only be called by the server
            
            //Recieved result from client's {funcpointer}
            
            //If there's any memory returned, send client the address so it can keep track of it
        """)
        
        for param in function["params"]:
            param_copy=param.copy()
            param_copy["name"]=f"""data["members"].as_object()["{param["name"]}"].as_object()"""
            
            write(deserialize(param["name"],param_copy))
        
        if not is_void(function):
            write(function["type"]+("*"*function["num_indirection"])+" result;")
            
            function_copy=function.copy()
            function_copy["name"]='data["result"].as_object()'
            function_copy["length"]=[]
            
            write(deserialize("result",function_copy))
        
        if function["type"]=="void" and function["num_indirection"]==1:
            write(f"""
            object _malloc;
            _malloc["type"]="{funcpointer}_malloc";
            _malloc["mem"]=(uintptr_t)result;
            
            writeToConn(_malloc);
            """
            )
        write("return result;" if not is_void(function) else "")
        
        write("}")
        write(f"""{function["type"]}{'*'*function["num_indirection"]} handle_{funcpointer}_response(object& data, {header.removeprefix("(")};""",header=True)
    else:
        write(f"""
        {funcpointer} deserialize_{funcpointer}(object &name){{
            //Will only be called by the server
            
            return vkGetInstanceProcAddr;
            }};
        """)
    
    write(f"{funcpointer} deserialize_{funcpointer}(object &name);",header=True)
        
for handle in parsed["handles"]:
        #The loader may want to write to this handle, so we make our own in our address space, so there won't be a semgnetation fault.
        write(f"""
        #ifdef CLIENT
            std::map<uintptr_t,uintptr_t> client_{handle}_to_server_{handle};
            std::map<uintptr_t,uintptr_t> server_{handle}_to_client_{handle};
            
        #endif
        """)
        write(f"""
        object serialize_{handle}({handle} data){{
            object result;
            #ifdef CLIENT
                if (data==NULL){{
                    result["value"]=(uintptr_t)NULL;
                    debug_printf("Handle is NULL, serializing to %p...\\n",NULL);
                }}else{{
                    if(!(client_{handle}_to_server_{handle}.contains( (uintptr_t)data ))){{
                        debug_printf("Panic: {handle} %p not found!\\n",data);
                    }}
                     debug_printf("Serializing {handle} %p...\\n",({handle})client_{handle}_to_server_{handle}[(uintptr_t)data]);
                    result["value"]=client_{handle}_to_server_{handle}[(uintptr_t)data];
                }}
            #else
                result["value"]=(uintptr_t)data;
            #endif
        """)
        write("""
            return result;
        }
       """)
       
        write(f"""object serialize_{handle}({handle} data);""",header=True)
        
        write(f"""
       {handle} deserialize_{handle}(object &data){{
                auto pointer=value_to<uintptr_t>(data["value"]);
                {handle} result;
                #ifdef CLIENT
                    debug_printf("Handle server pointer %p:\\n",({handle})pointer);
                    if (server_{handle}_to_client_{handle}.contains(pointer)){{
                        result=({handle})server_{handle}_to_client_{handle}[pointer];
                        debug_printf("Deserializing to {handle} %p...\\n",result);
                    }}else{{
                        auto handle=malloc(sizeof({handle}));
                        debug_printf("Mapping to {handle} %p...\\n",handle);
                        server_{handle}_to_client_{handle}[pointer]=(uintptr_t)handle;
                        client_{handle}_to_server_{handle}[(uintptr_t)handle]=pointer;
                        
                        result=({handle})handle; //This is highly dangerous -- I'm basically casting {handle}* to {handle}. I should do *(({handle}*)alloc_icd_object())
                    }}
                #else
                    result=({handle})pointer;
                #endif
                
                return result;
       }}""")
       
        write(f"""{handle} deserialize_{handle}(object& data);""",header=True)
              
          