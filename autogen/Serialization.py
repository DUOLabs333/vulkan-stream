from utils import *

write("#include <vulkan/vulkan.h>",header=True)
write(f"""
#include <nlohmann/json.hpp>

// for convenience
using json = nlohmann::json;

#include <Serialization.hpp>
""")

for struct,members in parsed["structs"].items():
    write(f"""
    json serialize_{struct}({struct} name){{
        json result=json({{}});
        result["members"]=json({{}});
    """)
    
    for member in members:
        write(f"""
        result["members"]["{member['name']}"]={serialize("name."+member['name'],member['type'],member['num_indirection'],member['length'])};
        """)
    write("return result;}")
    
    write(f"""
    {struct} deserialize_{struct}(json name){{
        auto result={struct}();
    """)
    
    for member in members:
        if not member["const"]:
            write(f"""
        result.{member['name']}={deserialize('name["'+member['name']+'"]', member['type'], member['num_indirection'], member['length'])};
        """)
    write("return result;}")
    
    write(f"""
        json serialize_{struct}({struct} name);
        {struct} deserialize_{struct}(json name);
    """,header=True)

for type in parsed["primitive_types"]:
    if type in ["void","char"]:
        write(f"""
            json serialize_{type}_p({type}* name){{
                return result=json({{"value":(char *)name}}):
            }};
        """)
        
        write(f"""
            {type}* deserialize_{type}_p(json name){{
                return ({type}*) name["value"];
            }};
        """)
        
        write(f"""
            json serialize_{type}_p({type}* name);
            {type}* deserialize_{type}_p(json name);
        """,header=True)
    
    if type not in ["void"]:
        write(f"""
            json serialize_{type}({type} name){{
                return result=json({{"value":name}}):
            }};
        """)
        
        write(f"""
            {type} deserialize_{type}(json name){{
                return name["value"];
            }};
        """)
        
        write(f"""
        json serialize_{type}({type} name);
        {type} deserialize_{type}(json name);
    """,header=True)

for funcpointer,function in parsed["funcpointers"].items():
    
    if funcpointer=="PFN_vkVoidFunction": #Not used in any callbacks
        continue
        
    header=" ".join([param["header"] for param in function["params"]])
    
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
    
    
    #Not going to write out the signature, but let the compiler figure it out
    write(f"""
    {funcpointer} deserialize_{funcpointer}(json name){{
        //Will only be called by the server
        
        uintptr_t id=name["id"];
        return [id]({header}){{
    """)
    write(f"""
    json data=json({{}});
    data["type"]="{funcpointer}_request";
    data["id"]=id;
    data["members"]=json({{}});
    """)
    for param in function["params"]:
        write(f"""
            data["members"]["{param["name"]}"]={serialize(param["name"],param["type"],param["num_indirection"],param["length"])};
        """
        )
    
    write(f"""
    sendToConn(data);
    while (true){{
        data=readFromConn();
        if (data["type"]=="{funcpointer}_response"){{
           {'auto result= handle_{funcpointer}_response(data);' if not(function["type"]=="void" and function["num_indirection"]==0) else ''}
           break;
        }}
    }}
    """)

    if function["type"]=="void" and function["num_indirection"]==1:
        write("""
            allocated_mems[(uintptr_t)result]=size;
        """)
    
    write("""
        for (auto & element: allocated_mems){
            Sync((void*)element,allocated_mems[element]);
        }
        """
    )
    
    write(f"""
    {"return result;" if not(function["type"]=="void" and function["num_indirection"]==0) else 'return;'}
    }}
    """)
    
    write(f"{funcpointer} deserialize_{funcpointer}(json name);",header=True)
    
    write(f"""
        void handle_{funcpointer}_request(json data){{
        //Will only be called by the client
        // Recieved data from server's {funcpointer} wrapper, and will execute the actual function
        
        result=json({{}});
        auto funcpointer=id_to_{funcpointer}[data["id"]];
        
        result["type"]="{funcpointer}_response";
        
    """)
    
    #Just in case if they change when executing (none of the variables are const)
    for param in function["params"]:
        write(f'auto {param["name"]}='+deserialize(f"""data["members"]["{param["name"]}"]""",param["type"],param["num_indirection"],param["length"])+";")
    
    write('result["result"]='+serialize(f"""funcpointer({",".join([param["name"] for param in function["params"]])})""",function["type"],function["num_indirection"],[]));

    for param in function["params"]:
        write(f'result["params"]["{param["name"]}"]='+serialize(param["name"],param["type"],param["num_indirection"],param["length"])+";")
    
    write("sendToConn(result);")
    
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
    {function["type"]} handle_{funcpointer}_response(json data){{
        //Will only be called by the server
        
        //Recieved result from client's {funcpointer}
        
        //If there's any memory returned, send client the address so it can keep track of it
    """)
    
    for param in function["params"]:
        write(f'auto {param["name"]}='+deserialize(f"""data["members"]["{param["name"]}"]""",param["type"],param["num_indirection"],param["length"])+";")
    
    if not(function["type"]=="void" and function["num_indirection"]==0):
        write("auto result="+deserialize('result["result"]',function["type"],function["num_indirection"],[]))
    
    if function["type"]=="void" and function["num_indirection"]==1:
        write(f"""
        json _malloc=json({{}});
        _malloc["type"]="{funcpointer}_malloc";
        _malloc["mem"]=(uintptr_t)result;
        
        sendToConn(_malloc);
        """
        )
    write("return result;" if not(function["type"]=="void" and function["num_indirection"]==0) else "")
    
    write("}")
    write(f"""{function["type"]} handle_{funcpointer}_response(json data);""",header=True)
        
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
              
          