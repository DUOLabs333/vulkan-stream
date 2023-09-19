import utils

utils.write(f"""
#include <nlohmann/json.hpp>

// for convenience
using json = nlohmann::json;
""")
#Also put serialization here: serialize, for each member, seriaize, add it to members. Deserialize, take each key and add to member. do serialize for type as well. add headers for each function
#Do structs, then types, which is just adding them to json with {"value"}
#Do synchronization, then sending next
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
    utils.write("""
        json serialize_{type}({type} name){{
            return result=json({{"value":name}}):
        }};
    """)
    
    utils.write("""
        {type} deserialize{type}(json name){{
            return name["value"];
        }};
    """)
    
    utils.write(f"""
        json serialize_{type}({type} name);
        {type} deserialize_{type}(json name);
    """,header=True)
        
    