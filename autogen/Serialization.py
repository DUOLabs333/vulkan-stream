from utils import *
import copy, re

write("#include <vulkan/vulkan.h>",header=True)
write(f"""
#include <ThreadStruct.hpp>

#include <Json.hpp>

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
    members=parsed["structs"][struct]
    
    return any(member["name"]=="pUserData" for member in members) and any(member["type"] in parsed["funcpointers"] for member in members)

def funcpointer_in_callback(funcpointer):
    for struct,members in parsed["structs"].items():
        if not struct_is_callback(struct):
            continue
        
        if any(member["type"]==funcpointer for member in members):
            return struct
    return None


#Use dispatch tables to avoid stack overflows
for struct,members in parsed["structs"].items():
    member={}
    member["name"]=f"(({struct}*)(name))"
    member["type"]=struct
    member["num_indirection"]=1
    member["length"]=[]

    write(f"""
        wjson serialize_{struct}_pNext(const void* name){{
        debug_printf("Serializing {struct}...\\n");
        wjson result;
        {serialize("result",member)}
        return result;
        }}
    """)

write("std::map<VkStructureType, std::function<wjson(const void*)>> serialize_pNext_dispatch={")
for struct,members in parsed["structs"].items():
    type=members[0]["value"]

    if type=="":
        continue

    write(f"{{{type},serialize_{struct}_pNext}},")
write("};")

write("""
wjson serialize_pNext(const void* name){
    if (name==NULL){
        return wjson({{"null",true}});
    }

    auto chain=((VkBaseInStructure*)name);
    if (serialize_pNext_dispatch.contains(chain->sType)){
        return serialize_pNext_dispatch[chain->sType](name);
    }else{
        return serialize_pNext((void*)chain->pNext); //Ignore invalid sTypes
    }
}
""")

write("std::map<VkStructureType, size_t> structure_type_to_size={")
for struct,members in parsed["structs"].items():
    type=members[0]["value"]

    if type=="":
        continue

    write(f"{{{type}, sizeof({struct}) }},")
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
        if (data==NULL){
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

for struct,members in parsed["structs"].items():
    member={}
    member["name"]="name"
    member["type"]=struct
    member["num_indirection"]=1
    member["length"]=[]

    write(f"""
        void* deserialize_{struct}_pNext(rjson& name){{
        debug_printf("Deserializing {struct}...\\n");
        {struct}* result;
        {deserialize("result",member,initialize=True)}
        return (void*)result;
        }}
    """)

write("std::map<VkStructureType, std::function<void*(wjson&)>> deserialize_pNext_dispatch={")
for struct,members in parsed["structs"].items():
    type=members[0]["value"]

    if type=="":
        continue

    write(f"{{{type},deserialize_{struct}_pNext}},")
write("};")

write("""
void* deserialize_pNext(rjson &name){
void* result;
if (name["null"].is_true()){
    result=NULL;
    return result;
}

return deserialize_pNext_dispatch[(VkStructureType)get_int(get_value(name, {"members", "sType", "value"}))];
}
""")

for struct,members in parsed["structs"].items():
    write(f"""
    wjson serialize_{struct}({struct} name){{
        wjson result;
    """)
    
    members_names=[member["name"] for member in members]
    
    def add_struct_name(name,struct_name):
        return re.sub(rf"\b({'|'.join(members_names)})\b",rf"{struct_name}.\1",name)
        
    for member in members:
        member_copy=copy.deepcopy(member)
       
        member_copy["name"]="name."+member_copy["name"]
        for i,e in enumerate(member_copy["length"]):
            member_copy["length"][i]=add_struct_name(e, "name")
        
        if member_copy["name"]=="name.lineWidthRange":
            write("""
            debug_printf("%f\\n",name.lineWidthRange[0]);
            debug_printf("%f\\n",name.lineWidthRange[1]);
            """)
            
        write(serialize(f"""get_value(result, {{"members", {member["name"]} }})""",member_copy))
        
    write("return result;}")
    
    is_callback=struct_is_callback(struct)
    
    if is_callback:
        write("typedef struct {")
        for member in members:
            if member["name"]=="pUserData":
                write("void* pUserData;")
            else:
                write(f"uintptr_t {member['type']}_id;")
        write(f"}} {struct}_struct;")
        
    write(f"""
    {struct} deserialize_{struct}(rjson &name){{
        auto result={struct}();
    """)
    if is_callback:
        write(f"auto _struct = new {struct}_struct;")
    for member in members:
        member_copy=copy.deepcopy(member)
        member_copy["name"]=f"""get_object(get_value(name, {{ "members", {member["name"]} }}))"""
        
        for i,e in enumerate(member_copy["length"]):
            member_copy["length"][i]=add_struct_name(e, "result")
            
        write(deserialize("result."+member["name"],member_copy,initialize=True))
            
        if is_callback:
            if member["type"] in parsed["funcpointers"]:
                write(f"""_struct->{member["type"]}_id=get_uint({member_copy["name"]}["id"]);""") 
    if is_callback:
        write("""_struct->pUserData=result.pUserData;
        result.pUserData=(void*)_struct;
        """)
    write("return result;}")
    
    write(f"""
        wjson serialize_{struct}({struct} name);
        {struct} deserialize_{struct}(rjson &name);
    """,header=True)

for type in parsed["primitive_types"]:     
    if type not in ["void"]:
        if type=="char" or type.startswith("uint"):
            json_type="uint"
        elif type in ["float", "double"]:
            json_type="double"
        else:
            json_type="int"
            
        write(f"""
            wjson serialize_{type}({type} name){{
                return wjson({{{{"value",name}}}});
            }};
        """)
        
        write(f"""
            {type} deserialize_{type}(rjson &name){{
                return ({type})get_{json_type}(name["value"]);
            }};
        """)
        
        write(f"""
        wjson serialize_{type}({type} name);
        {type} deserialize_{type}(rjson &name);
    """,header=True)

for type,is_always_pointer in parsed["external_handles"].items():
    
    write(f"""
        wjson serialize_{type}_p(const {type}* name){{
            return wjson({{{{"value",(uintptr_t)name}}}});
        }};
    """)
    
    write(f"""
        {type}* deserialize_{type}_p(rjson &name){{
            return ({type}*)get_uint(name["value"]);
        }};
    """)
    
    write(f"""
        wjson serialize_{type}_p(const {type}* name);
        {type}* deserialize_{type}_p(rjson &name);
    """,header=True)
    
    if not is_always_pointer:
        write(f"""
            wjson serialize_{type}(const {type} name){{
                return wjson({{{{"value",(uintptr_t)name}}}});
            }};
        """)
        
        write(f"""
            {type} deserialize_{type}(rjson &name){{
                return ({type})get_uint(name["value"]);
            }};
        """)
        
        write(f"""
            wjson serialize_{type}(const {type} name);
            {type} deserialize_{type}(rjson &name);
        """,header=True)

for type in parsed["pointer_types"]:
    write(f"""
        wjson serialize_{type}(const {type} name){{
            return wjson({{{{"value",(uintptr_t)name}}}});
        }};
    """)
    
    write(f"""
        {type} deserialize_{type}(rjson &name){{
            return ({type})get_uint(name["value"]);
        }};
    """)
    
    write(f"""
        wjson serialize_{type}(const {type} name);
        {type} deserialize_{type}(rjson &name);
    """,header=True)

import re
for funcpointer,function in parsed["funcpointers"].items():
    
    if funcpointer=="PFN_vkVoidFunction": #Not used anywhere (we handle PFN_vkVoidFunction specially)
        continue
    
    callback_struct=funcpointer_in_callback(funcpointer)

    header=re.sub(r"^(.*?)\(", "(", function["header"])

    write(f"std::map<uintptr_t,{funcpointer}> id_to_{funcpointer};")
    write(f"""
    wjson serialize_{funcpointer}({funcpointer} name){{
        //Will only be called by the client
        
        wjson result=empty_object;
        result["id"]=(uintptr_t)name;
        id_to_{funcpointer}[(uintptr_t)name]=name;
        return result;
    }}
    """)
    
    write(f"""wjson serialize_{funcpointer}({funcpointer} name);""",header=True)
    
    if funcpointer!="PFN_vkGetInstanceProcAddrLUNARG": #PFN_vkGetInstanceProcAddrLUNARG is a pointer to the client's vkGetInstanceProcAddr. However, since the client's vkGetInstanceProcAddr is just a thin wrapper over the server's vkGetInstanceProcAddr (as well as that the client does not support recieving objects from the server outside of a command), we just return the server's vkGetInstanceProcAddr.
    
        write(f"""
        auto {funcpointer}_wrapper{header}{{
            wjson data;
            data["type"]="{funcpointer}_request";
            data["members"]=empty_object;
        """)
        
        if callback_struct:
            write(f"""
                auto _struct=({callback_struct}_struct*)pUserData;
                data["id"]=_struct->{funcpointer}_id;
            """)
        
        for param in function["params"]:
            param_copy=copy.deepcopy(param)
            if callback_struct:
                if param["name"]=="pUserData":
                    param_copy["name"]="_struct->pUserData"
                    
            write(serialize(f"""get_value(data, {{ "members", {param["name"]} }})""",param_copy))
        
        write(f"""
        writeToConn(data);
        while (true){{
            data=readFromConn();
            if (get_string(data["type"])=="{funcpointer}_response"){{
        """)
        
        response_header="data"
        for param in function["params"]:
            name=param["name"]
            if callback_struct:
                if name=="pUserData":
                    name=f"_struct->{name}"
            response_header+=(", "+name)
            
        write(("auto result= " if not is_void(function) else '')+f"""handle_{funcpointer}_response({response_header});""")
        if function["type"]=="void" and function["num_indirection"]==1:
            write("registerAllocatedMem(result,size);")
        write("SyncAllocations();")
        if not is_void(function):
            write("return result;")
        else:
            write("return;")
        write("""break;
            }
        }
        }
        """)
    
        write(f"""
        {funcpointer} deserialize_{funcpointer}(rjson &name){{
            //Will only be called by the server
            
            return {funcpointer}_wrapper;
            }};
        """)
        
        write(f"""
            void handle_{funcpointer}_request(rjson &data){{
            //Will only be called by the client
            // Recieved data from server's {funcpointer} wrapper, and will execute the actual function
            
            wjson result=empty_object;
            auto funcpointer=id_to_{funcpointer}[get_uint(data["id"])];
            
            result["type"]="{funcpointer}_response";
            result["members"]=empty_object;
        """)
        
        #Just in case if they change when executing (none of the variables are const)
        for param in function["params"]:
            write(param["header"]+";") #Initialize variable
            
            param_copy=param.copy()
            param_copy["name"]=f"""get_value(data, {{ "members", {param["name"]} }})"""
            
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
            write(serialize(f"""get_value(result, {{ "members", {param["name"]} }})""",param))
        
        write("writeToConn(result);")
        
        if function["type"]=="void" and function["num_indirection"]==1:
            write(f"""
                while(true){{
                    data=readFromConn();
                    if (get_string(data["type"])=="{funcpointer}_malloc"){{
                        registerClientServerMemoryMapping(get_uint(result["result"]), get_uint(data["mem"]));
                        break;
                    }}
                }}
            """)
        
        write("};")
                
        
        write(f"void handle_{funcpointer}_request(rjson &data);",header=True);
        
        write(f"""
        {function["type"]}{'*'*function["num_indirection"]} handle_{funcpointer}_response(rjson &data, {header.removeprefix("(")} {{
            //Will only be called by the server
            
            //Recieved result from client's {funcpointer}
            
            //If there's any memory returned, send client the address so it can keep track of it
        """)
        
        for param in function["params"]:
            param_copy=param.copy()
            param_copy["name"]=f"""get_value(data, {{ "members", {param["name"]} }})"""
            
            write(deserialize(param["name"],param_copy))
        
        if not is_void(function):
            write(function["type"]+("*"*function["num_indirection"])+" result;")
            
            function_copy=function.copy()
            function_copy["name"]='get_object(data["result"])'
            function_copy["length"]=[]
            
            write(deserialize("result",function_copy))
        
        if function["type"]=="void" and function["num_indirection"]==1:
            write(f"""
            wjson _malloc;
            _malloc["type"]="{funcpointer}_malloc";
            _malloc["mem"]=(uintptr_t)result;
            
            writeToConn(_malloc);
            """
            )
        write("return result;" if not is_void(function) else "")
        
        write("}")
        write(f"""{function["type"]}{'*'*function["num_indirection"]} handle_{funcpointer}_response(rjson& data, {header.removeprefix("(")};""",header=True)
    else:
        write(f"""
        {funcpointer} deserialize_{funcpointer}(rjson &name){{
            //Will only be called by the server
            
            return vkGetInstanceProcAddr;
            }};
        """)
    
    write(f"{funcpointer} deserialize_{funcpointer}(rjson &name);",header=True)
        
for handle in parsed["handles"]:
        #The loader may want to write to this handle, so we make our own in our address space, so there won't be a semgnetation fault.
        write(f"""
        #ifdef CLIENT
            std::map<uintptr_t,uintptr_t> client_{handle}_to_server_{handle};
            std::map<uintptr_t,uintptr_t> server_{handle}_to_client_{handle};
            
        #endif
        """)
        write(f"""
        wjson serialize_{handle}({handle} data){{
            wjson result;
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
       
        write(f"""wjson serialize_{handle}({handle} data);""",header=True)
        
        write(f"""
       {handle} deserialize_{handle}(rjson &data){{
                auto pointer=get_uint(data["value"]);
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
       
        write(f"""{handle} deserialize_{handle}(rjson& data);""",header=True)
              
          