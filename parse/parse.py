import xml.etree.ElementTree as ET

from pprint import pprint
import re
import json
import textwrap
vk=ET.parse("../external/Vulkan-Headers/registry/vk.xml").getroot()

parsed={}

def clean(string):
    return re.sub(r'[^a-zA-Z0-9]','',string)

def clean_header(header):
    header=header.replace("\n"," ")
    return re.sub(r"\s+"," ", header).strip()
    
def get_length(item,info):
    name_element=item.find("name")
    num_indirection=info["num_indirection"]
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
    
    result=[]
    
    if length!="":
        result=length.split(",")[::-1]
    
    if result==[] and num_indirection>0:
        result=[1]*num_indirection
        if info["type"] in ["void","char"]:
            result[0]="null-terminated"
    info["length"]=result
    

def get_schema_type(type):
    if type in ["char","size_t","void"] or type.startswith("uint"):
        return "UInt64"
    elif type=="float":
        return "Float32"
    elif type=="double":
        return "Float64"
    else:
        return "Int64"
        
for item in vk.findall("./types/type"):
    result={}
    kind=item.attrib.get("category","")
    
    if item.attrib.get("requires","").endswith(".h"):
        name=item.attrib["name"]
        result["alias"]="uintptr_t"
        
    elif kind in ["struct","union"]:
        name=item.attrib["name"]
        kind="struct"
        
        if "alias" in item.attrib:
            alias=item.attrib["alias"]
            result["alias"]=alias
        else:
            members=[]
            
            for i,elem in enumerate(item.findall("member")):
                member={}
                
                for comment in elem.findall("comment"):
                    elem.remove(comment)
                    
                if elem.attrib.get("api","")=="vulkansc":
                    continue
                
                member["name"]=elem.find("name").text
                member["const"]=(elem.text or "").startswith("const")
                member["relation"]="member"
                
                type=elem.find("type")
                member["type"]=type.text
                
                member["num_indirection"]=type.tail.count("*")
                get_length(elem,member)
                
                if member["name"]=="sType":
                    result["sType"]=elem.attrib.get("values","")
                
                member["header"]=ET.tostring(elem, encoding='utf8', method='text').decode()
                
                member["header"]=clean_header(member["header"])
                
                if kind=="struct" and member["name"]=="pNext" and member["type"]=="void" and member["num_indirection"]==1:
                    member["type"]="pNext"
                    member["num_indirection"]=0
                
                if name=="VkImageToMemoryCopyEXT" and member["name"]=="pHostPointer":
                    member["length"]=["100000"]
                    
                members.append(member)
        result["members"]=members
        
    elif kind=="handle":
        
        if not(item.find("name") is None):
            name=item.find("name").text
        elif item.attrib.get("name",None):
            name=item.attrib["name"]
            
        result["alias"]="uintptr_t"
            
    elif kind=="funcpointer":
        name=item.find("name").text
        
        if name=="PFN_vkVoidFunction":
            continue
        
        header=ET.tostring(item, encoding='utf8', method='text').decode()
        header=header.split("(")
        header[1]=name
        result["header"]="(".join(header).replace("(","",1).strip().removeprefix("typedef").strip().removesuffix(";")
        
        result["header"]=clean_header(result["header"])
        
        result["type"]=result["header"].split()[0]
        result["num_indirection"]=result["type"].count("*")

        result["type"]=result["type"].replace("*","")
        
        params=[]
        
        cur_tail=item.find("name").tail
        for i,elem in enumerate(item.findall("type")):
            param={}
            
            qualifiers=clean(cur_tail.split(",")[-1]) #Get previous tail and split from the back
            param["const"]=qualifiers.startswith("const")
            param["relation"]="param"
            param["type"]=elem.text
            param["num_indirection"]=elem.tail.lstrip().count("*")
            
            cur_tail=elem.tail
            param["name"]=clean(cur_tail.split(",")[0]) #Split from the head
            
            get_length(elem,param)
            
            param["header"]=qualifiers+" "+ET.tostring(elem, encoding='utf8', method='text').decode().strip().split(",")[0]
            
            param["header"]=clean_header(param["header"])
            
            if param["header"].endswith(","):
                param["header"]=param["header"].removesuffix(",")
            elif param["header"].endswith(");"):
                param["header"]=param["header"].removesuffix(");")
            
            params.append(param)
        result["params"]=params
    
    elif (item.attrib.get("requires",None)=="vk_platform") or (kind in ["enum","bitmask"]) or item.attrib.get("name","")=="int":
        if "name" in item.attrib:
            name=item.attrib["name"]
        else:
            name=item.find("name").text
        
        if kind!="":
            result["alias"]="int"
        else:
            kind="primitive"
            
    elif kind=="basetype":
        name=item.find("name").text
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
                result["kind"]="external_handle"
                result["alias"]="uintptr_t"
                parsed[name]=result
                continue
                
            match_type=match.groups(1)[0]
            child=ET.SubElement(item, 'type')
            child.text=match_type.replace("*","")
            child.tail=("*"*match_type.count("*"))
        
        result["type"]=item.find("type").text
        result["num_indirection"]=item.find("type").tail.count("*")
        get_length(item,result)
    else:
        continue
    
    if "kind" not in result:
        result["kind"]=kind
        
    parsed[name]=result

        
