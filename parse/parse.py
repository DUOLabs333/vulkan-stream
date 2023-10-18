import xml.etree.ElementTree as ET

from pprint import pprint
import re
import json
import textwrap
vk=ET.parse("../external/Vulkan-Headers/registry/vk.xml").getroot()

aliases={}

handles={}
external_handles={}

primitive_types={"int":1,"void":1}
basic_types={}
pointer_types={}

structs={}
commands={}
funcpointers={}

def clean(string):
    return re.sub(r'[^a-zA-Z0-9]','',string)
    
def get_length(item):
    name_element=item.find("name")
    if name_element is None:
        result=None
    else:
        name_tail=name_element.tail
        if name_tail is None:
            result=None
        else:
            name_tail=name_tail.replace(" ","")
            if name_tail.startswith("[") and name_tail.endswith("]"):
                result=name_tail.removeprefix("[").removesuffix("]").replace("][",",")
            else:
                result=None
                
    if "altlen" in item.attrib:
        length=item.attrib["altlen"]
    elif "len" in item.attrib:
        length=item.attrib["len"]
    elif not(item.find("enum") is None):
        length=item.find("enum").text
    elif result is not None:
        length=result
    else:
        length=""

    return length.split(",")[::-1]
    
for item in vk.findall("./types/type"):
    type=item.attrib.get("category","")
    
    if item.attrib.get("requires","").endswith(".h"):
        external_handles[item.attrib["name"]]=True
        continue
        
    if type in ["struct","union"]:
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
                if member.attrib.get("api","")=="vulkansc":
                    members[i]=None
                    continue
                result={}
                
                result["name"]=member.find("name").text
                result["const"]=(member.text or "").startswith("const")
                
                result["length"]=get_length(member)

                _type=member.find("type")
                result["type"]=_type.text
                result["num_indirection"]=_type.tail.count("*")
                
                result["value"]=member.attrib.get("values","")
                
                
                if (result["type"] in external_handles) and result["num_indirection"]==0 and (len(result["length"])==0 or result["length"][-1]==""):
                        external_handles[result["type"]]=False #At least once case, it's not an pointer
                
                result["header"]=ET.tostring(member, encoding='utf8', method='text').decode()
                
                members[i]=result
            members=[_ for _ in members if _ is not None]
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
            
        funcpointer={}
        
        header=ET.tostring(item, encoding='utf8', method='text').decode()
        header=header.split("(")
        header[1]=name
        funcpointer["header"]="(".join(header).replace("(","",1).strip().removeprefix("typedef").strip().removesuffix(";")
        funcpointer["type"]=funcpointer["header"].split()[0] #Get return type. Split and get 0 when done
        funcpointer["num_indirection"]=funcpointer["type"].count("*")

        funcpointer["type"]=funcpointer["type"].replace("*","")
        
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
            
            member_dict["length"]=get_length(member)
            
            member_dict["header"]=qualifiers+" "+ET.tostring(member, encoding='utf8', method='text').decode().strip().split(",")[0]
            
            
            if member_dict["header"].endswith(","):
                member_dict["header"]=member_dict["header"].removesuffix(",")
            elif member_dict["header"].endswith(");"):
                member_dict["header"]=member_dict["header"].removesuffix(");")
            
            members[i]=member_dict
        funcpointer["params"]=members
           
        funcpointers[name]=funcpointer
    
    elif (item.attrib.get("requires",None)=="vk_platform") or (type in ["enum","bitmask"]):
        if "name" in item.attrib:
            name=item.attrib["name"]
        else:
            name=item.find("name").text
        primitive_types[name]=1
    elif type=="basetype":
        if item.find("type") is None:
            #For MacOS types
            regex=r"""
            ^(?:\s*)#ifdef(?:\s+)__OBJC__(?:\s*)
            (?:.*)
            (?:.*)#else(?:\s*)
            (?:\s*)typedef(?:\s+)(.*?)(?:\s*)$
            """
            regex=regex.split("\n",1)[1].rsplit("\n",1)[0]
            regex=textwrap.dedent(regex)
            match=re.match(regex,item.text,flags=re.S)
            if match is None:
                match=re.match(r"^(\s*)typedef(.*)\*(\s*)$",item.text)
                if match is None:
                    continue
                pointer_types[item.find("name").text]=True
                continue
            match_type=match.groups(1)[0]
            child=ET.SubElement(item, 'type')
            child.text=match_type.replace("*","")
            child.tail=("*"*match_type.count("*"))

        basic_types[item.find("name").text]={"type":item.find("type").text,"num_indirection":item.find("type").tail.count("*")}
        
