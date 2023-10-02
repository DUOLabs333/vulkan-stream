from utils import *
import copy, re

write("#include <vulkan/vulkan.h>",header=True)
write(f"""
#include <nlohmann/json.hpp>

// for convenience
using json = nlohmann::json;

#include <Serialization.hpp>
#include <Server.hpp>
#include <Synchronization.hpp>
""")

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
        
for struct,members in parsed["structs"].items():
    write(f"""
    json serialize_{struct}({struct} name){{
        json result=json({{}});
        result["members"]=json({{}});
    """)
    
    members_names=[member["name"] for member in members]
    
    def add_struct_name(name,struct_name):
        return re.sub(rf"\b({'|'.join(members_names)})\b",rf"{struct_name}.\1",name)
        
    for member in members:
        member_copy=copy.deepcopy(member)
       
        member_copy["name"]="name."+member_copy["name"]
        for i,e in enumerate(member_copy["length"]):
            member_copy["length"][i]=add_struct_name(e, "name")
                
        write(serialize(f"""result["members"]["{member["name"]}"]""",member_copy))
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
    {struct} deserialize_{struct}(json name){{
        auto result={struct}();
    """)
    if is_callback:
        write(f"""
        auto _struct = new {struct}_struct;
        """)
    for member in members:
        member_copy=copy.deepcopy(member)
        member_copy["name"]=f"""name["members"]["{member["name"]}"]"""
        member_copy["const"]=False
        
        for i,e in enumerate(member_copy["length"]):
            member_copy["length"][i]=add_struct_name(e, "result")
        
        write(deserialize("result."+member["name"],member_copy))
        if is_callback:
            if member["type"] in parsed["funcpointers"]:
                write(f"""_struct->{member["type"]}_id={member_copy["name"]}["id"];""") 
    if is_callback:
        write("""_struct->pUserData=result.pUserData;
        result.pUserData=(void*)_struct;
        """)
    write("return result;}")
    
    write(f"""
        json serialize_{struct}({struct} name);
        {struct} deserialize_{struct}(json name);
    """,header=True)

for type in parsed["primitive_types"]:
    if type in ["void","char"]:
        write(f"""
            json serialize_{type}_p(const {type}* name){{
                return json::object({{{{"value",(char *)name}}}});
            }};
        """)
        
        write(f"""
            {type}* deserialize_{type}_p(json name){{
                return ({type}*)name["value"].get<std::string>().c_str();
            }};
        """)
        
        write(f"""
            json serialize_{type}_p(const {type}* name);
            {type}* deserialize_{type}_p(json name);
        """,header=True)
        
    if type not in ["void"]:
        write(f"""
            json serialize_{type}({type} name){{
                return json::object({{{{"value",name}}}});
            }};
        """)
        
        write(f"""
            {type} deserialize_{type}(json name){{
                return name["value"].get<{type}>();
            }};
        """)
        
        write(f"""
        json serialize_{type}({type} name);
        {type} deserialize_{type}(json name);
    """,header=True)

for type,is_always_pointer in parsed["external_handles"].items():
    
    write(f"""
        json serialize_{type}_p(const {type}* name){{
            return json::object({{{{"value",(uintptr_t)name}}}});
        }};
    """)
    
    write(f"""
        {type}* deserialize_{type}_p(json name){{
            return ({type}*) (uintptr_t)name["value"];
        }};
    """)
    
    write(f"""
        json serialize_{type}_p(const {type}* name);
        {type}* deserialize_{type}_p(json name);
    """,header=True)
    
    if not is_always_pointer:
        write(f"""
            json serialize_{type}(const {type} name){{
                return json::object({{{{"value",(uintptr_t)name}}}});
            }};
        """)
        
        write(f"""
            {type} deserialize_{type}(json name){{
                return ({type}) name["value"];
            }};
        """)
        
        write(f"""
            json serialize_{type}(const {type} name);
            {type} deserialize_{type}(json name);
        """,header=True)

write("""
        std::map<uintptr_t,int> allocated_mems;
        std::map<uintptr_t,uintptr_t> client_to_server_mem;
        std::map<uintptr_t,uintptr_t> server_to_client_mem;
    """)
import re
for funcpointer,function in parsed["funcpointers"].items():
    
    if funcpointer=="PFN_vkVoidFunction": #Not used in any callbacks
        continue
    
    callback_struct=funcpointer_in_callback(funcpointer)

    header=re.sub(r"^(.*?)\(", "(", function["header"])

    write(f"std::map<uintptr_t,{funcpointer}> id_to_{funcpointer};")
    write(f"""
    json serialize_{funcpointer}({funcpointer} name){{
        //Will only be called by the client
        
        json result=json({{}});
        result["id"]=(uintptr_t)name;
        id_to_{funcpointer}[(uintptr_t)name]=name;
        return result;
    }}
    """)
    
    write(f"""json serialize_{funcpointer}({funcpointer} name);""",header=True)
    
    write(f"""
    auto {funcpointer}_wrapper{header}{{
        json data=json({{}});
        data["type"]="{funcpointer}_request";
        data["members"]=json({{}});
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
                
        write(serialize(f"""data["members"]["{param["name"]}"]""",param_copy))
    
    write(f"""
    writeToConn(data);
    while (true){{
        data=readFromConn();
        if (data["type"]=="{funcpointer}_response"){{
    """)
    
    response_header="data"
    for param in function["params"]:
        name=param["name"]
        if callback_struct:
            if name=="pUserData":
                name=f"_struct->{name}"
        response_header+=(", "+name)
        
    write(("auto result= " if not(function["type"]=="void" and function["num_indirection"]==0) else '')+f"""handle_{funcpointer}_response({response_header});""")
    if function["type"]=="void" and function["num_indirection"]==1:
        write("""
            allocated_mems[(uintptr_t)result]=size;
        """)
    write("""
        for (auto & element: allocated_mems){
            Sync((void*)element.first,element.second);
        }
        """
    )
    if not(function["type"]=="void" and function["num_indirection"]==0):
        write("return result;")
    else:
        write("return;")
    write("""break;
        }
    }
    }
    """)
    
    write(f"""
    {funcpointer} deserialize_{funcpointer}(json name){{
        //Will only be called by the server
        
        return {funcpointer}_wrapper;
        }};
    """)
    
    write(f"{funcpointer} deserialize_{funcpointer}(json name);",header=True)
    
    write(f"""
        void handle_{funcpointer}_request(json data){{
        //Will only be called by the client
        // Recieved data from server's {funcpointer} wrapper, and will execute the actual function
        
        auto result=json({{}});
        auto funcpointer=id_to_{funcpointer}[data["id"]];
        
        result["type"]="{funcpointer}_response";
        
    """)
    
    #Just in case if they change when executing (none of the variables are const)
    for param in function["params"]:
        write(param["header"]+";") #Initialize variable
        
        param_copy=param.copy()
        param_copy["name"]=f"""data["members"]["{param["name"]}"]"""
        
        write(deserialize(param["name"],param_copy))
    
    if not(function["type"]=="void" and function["num_indirection"]==0):
        write(f"""auto result_temp=funcpointer({",".join([param["name"] for param in function["params"]])});""")
    
        function_copy=function.copy()
        function_copy["name"]="result_temp"
        function_copy["length"]=[];
    
        write(serialize('result["result"]',function_copy))

    for param in function["params"]:
        write(serialize(f"""result["params"]["{param["name"]}"]""",param))
    
    write("writeToConn(result);")
    
    if function["type"]=="void" and function["num_indirection"]==1:
        write(f"""
            while(true){{
                data=readFromConn();
                if (data["type"]=="{funcpointer}_malloc"){{
                    client_to_server_mem[(uintptr_t)result["result"]]=data["mem"];
                    server_to_client_mem[data["mem"]]=(uintptr_t)result["result"];
                    break;
                }}
            }}
        """)
    
    write("};")
            
    
    write(f"void handle_{funcpointer}_request(json data);",header=True);
    
    write(f"""
    {function["type"]}{'*'*function["num_indirection"]} handle_{funcpointer}_response(json data, {header.removeprefix("(")} {{
        //Will only be called by the server
        
        //Recieved result from client's {funcpointer}
        
        //If there's any memory returned, send client the address so it can keep track of it
    """)
    
    for param in function["params"]:
        param_copy=param.copy()
        param_copy["name"]=f"""data["members"]["{param["name"]}"]"""
        param_copy["const"]=False
        
        write(deserialize(param["name"],param_copy))
    
    if not(function["type"]=="void" and function["num_indirection"]==0):
        write(function["type"]+("*"*function["num_indirection"])+" result;")
        
        function_copy=function.copy()
        function_copy["name"]='data["result"]'
        function_copy["length"]=[]
        
        write(deserialize("result",function_copy))
    
    if function["type"]=="void" and function["num_indirection"]==1:
        write(f"""
        json _malloc=json({{}});
        _malloc["type"]="{funcpointer}_malloc";
        _malloc["mem"]=(uintptr_t)result;
        
        writeToConn(_malloc);
        """
        )
    write("return result;" if not(function["type"]=="void" and function["num_indirection"]==0) else "")
    
    write("}")
    write(f"""{function["type"]}{'*'*function["num_indirection"]} handle_{funcpointer}_response(json data, {header.removeprefix("(")};""",header=True)
        
for handle in parsed["handles"]:
        write(f"""
        json serialize_{handle}({handle} data){{
            json result=json({{}});
            result["value"]=(uintptr_t)data;
            return result;
        }}
       """)
       
        write(f"""json serialize_{handle}({handle} data);""",header=True)
        if handle=="VkDeviceMemory":
            write("""
            #ifdef CLIENT
                currStruct()->mem_to_sync->insert((uintptr_t)data);
            #endif
            """)
        write(f"""
       {handle} deserialize_{handle}(json data){{
               return ({handle})data["value"];
       }}""")
       
        write(f"""{handle} deserialize_{handle}(json data);""",header=True)
              
          