import utils

utils.write(f"""
#include <nlohmann/json_fwd.hpp>

// for convenience
using json = nlohmann::json;
""")


#Map memory buffer into shared_memory (makes it easier to share later)
#currStruct returns thread_to_struct[pthread_self()]. Struct contains mem_to_sync and conn, where conn is session on server, but client is session .If it doesn't exist (new thread), create it
#In Global.cpp, auto service = std::make_shared<CppServer::Asio::Service>(); have thread_to_struct
"""
#ifdef CLIENT
        if(thread_to_conn.count(thread_id)==0){
            thread_to_conn[thread_id]=std::make_shared<StreamClient>(service, address, port);
            thread_to_conn[thread_id]->Start();
            service->Start(); //Make sure it's on
        }
    #endif
auto startServer(){
    server = std::make_shared<StreamServer>(service, port);
    server->Start();
    return server; 
}
Global will also contain json_fwd.hpp
"""

"""
Ok, so my original idea is needed: I need to keep track of what is bound to what and if something is referenced, sync the attached memory at endcommandbuffers/queuesubmit. If it has been synced to the server, at any waitforfences, sync all such synced memories. When a new command buffer is being used, clear the synced_memories and repeat the process.
"""

for struct,members in utils.parsed["structs"].items():
    utils.write(f"""
    json serialize_{struct}({struct} name){{
        json result=json({{}}):
        result["members"]=json({{}});
    """)
    
    for member in members:
        utils.write("""
        result["members"]["{member['name']}"]={serialize(member['name'],member['type'],member['num_indirection'],member['length'])};
        """)
    utils.write("""
    return result;
    }};
    """)
    
    utils.write(f"""
    {struct} deserialize_{struct}(json name){{
        auto result={struct}();
    """)
    
    for member in members:
        if not member["const"]:
            utils.write("""
        result.{member['name']}={deserialize("name["+member['name']+"]", member['type'], member['num_indirection'], member['length'])};
        """)
    utils.write("""
    return result;
    }};
    """)
    
    utils.write(f"""
        json serialize_{struct}({struct} name);
        {struct} deserialize_{struct}(json name);
    """,header=True)

for type in parsed["primitive_types"]:
    if type in ["void","char"]:
        utils.write("""
            json serialize_{type}_p({type}* name){{
                return result=json({{"value":(char *)name}}):
            }};
        """)
        
    utils.write("""
        json serialize_{type}({type} name){{
            return result=json({{"value":name}}):
        }};
    """)
    
    if type in ["void","char"]:
        utils.write("""
            {type}* deserialize_{type}_p(json name){{
                return ({type}*) name["value"];
            }};
        """)
        
    utils.write("""
        {type} deserialize_{type}(json name){{
            return name["value"];
        }};
    """)
    
    if type in ["void","char"]:
        utils.write(f"""
            json serialize_{type}_p({type}* name);
            {type}* deserialize_{type}_p(json name);
        """,header=True)

    utils.write(f"""
        json serialize_{type}({type} name);
        {type} deserialize_{type}(json name);
    """,header=True)

           
