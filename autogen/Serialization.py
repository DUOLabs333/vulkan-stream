import utils

utils.write(f"""
#include <nlohmann/json.hpp>

// for convenience
using json = nlohmann::json;
""")
#Also put serialization here: serialize, for each member, seriaize, add it to members. Deserialize, take each key and add to member. do serialize for type as well. add headers for each function
#Do structs, then types, which is just adding them to json with {"value"}
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
    utils.write(function["header"].replace(funcpointer,f"wrapper_{funcpointer}")+"{")
    utils.write(f"""
    json data=json({{}});
    data["type"]="{funcpointer}";
    data["members"]=json({{}});
    """)
    for param in function["params"]:
        utils.write(f"""
            data["members"]["{param["name"]}"]={serialize(param["name"],param["type"],param["num_indirection"],param["length"])};
        """
        )
    
    utils.write("")
        