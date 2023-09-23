import utils

utils.write("""
#include <nlohmann/json.hpp>
using json = nlohmann::json;
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
""")

for command in utils.parsed["commands"]:
    utils.write(f"""
    void handle_{command}(json data){{
    """)
    
    for param in utils.parsed["commands"]:
        utils.write(param["name"]+"="+deserialize("""data["members"]["{param["name"]}"]""",param["type"],param["num_indirection"],param["length"])+";")
    
    utils.writ