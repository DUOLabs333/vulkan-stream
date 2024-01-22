def normalize_field(string):
    string=string.replace("_","")
    if string=="":
        return ""
    else:
        return string[0].lower()+string[1:]
        
def normalize_type(string):
    string=string.replace("_","")
    if string=="":
        return ""
    else:
        return string[0].upper()+string[1:]
    
if __name__=="__main__":
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
                    
                    if member["name"]=="sType":
                        result["sType"]=elem.attrib.get("values","")
                    
                    member["header"]=ET.tostring(elem, encoding='utf8', method='text').decode()
                    
                    member["header"]=clean_header(member["header"])
                    
                    for special in ["pNext","pUserData"]:
                        if kind=="struct" and member["name"]==special and member["type"]=="void" and member["num_indirection"]==1:
                            member["type"]=special
                            member["num_indirection"]=0
                    
                    
                    get_length(elem,member)
                    
                    if name=="VkImageToMemoryCopyEXT" and member["name"]=="pHostPointer":
                        member["length"]=["100000"]
                     
                      
                    members.append(member)
            result["members"]=members
            
        elif kind=="handle":
            
            if not(item.find("name") is None):
                name=item.find("name").text
            elif item.attrib.get("name",None):
                name=item.attrib["name"]
                
            result["type"]="uintptr_t"
                
        elif kind=="funcpointer":
            name=item.find("name").text
            
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
                result["kind"]="external_handle"
                result["alias"]="uintptr_t"
            else:
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
    
    parsed["pNext"]={"kind":"struct","ignore":True} #Just a stub for a custom class we'll override
    parsed["pUserData"]={"kind":"struct","ignore":True,"members":[]} #Just a stub for a custom class we'll override
    parsed["uintptr_t"]={"kind": "primitive"}
    
    def is_funcpointer(name):
        if "alias" in parsed[name]:
            return is_funcpointer(parsed[name]["alias"])
        else:
            return parsed[name]["kind"]=="funcpointer"
            
    for name in parsed:
        if is_funcpointer(name):
            parsed["pUserData"]["members"].append({"name":name,"type":"uintptr_t","num_indirection":0,"length":[]})
    
    
    def map_type_to_schema(type):
        if type in ["char","size_t","void"] or type.startswith("uint"):
            return "UInt64"
        elif type=="float":
            return "Float32"
        elif type=="double":
            return "Float64"
        else:
            return "Int64"
            
    schema_types={}
    
    def get_schema_type(info, name=None):
        if name in schema_types:
            return schema_types[name]
        
        kind=info.get("kind","")
        length=len(info.get("length",[]))
        type=info.get("type","")
        
        if "alias" in info:
            alias=info["alias"]
            result=get_schema_type(parsed[alias],alias)
        else:
            if kind=="primitive":
                result=map_type_to_schema(name)
            elif kind in ["struct","funcpointer"] and (name is not None):
                result=normalize_type(name)
            else:
                result=("List("*length)+get_schema_type(parsed[type],type)+(")"*length)
                
        if name is not None:           
            schema_types[name]=result
            
        return result
    
    schemas={}
    for name,obj in parsed.items():
        kind=obj.get("kind","")
        index=0
        result=[f"struct {normalize_type(name)} {{"]
        
        if "alias" in obj: #If it is a function/funcpointer, when generating code we just return the result from calling the object it's aliased to. If it is a struct, then we don't need to do anything as it's already typedefed for us
            continue
        elif name=="pNext":
            result.append("union {")
            
            result.append(f"none @{index} :Void;")
            index+=1
            
            for name in parsed:
                if ("alias" in parsed[name]) or parsed[name].get("kind","")!="struct" or ("ignore" in parsed[name]):
                    continue
                else:
                    result.append(f"{normalize_field(name)} @{index} :{normalize_type(name)};")
                    index+=1
            result.append("}")
        elif kind=="struct":
            for member in obj["members"]:
                result.append(f"{normalize_field(member['name'])} @{index} :{get_schema_type(member)};")
                index+=1
        elif kind in ["command","funcpointer"]:
            if kind=="command":
                result.append("parent :union {")
                result.append(f"device @{index} :{map_type_to_schema('uintptr_t')};")
                index+=1
                
                result.append(f"instance @{index} :{map_type_to_schema('uintptr_t')};")
                index+=1
                
                result.append("}")
                
                result.append(f"mem @{index} :{map_type_to_schema('uintptr_t')};")
                index+=1
            else:
                result.append(f"id @{index} :{map_type_to_schema('int')};")
                index+=1
            
            
            result.append(f"return @{index} :{get_schema_type(obj)};")
            index+=1
            
            for param in obj["params"]:
                result.append(f"{normalize_field(param['name'])} @{index} :{get_schema_type(param)};")
                index+=1
        else:
            continue
        result.append("}")
        schemas[name]="\n".join(result)
    
    schemas["Sync"]=f"""
    struct Sync {{
        devicememory @0 :{get_schema_type(parsed["VkDeviceMemory"])};
        mem @1 :{map_type_to_schema("uintptr_t")};
        starts @2 :List({map_type_to_schema("size_t")});
        lengths @3 :List({map_type_to_schema("size_t")});
        hashes @4 :List(Text);
        buffers @5 :List(Data);
    }}
    """
    
    message_schema=[f"""
    struct Message {{
        uuid @0 :{map_type_to_schema("int")};
        union {{
        sync @1 :Sync;
    """]
    index=2
    
    for name in parsed:
        if ("alias" in parsed[name]) or parsed[name].get("kind","") not in ["command", "funcpointer"]:
            continue
        else:
            message_schema.append(f"{normalize_field(name)} @{index} :{normalize_type(name)};")
            index+=1
            
    message_schema.append("}}")
    
    schemas["Message"]="\n".join(message_schema)
    
    schema_file=open("schema.capnp","w+")
    schema_file.write("@0xfccbbb584171b69d;\n\n")
    
    for name, schema in schemas.items():
        schema_file.write(schema+"\n\n")
    schema_file.close()
    
    import subprocess
    subprocess.run(["capnp", "compile", "-oc++", "schema.capnp"])
     
    #TODO: Autogenerate schema based on parsed dictionary (specifiically here, as any command might be sent)
    
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
