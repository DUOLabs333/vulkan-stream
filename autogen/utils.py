import inspect
import pathlib
import atexit
for frame in inspect.stack()[1:]:
        if frame.filename[0] != '<':
            output_basename=pathlib.Path(frame.filename).stem
            break

lines=[]
header_lines=[]

import json
import copy
import random, string
parsed=json.load(open("../parse/parsed.json"))

random_string = lambda seed: ''.join(random.Random(json.dumps(seed)).choices(string.ascii_uppercase + string.ascii_lowercase, k=7))

def is_void(name):
    return name["type"]=="void" and name["num_indirection"]==0
    
def serialize(variable,value):
    
    if is_void(value):
        return ""
        
    result_json="return_"+random_string(value)
    val=copy.deepcopy(value)
    
    name=val["name"]
    num_indirection=val["num_indirection"]
    length=val["length"].copy()
    type=val['type']
        
    result=f"""{variable}=[&]() {{
    json {result_json}=json({{}});
    """
    if num_indirection>0:
        result+=f"""
        if ({name}==NULL){{
            {result_json}["null"]=true;
            return {result_json};
        }}
        """
    if (type=="void" and num_indirection==1):
        val["name"]=f"((char*)({val['name']}))"
        val["type"]="char"
        if not(len(length)>0 and length[-1]!=""): #Doesn't have predefined length
            val["length"].append("null-terminated")
        result+=serialize(result_json,val)
        result+=f"return {result_json};"
    
    elif (type in parsed["external_handles"] and num_indirection<2):
            if num_indirection==0:
                result+=f"return serialize_{type}({name});\n"
            elif num_indirection==1:
                result+=f"return serialize_{type}_p({name});\n"
                
    elif (len(length)>0 and (length[-1]!="")):
        
        temp_iterator=random_string(val)
        val["name"]+=f"[{temp_iterator}]"
        val["num_indirection"]-=1
        val["length"].pop()
        
        if length[-1]=="null-terminated":
            length[-1]=f"strlen({name})+1"
            
        result+=f"""
        {result_json}["members"]={{}};
        for(int {temp_iterator}=0; {temp_iterator} < {length[-1]}; {temp_iterator}++){{
            json temp;
            {serialize('temp',val)}
            {result_json}["members"].push_back(temp);
        }}
        return {result_json};
        """
    elif num_indirection>0:
        val["name"]="*"+name
        val["num_indirection"]-=1
       
        result+=(serialize(result_json,val)+"\n")
        result+=("return "+result_json+";")
    elif type in parsed["basic_types"]:
        val.update(parsed["basic_types"][type])
        result+=serialize(result_json,val)
        result+=("return "+result_json+";")
    else:
        result+=f"return serialize_{type}({name});"
    
    result+="}();"
    return result

def deserialize(variable,value,initialize=False):
    #If const pointer is null, make a new variable that is the same without the const, copy the value of the non-const into it, then deserialize it. At the end, set const equal to the non-const
    #If array pointer is null, malloc it, then continue
    if is_void(value):
        return ""
    
    val=copy.deepcopy(value)

    name=val["name"]
    num_indirection=val["num_indirection"]
    length=val["length"].copy()
    type=val['type']
    
    result="[&]() {\n" #Should assign by reference, not value, so nothing should be returned.
    
    if value.get("const",False) and not(len(length)>0 and (length[-1]!="") and num_indirection==0):
        if initialize:
            temp_variable="temp_"+random_string(value)
            result+=(value["type"]+"*"*value["num_indirection"]+" "+temp_variable+";")
            
            non_const=copy.deepcopy(value)
            non_const["const"]=False
            result+=deserialize(temp_variable,non_const,initialize)
            result+=(variable+"="+temp_variable+";}();")
            return result
        else:
            return ""


    if num_indirection>0:
        result+=f"""
        if ({name}.contains("null")){{
        {variable}=NULL;
        return;
        }}
    """
    if type in parsed["basic_types"]:
        basic_type=parsed["basic_types"][type]
        val["type"]=basic_type["type"]
        val["num_indirection"]+=basic_type["num_indirection"]
        result+=deserialize(variable,val,initialize)
    elif (type=="void" and num_indirection==1):
        val["type"]="char"
        
        if not(len(length)>0 and length[-1]!=""): #Doesn't have predefined length
            val["length"].append("null-terminated")
            
        temp_temp="temp_"+random_string(value);
        result+=f"char* {temp_temp};"
        result+=deserialize(temp_temp,val,initialize=True)
        result+=f"{variable}=(void*){temp_temp};\n"
    elif (type in parsed["external_handles"] and num_indirection<2):
            if num_indirection==0:
                result+=f"{variable}=deserialize_{type}({name});\n"
            elif num_indirection==1:
                result+=f"{variable}=deserialize_{type}_p({name});\n"
    elif (len(length)>0 and (length[-1]!="")):
        if length[-1]=="null-terminated":
            length[-1]=f"""{name}["members"].size()"""
            
        if num_indirection>0: #Dynamic array, so each element of char** would be char*
            if initialize:
                result+=f"""{variable}=({type+("*"*num_indirection)})malloc({length[-1]}*sizeof({type+("*"*(num_indirection-1))}));"""
            val["num_indirection"]-=1 
        
        temp_iterator=random_string(val)
        val["name"]+=f"""["members"][{temp_iterator}]"""
        val["length"].pop()
        
        result+=f"""
        for (int {temp_iterator}=0; {temp_iterator} < {length[-1]}; {temp_iterator}++){{
            {deserialize(variable+f'[{temp_iterator}]',val,initialize)};
        }}
        """
        
    elif num_indirection>0:
        val["num_indirection"]-=1
        if initialize:
            result+=f"""{variable}=({type}{"*"*num_indirection})malloc(sizeof({type}{"*"*(num_indirection-1)}));\n"""
        result+=(deserialize(f"*({variable})",val,initialize)+"\n")

    else:
        result+=(f"""
        #ifndef CLIENT
        {variable}=deserialize_{type}({name});
        #endif
        """ 
        if type in parsed["funcpointers"] #Only the server is deserializing funcpointers (in order to wrap them)
        else
        f"{variable}=deserialize_{type}({name});"
        )
    
    result+="}();"
    
    return result
    
def write(line,header=False):
    if not header:
        lines.append(line)
    else:
        header_lines.append(line)
    
def write_to_file():
    with open(output_basename+".cpp","w+") as f:
        for line in lines:
            f.write(line+"\n")
    
    with open(output_basename+".hpp","w+") as f:
        for line in header_lines:
            f.write(line+"\n")
            
if __name__!="__main__":
    atexit.register(write_to_file)