for item in vk.findall("./commands/command"):
    command={}
    if "alias" in item.attrib:
        name=item.attrib["name"]
        alias=item.attrib["alias"]
        if alias not in commands:
            aliases[alias]=name #For aliases that are defined before their parrent is defined
            continue
        else:
            command=commands[alias].copy()
            command["header"]=command["header"].replace(alias,name,1)
    else:
        header=[]
        header.append(f"""{item.find("proto/type").text} {item.find("proto/name").text}(\n""")
        name=item.find("proto/name").text
        if ("VK_TIMEOUT" in item.attrib.get("successcodes","").split()+item.attrib.get("errorcodes","").split()):
            command["sync"]=True
        else:
            command["sync"]=False
    
        command["type"]=item.find("proto/type").text
        command["num_indirection"]=item.find("proto/type").tail.count("*")
        
        params=item.findall("param")
        
        params_set=set()
        for i, param in enumerate(params):
            result={}
            
            result["const"]=(param.text or "").startswith("const")
            result["num_indirection"]=param.find("type").tail.count("*")
            result["length"]=get_length(param)
            
            result["type"]=param.find("type").text
            result["header"]=ET.tostring(param, encoding='utf8', method='text').decode()
            
            result["name"]=param.find("name").text
            
            if result["name"] in params_set: #Two instances of duplicates
                params[i]=None
                continue
            else:
                params_set.add(result["name"])
                
            header.append("".join([(param.text or ""),param.find("type").text,(param.find("type").tail or ""),param.find("name").text,(param.find("name").tail or "")]))
            
            if (result["type"] in external_handles) and result["num_indirection"]==0 and (len(result["length"])==0 or result["length"][-1]==""):
                    external_handles[result["type"]]=False #At least once case, it's not an pointer
                    
                    
            params[i]=result
            
        params = [param for param in params if param is not None]
        
        for param in params:
            for i,length in enumerate(param["length"]):
                for param_1 in params:
                    if length==param_1["name"]:
                        param["length"][i]=("*"*param_1["num_indirection"])+length
                        break
                        
        header.append(")")
        
        command["header"]=header[0]+",\n ".join(header[1:-1])+"\n"+header[-1]
        
        command["params"]=params
    commands[name]=command

    if name in aliases:
        commands[aliases[name]]=command
        del aliases[name]

from ahocorapy.keywordtree import KeywordTree
import os, string
header=open("vulkan_header.h","r").read()
word_boundary=(string.punctuation+string.whitespace).replace("_","")
def are_features_implemented(features):
    result={}
    for feature in features:
        result[feature]=False
    
    unimplemented_count=len(features)
    
    kwtree = KeywordTree(case_insensitive=False)
    for feature in result:
        kwtree.add(feature)
    kwtree.finalize()
    
    for match in kwtree.search_all(header):
        if not((header[match[1]-1] in word_boundary) and (header[match[1]+len(match[0])] in word_boundary)): #Not an actual match
            continue
        if result[match[0]]: #Already marked as implemented
            continue
        
        result[match[0]]=True
        unimplemented_count-=1
        
        if unimplemented_count==0: #All are implemented, so no need to continue
            break
    return result
            
parsed_dict={}

for dict_name in ["external_handles","handles","primitive_types","basic_types","pointer_types","structs","commands","funcpointers"]:
    global_dict=globals()[dict_name]
    for feature,is_implemented in are_features_implemented(global_dict.keys()).items():
        if not is_implemented:
            #print(feature)
            del global_dict[feature]
            
    parsed_dict[dict_name]=global_dict

json.dump(parsed_dict,open("parsed.json","w+"),indent=4)