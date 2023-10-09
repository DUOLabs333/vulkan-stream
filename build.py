import os
import sys
import subprocess
import itertools
import glob

CLIENT=os.environ.get("CLIENT","0")
#Proto-make (only recompile if changed), but don't want to deal with setting up make/cmake

#Rewrite to use glob, and substitue into CPP_FILES, which will then be flattened
CPP_FILES=["autogen/*","src/*"]
INCLUDE_PATHS=["autogen","src", "external/json/single_include", "external/PicoSHA2", "external/shm_open_anon", "external/qtbase/build/include", "external/Vulkan-Headers/include"]
FLAGS=[f"-DCLIENT={CLIENT}","-std=c++20", "-Wfatal-errors","-fPIC"]+os.environ["VK_HEADER_FLAGS"].split(" ")
STATIC_LIBS=["external/qtbase/build/lib/*"]

def rreplace(s,old,new,maxreplace):
    return new.join(s.rsplit(old, maxreplace))

INCLUDE_PATHS=list(itertools.chain.from_iterable([['-I', x] for x in INCLUDE_PATHS]))

for i, e in enumerate(CPP_FILES):
   CPP_FILES[i]=[_ for _ in glob.glob(e) if _.endswith(".cpp")]
CPP_FILES=list(itertools.chain.from_iterable(CPP_FILES))

for i, e in enumerate(STATIC_LIBS):
   STATIC_LIBS[i]=[_ for _ in glob.glob(e) if _.endswith(".a")]
STATIC_LIBS=list(itertools.chain.from_iterable(STATIC_LIBS))

for file in CPP_FILES:
    object_file=rreplace(file,".cpp",".o",1)
    if os.path.exists(object_file):
        if os.environ.get("CLEAN","0")=="1":
            os.remove(object_file)
            continue
        if int(os.path.getmtime(object_file))==int(os.path.getmtime(file)):
            continue
            
    modified_time=int(os.path.getmtime(file))
    subprocess.run(["g++"]+FLAGS+["-o",object_file,"-c",file]+INCLUDE_PATHS)
    os.utime(object_file, (modified_time, modified_time))

if os.environ.get("CLEAN","0")=="0":
    subprocess.run(["g++"]+(["-shared","-o","vulkan_stream.so"] if CLIENT=="1" else ["-o","vulkan_stream"])+[rreplace(_,".cpp",".o",1) for _ in CPP_FILES]+STATIC_LIBS)