for funcpointer,function in parsed["funcpointers"].items():
    
    header=" ".join([param["header"] for param in function["params"]])
    
    utils.write(f"""
    json serialize_{funcpointer}({function["type"]} (*name) ({header}) ){{
        //Will only be called by the client
        
        json result=json({{}});
        result["id"]=(uintptr_t)name;
        id_to_{funcpointer}[(uintptr_t)name]=name;
        return result;
    }}
    """)
    
    utils.write(f"""json serialize_{funcpointer}({function["type"]} (*name) ({header}) );""",header=True)
    
    
    #Not going to write out the signature, but let the compiler figure it out
    utils.write(f"""
    {funcpointer} deserialize_{funcpointer}(json name){{
        //Will only be called by the server
        
        uintptr_t id=name["id"];
        return [id]({header}){{
    """)
    utils.write(f"""
    json data=json({{}});
    data["type"]="{funcpointer}_request";
    data["id"]=id;
    data["members"]=json({{}});
    """)
    for param in function["params"]:
        utils.write(f"""
            data["members"]["{param["name"]}"]={serialize(param["name"],param["type"],param["num_indirection"],param["length"])};
        """
        )
    
    utils.write(f"""
    sendToConn(data);
    while (true){{
        data=readFromConn();
        if (data["type"]=="{funcpointer}_response"){{
           {'auto result= handle_{funcpointer}_response(data);' if not(function["type"]=="void" and function["num_indirection"]==0) else ''}
           break;
        }}
    """)

    if function["type"]=="void" and function["num_indirection"]==1:
        utils.write("""
            allocated_mems[(uintptr_t)result]=size;
        """)
    
    utils.write("""
        for (auto & element: allocated_mems){
            Sync((void*)element,allocated_mems[element]);
        }
        """
    )
    
    utils.write(f"""
    {"return result;" if not(function["type"]=="void" and function["num_indirection"]==0) else 'return;'}
    }}
    }}
    """)
    
    utils.write(f"{funcpointer} deserialize_{funcpointer}(json name);",header=True)
    
    utils.write(f"""
        void handle_{funcpointer}_request(json data){{
        //Will only be called by the client
        // Recieved data from server's {funcpointer} wrapper, and will execute the actual function
        
        result=json({{}});
        auto funcpointer=id_to_{funcpointer}[data["id"]];
        
        result["type"]="{funcpointer}_response";
        
    """)
    
    #Just in case if they change when executing (none of the variables are const)
    for param in function["params"]:
        utils.write(f'auto {param["name"]}='+deserialize(f"""data["members"]["{param["name"]}"]""",param["type"],param["num_indirection"],param["length"])+";")
    
    utils.write('result["result"]='+serialize(f"""funcpointer({",".join([param["name"] for param in function["params"]])})""",function["type"],function["num_indirection"],function["length"]));

    for param in function["params"]:
        utils.write(f'result["params"]["{param["name"]}"]='+serialize(param["name"],param["type"],param["num_indirection"],param["length"])+";")
    
    utils.write("sendToConn(result);")
    
    if function["type"]=="void" and function["num_indirection"]==1:
        utils.write(f"""
            while(true){{
                data=readFromConn();
                if (data["type"]=="{funcpointer}_malloc"){{
                    client_to_server_mem[(uintptr_t)result["result"]]=data["mem"];
                    server_to_client_mem[data["mem"]]=(uintptr_t)result["result"];
                    break;
                }}
            }}
        """)
    
    utils.write("};")
            
    
    utils.write(f"void handle_{funcpointer}_request(json data);",header=True);
    
    utils.write(f"""
    {function["type"]} handle_{funcpointer}_response(json data){{
        //Will only be called by the server
        
        //Recieved result from client's {funcpointer}
        
        //If there's any memory returned, send client the address so it can keep track of it
    """)
    
    for param in function["params"]:
        utils.write(f'auto {param["name"]}='+deserialize(f"""data["members"]["{param["name"]}"]""",param["type"],param["num_indirection"],param["length"])+";")
    
    if not(function["type"]=="void" and function["num_indirection"]==0):
        utils.write("auto result="+deserialize('result["result"]',function["type"],function["num_indirection"],[]))
    
    if function["type"]=="void" and function["num_indirection"]==1:
        utils.write(f"""
        json _malloc=json({{}});
        _malloc["type"]="{funcpointer}_malloc";
        _malloc["mem"]=(uintptr_t)result;
        
        sendToConn(_malloc);
        """
        )
    utils.write("return result;" if not(function["type"]=="void" and function["num_indirection"]==0) else "")
    
    utils.write("}")
    utils.write(f"""{function["type"]} handle_{funcpointer}_response(json data);""",header=True)
        
for handle in utils.parsed["handles"]:
        utils.write(f"""
        json serialize_{handle}({handle} data){{
            json result=json({{}});
            result["value"]=(uintptr_t)data;
            return result;
        }}
       """)
       
        utils.write(f"""json serialize_{handle}({handle} data);""",header=True)
        if handle=="VkDeviceMemory":
            utils.write("""
            #ifdef CLIENT
            if (mapped_memory.count((uintptr_t)data)){
                currStruct()->mem_to_sync->insert((uintptr_t)data);
            }
            #endif
            """)
        utils.write(f"""
       {handle} deserialize_{handle}(json data){{
               return ({handle})data["value"];
       }}""")
       
        utils.write(f"""{handle} deserialize_{handle}(json data);""",header=True)
              
          