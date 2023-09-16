import sys
from pprint import pprint
sys.path.append("_vendor")

import xmltodict

vk=xmltodict.parse(open("../Vulkan-Headers/registry/vk.xml").read())["registry"]
aliases={}

handles=set()
structs={}
commands={}
funcpointers={}
primitive_types=set()

for item in vk["types"]["type"]:
    type=item.get("@category","")
        
    if type=="struct":
        if "@alias" in item:
            if item["@alias"] not in structs:
                aliases[item["@alias"]]=item["@name"] #For aliases that are defined before their parrent is defined (only one case though)
                continue
            members=structs[item["@alias"]]
        else:
            members=item["member"]
            if isinstance(members,dict):
                members=[members]
            for member in members:
                keys=list(member.keys())
                for key in keys:
                    if key not in ["name","type"]:
                        del member[key]
        structs[item["@name"]]=members
        if item["@name"] in aliases:
            structs[aliases[item["@name"]]]=members
            del aliases[item["@name"]]
    elif type=="handle":
        if "name" in item:
            handles.add(item["name"])
        elif "@alias" in item:
            handles.add(item["@alias"])
    elif type=="funcpointer":
        print(item)
for item in vk["commands"]["command"]:
    command={}
    if "@alias" in item:
        name=item["@alias"]
        if name not in commands:
            aliases[name]=item["@name"] #For aliases that are defined before their parrent is defined
            continue
        command=commands[name]
    else:
        name=item["proto"]["name"]
        item["@successcodes"]=item.get("@successcodes","")
        item["@errorcodes"]=item.get("@errorcodes","")
        if ("VK_TIMEOUT" in item["@successcodes"].split(",")) or ("VK_TIMEOUT" in (item["@errorcodes"].split(","))):
            command["sync"]=True
        else:
            command["sync"]=False
        command["return"]=item["proto"]["type"]
        command["arguments"]=item["param"]
    
    commands[name]=command
    
    if name in aliases:
        commands[aliases[name]]=command
        del aliases[name]
