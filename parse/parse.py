import xml.etree.ElementTree as ET
from pprint import pprint


vk=ET.parse("../Vulkan-Headers/registry/vk.xml").getroot()

aliases={}

handles=set()
structs={}
commands={}
funcpointers={}
primitive_types=set()

for item in vk.findall("./types/type"):
    type=item.attrib.get("category","")
    if type=="struct":
        name=item.attrib["name"]
        if "alias" in item.attrib:
            alias=item.attrib["alias"]
            if alias not in structs: #For aliases that are defined before their parrent is defined (only one case though)
                aliases[alias]=name
                continue
            else:
                members=structs[alias]
        else:
            members=item.findall("member")
            
            for i,member in enumerate(members):
                result={}
                result["const"]=(member.tail or "").startswith("const")
                result["length"]=member.attrib.get("len","").split(",")[::-1]
                _type=member.find("type")
                result["type"]=_type.text
                result["num_indirection"]=_type.tail.count("*")
                members[i]=result
            
        structs[name]=members
        if name in aliases:
            structs[aliases[name]]=members
            del aliases[name]
        
    elif type=="handle":
        name=item.find("name")
        alias=item.attrib.get("alias",None)
        if name:
            handles.add(name.text)
            
        elif alias:
            handles.add(alias)
    elif type=="funcpointer":
        #print(item)
        pass
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
