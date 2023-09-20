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
    data["type"]="{funcpointer}_wrapper";
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
        if (data["type"]=="{funcpointer}_return"){{
            auto result={
            deserialize('data["return"]',function["type"],function["num_indirection"],function["length"])
            if function["type"]!="void"
            else "NULL"
            }
            break;
        }}
    """)

    if type=="void*":
        utils.write("""
            alloc_memories.push_back(result);
        """)
    
    utils.write("""
        for (auto & element: alloc_memory){
            Sync(element);
        }"""
    )
    utils.write(("return result;" if function["type"]!="void" else 'return;')+"};")
    
    utils.write("""
    json serialize_{funcpointer}({function["type"]} (*name) ({param["type"] for param in function["params"]}) ){{
        json result=json({{}});
        return resullt;
    }}
    """)
    
    utils.write(f"""
    inline auto deserialize_{funcpointer}(json name){{
        #ifndef CLIENT
            return {funcpointer}_wrapper;
        #else
            return; 
    }}
    """,header=True)
    
    utils.write(function["header"].replace(funcpointer,f"{funcpointer}_wrapper")+";",header=True)
    utils.write(f"""json serialize_{funcpointer}({function["type"]} (*name) ({param["type"] for param in function["params"]}) )""",header=True)
          