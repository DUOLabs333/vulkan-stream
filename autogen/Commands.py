import utils

utils.write("""
#include <nlohmann/json_fwd.hpp>
using json = nlohmann::json;

#include <vulkan/vulkan.h>
""")

utils.write("""
void handle_Command(json data){
//Will only be called by the server
std::string command=data["type"].substr("Command_".length());

switch(command){
""")
for command in utils.parsed["commands"]:
    utils.write(f"""
        case "{command}":
            handle_{command}(data);
            break;
    """)

utils.write("""
    default:
        break;
}
""")


for command in utils.parsed["commands"]:
    utils.write(f"""
    void handle_{command}(json data){{
    """)
    
    for param in utils.parsed["commands"][command]:
        utils.write(param["name"]+"="+deserialize(f"""data["members"]["{param["name"]}"]""",param["type"],param["num_indirection"],param["length"])+";")
    
    utils.write(f"""{command['return_type']} return_value={command['header']};""")
    
    utils.write(f"""json result=json({{}});
        result["type"]="Response";
        result["return"]={serialize('return_value',command['return_type'],command['return_num_indirection'],[])};
    """)
    
    for param in utils.parsed["commands"][command]:
        if not param["const"]:
            utils.write(f"""result["members"]["{param["name"]}"]"""+"="+serialize(param["name"],param["type"],param["num_indirection"],param["length"])+";")
    
    utils.write("""
        sendtoConn(result);
    }""")
    
    utils.write(f"""void handle_{command}(json data);""",header=True)

utils.write("#ifdef CLIENT") #Don't want server to get confused on which command we're talking about
for command in utils.parsed["commands"]:
    utils.write(utils.parsed["commands"][command]["header"]+"{")
    utils.write("result=json({});")
    
    for param in utils.parsed["commands"][command]:
        if not param["const"]:
            utils.write(f"""result["members"]["{param["name"]}"]"""+"="+serialize(param["name"],param["type"],param["num_indirection"],param["length"])+";")
            
    for param in utils.parsed["commands"][command]:
        utils.write(param["name"]+"="+deserialize(f"""data["members"]["{param["name"]}"]""",param["type"],param["num_indirection"],param["length"])+";")
    
    utils.write(f"""{command['return_type']} return_value={command['header']};""")
    
    utils.write(f"""json result=json({{}});
        result["type"]="Response";
        result["return"]={serialize('return_value',command['return_type'],command['return_num_indirection'],[])};
    """)
    
    
    utils.write("""
        sendtoConn(result);
    }""")