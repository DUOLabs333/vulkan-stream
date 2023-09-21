import utils

utils.write(f"""
#include <nlohmann/json.hpp>

// for convenience
using json = nlohmann::json;
""")

#Do synchronization, then sending next --- a function only returns once the original command object returns (has "Command" type)
#Add variable CLIENT when compiling to enable conditional behavior
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
    utils.write(function["header"].replace(funcpointer,f"{funcpointer}_wrapper")+"{")
    utils.write(f"""
    json data=json({{}});
    data["type"]="{funcpointer}_request";
    data["index"]={funcpointer}_to_index[(uintptr_t){funcpointer}_wrapper];
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
    utils.write(("return result;" if not(function["type"]=="void" and function["num_indirection"]==0) else 'return;')+"};")
    utils.write(function["header"].replace(funcpointer,f"{funcpointer}_wrapper")+";",header=True)
    
    utils.write("""
    json serialize_{funcpointer}({function["type"]} (*name) ({param["type"] for param in function["params"]}) ){{
        //Will only be called by the client
        
        json result=json({{}});
        result["index"]=(uintptr_t)name;
        index_to_{funcpointer}[(uintptr_t)name]=name;
        return result;
    }}
    """)
    
    utils.write(f"""json serialize_{funcpointer}({function["type"]} (*name) ({param["type"] for param in function["params"]}) );""",header=True)
    
    
    #Not going to write out the signature, but let the compiler figure it out
    utils.write(f"""
    auto inline deserialize_{funcpointer}(json name){{
        //Will only be called by the server
        
        {funcpointer}_to_index[(uintptr_t){funcpointer}_wrapper]=name["index"];
        return {funcpointer}_wrapper;
    }}
    """,header=True)
    
    utils.write(f"""
        void handle_{funcpointer}_request(json data){{
        //Will only be called by the client
        
        result=json({{}});
        auto funcpointer=index_to_{funcpointer}[data["index"]];
        
        result["type"]="{funcpointer}_response";
        
    """)
    
    #Just if they change when executing (none of the variables are const)
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
                }}
            }}
        """)
    
    utils.write("};")
            
    
    utils.write(f"void handle_{funcpointer}_request(json data);",header=True);
    
    utils.write(f"""
    {function["type"]} handle_{funcpointer}_response(json data){{
        //Will only be called by the server
    """)
    
    for param in function["params"]:
        utils.write(f'auto {param["name"]}='+deserialize(f"""data["members"]["{param["name"]}"]""",param["type"],param["num_indiretion"],param["length"])+";")
    
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
    
    utils.write(f"""{function["type"]} handle_{funcpointer}_response(json data);""",header=True)
        
        
          