for item in vk.findall("./commands/command"):
    result={}
    result["kind"]="command"
    if "alias" in item.attrib:
        name=item.attrib["name"]
        result["alias"]=item.attrib["alias"]
    else:
        header=[]
        header.append(f"""{item.find("proto/type").text} {item.find("proto/name").text}(\n""")
        name=item.find("proto/name").text
    
        result["type"]=item.find("proto/type").text
        result["num_indirection"]=item.find("proto/type").tail.count("*")
        
        params=[]
        params_set=set()
        for i, elem in enumerate(item.findall("param")):
            param={}
            
            param["const"]=(elem.text or "").startswith("const")
            param["num_indirection"]=elem.find("type").tail.count("*")
            param["relation"]="param"
            param["type"]=elem.find("type").text
            get_length(elem,param)
            
            param["header"]=ET.tostring(elem, encoding='utf8', method='text').decode()
            param["header"]=clean_header(param["header"])
            
            param["name"]=elem.find("name").text
            
            if name=="vkMapMemory" and param["name"]=="ppData":
                param["length"]=["size","1"]
                
            if param["name"] in params_set: #Two instances of duplicates
                continue
            else:
                params_set.add(param["name"])
                
            header.append("".join([(elem.text or ""),elem.find("type").text,(elem.find("type").tail or ""),elem.find("name").text,(elem.find("name").tail or "")]))
            
            params.append(param)
        
        for param in params:
            for i,length in enumerate(param["length"]):
                for param_1 in params:
                    if length==param_1["name"]:
                        param["length"][i]=("*"*param_1["num_indirection"])+length
                        break
                        
        header.append(")")
        
        result["header"]=header[0]+",\n ".join(header[1:-1])+"\n"+header[-1]
        result["header"]=clean_header(result["header"])
        
        result["params"]=params
        
    parsed[name]=result

parsed["pNext"]={"kind":"struct"} #Just a stub for a custom class we'll override

schemas={}

def generate_schema(info, name=None):
    if name is None:
        name=info["name"]
    
    if name in schemas:
        return schemas[name]
        
    if "alias" in info:
        alias=info["alias"]
        result=generate_schema(parsed[alias],alias)
    else:
        pass
    
    schemas[name]=result
        

#TODO: Autogenerate schema based on parsed dictionary (specifiically here, as all commands might be sent)

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
            
for feature,is_implemented in are_features_implemented(parsed.keys()).items():
    if not is_implemented:
        #print(feature)
        del parsed[feature]

json.dump(parsed,open("parsed.json","w+"),indent=4)
