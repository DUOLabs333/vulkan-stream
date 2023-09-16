import sys
from pprint import pprint
sys.path.append("_vendor")

import xmltodict

vk=xmltodict.parse(open("../Vulkan-Headers/registry/vk.xml").read())["registry"]
handles={}
structs={}
aliases={}
for item in vk["types"]["type"]:
    type=item.get("@category","")
    if type=="struct":
        if "@alias" in item:
            if item["@alias"] not in structs:
                aliases[item["@alias"]]=item["@name"]
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

print(aliases)