import xml.etree.ElementTree as ET
from pprint import pprint
import re
import json

vk=ET.parse("../external/Vulkan-Headers/registry/vk.xml").getroot()

aliases={}

handles={}
primitive_types={"int":1,"void":1}

structs={}
commands={}
funcpointers={}

def clean(string):
    return re.sub(r'[^a-zA-Z0-9]','',string)
    

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
                
                result["name"]=member.find("name").text
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

        if not(item.find("name") is None):
            name=item.find("name").text
        elif item.attrib.get("name",None):
            name=item.attrib["name"]
        
        handles[name]=1
            
    elif type=="funcpointer":
        name=item.find("name").text
        if name=="PFN_vkVoidFunction":
            continue
            
        result={}
        
        result["header"]=ET.tostring(item, encoding='utf8', method='text').decode()
        result["type"]=result["header"].split()[0] #Get return type
        result["num_indirection"]=result["type"].count("*")
        result["type"]=result["type"].replace("*","")
        
        members=item.findall("type")
        cur_tail=item.find("name").tail
        for i,member in enumerate(members):
            member_dict={}
            
            qualifiers=clean(cur_tail.split(",")[-1]) #Get previous tail and split from the back
            member_dict["const"]=qualifiers.startswith("const")
            
            member_dict["type"]=member.text
            member_dict["num_indirection"]=member.tail.lstrip().count("*")
            
            cur_tail=member.tail
            member_dict["name"]=clean(cur_tail.split(",")[0]) #Split from the head
            
            member_dict["length"]=member.attrib.get("len","").split(",")[::-1]
            
            member_dict["header"]=ET.tostring(member, encoding='utf8', method='text').decode()
            
            members[i]=member_dict
        result["params"]=members
           
        funcpointers[name]=result
    
    if (item.attrib.get("requires",None)=="vk_platform") or (type=="enum"):
        primitive_types[item.attrib["name"]]=1
        
for item in vk.findall("./commands/command"):
    command={}
    if "alias" in item.attrib:
        name=item.attrib["name"]
        alias=item.attrib["alias"]
        if alias not in commands:
            aliases[alias]=name #For aliases that are defined before their parrent is defined
            continue
        else:
            command=commands[alias]
    else:
        header=[]
        header.append(f"""{item.find("proto/type").text} {item.find("proto/name").text}(\n""")
        name=item.find("proto/name").text
        if ("VK_TIMEOUT" in item.attrib.get("successcodes","").split()+item.attrib.get("errorcodes","").split()):
            command["sync"]=True
        else:
            command["sync"]=False
    
        command["return_type"]=item.find("proto/type").text
        command["return_num_indirection"]=item.find("proto/type").tail.count("*")
        
        params=item.findall("param")
        
        for i, param in enumerate(params):
            result={}
            
            result["const"]=(param.text or "").startswith("const")
            result["num_indirection"]=param.find("type").tail.count("*")
            result["length"]=param.attrib.get("len","").split(",")[::-1]
            
            result["type"]=param.find("type").text
            result["name"]=param.find("name").text
            
            header.append("".join([(param.text or ""),param.find("type").text,(param.find("type").tail or ""),param.find("name").text,(param.find("name").tail or "")]))
            params[i]=result
        
        header.append(")")
        
        command["header"]=header[0]+",\n ".join(header[1:-1])+"\n"+header[-1]
        
        command["params"]=params
    commands[name]=command
    
    if name in aliases:
        commands[aliases[name]]=command
        del aliases[name]

json.dump({key:globals()[key] for key in ["handles","primitive_types","structs","commands","funcpointers"]},open("parsed.json","w+"),indent=4)
#Save uint, int, float, etc to primitive types, along with all enums. Then, add that to an object and pickle it.