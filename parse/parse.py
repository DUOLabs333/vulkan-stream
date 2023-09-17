import xml.etree.ElementTree as ET
from pprint import pprint
import re

vk=ET.parse("../Vulkan-Headers/registry/vk.xml").getroot()

aliases={}

handles=set()
structs={}
commands={}
funcpointers={}
primitive_types=set()

def clean(string):
    return re.sub(r'[^a-zA-Z0-9]','',string)
    
#Make header for commands --- replace tags with delimiters
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
        name=item.find("name")
        alias=item.attrib.get("alias",None)
        if name:
            handles.add(name.text)
            
        elif alias:
            handles.add(alias)
    elif type=="funcpointer":
        name=item.find("name").text
        members=item.findall("type")
        
        cur_tail=item.find("name").tail
        for i,member in enumerate(members):
            result={}
            
            qualifiers=clean(cur_tail.split(",")[-1]) #Get previous tail and split from the back
            result["const"]=qualifiers.startswith("const")
            
            result["type"]=member.text
            result["num_indirection"]=member.tail.lstrip().count("*")
            
            cur_tail=member.tail
            result["name"]=clean(cur_tail.split(",")[0]) #Split from the head
            
            result["header"]=ET.tostring(item, encoding='utf8', method='text').decode().rstrip(";") #Remove tags
            
            members[i]=result
            
        funcpointers[name]=members
        
for item in vk.findall("./commands/command"):
    command={}
    name=item.find("proto/name").text
    if "alias" in item.attrib:
        alias=item.attrib["alias"]
        if alias not in commands:
            aliases[alias]=name #For aliases that are defined before their parrent is defined
            continue
        else:
            command=commands[alias]
    else:
        if ("VK_TIMEOUT" in item.attrib.get("successcodes","").split()+item.attrib.get("errorcodes","").split()):
            command["sync"]=True
        else:
            command["sync"]=False
    
        command["return"]=item.find("proto/type").text
        
        params=item.findall("param")
        
        
    
    commands[name]=command
    
    if name in aliases:
        commands[aliases[name]]=command
        del aliases[name]
