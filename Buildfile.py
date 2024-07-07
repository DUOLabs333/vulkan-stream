from sys import platform as PLATFORM
import subprocess
import os

#Proto-make (only recompile if changed), but I don't want to have to deal with setting up make/cmake

VK_LIB_PATH=os.path.expanduser(os.environ.get("VK_LIB_PATH","~/.nix-profile/lib"))

class main(BuildBase):
    SRC_FILES=["autogen/*","src/*", get_dep_path("shm_open_anon", "shm_open_anon.c"), get_dep_path("simdjson", "src/simdjson.cpp")]
    INCLUDE_PATHS=["autogen","src", get_dep_path("shm_open_anon", ""), get_dep_path("Vulkan-Headers", "include"), get_dep_path("asio", "asio/include"), get_dep_path("boost",""), get_dep_path("lz4","lib"), get_dep_path("komnihash", ""), get_dep_path("Turbo-Base64", ""), get_dep_path("simdjson", "include")]

    SHARED_LIBS_PATHS=[VK_LIB_PATH]

    STATIC_LIBS=[get_dep_path("lz4", "lib/liblz4.a"), get_dep_path("Turbo-Base64", "libtb64.a")]

    FLAGS = os.environ["VK_HEADER_FLAGS"].split(" ")


    def __init__(self):
        self.SHARED_LIBS=(["vulkan"] if not CLIENT else (["xcb","X11","xcb-image"] if PLATFORM=="linux" else []))

        if CLIENT:
            self.OUTPUT_TYPE=LIB
            self.OUTPUT_NAME="vulkan_stream.so"
        else:
            self.OUTPUT_TYPE=EXE
            self.OUTPUT_NAME="vulkan_stream"

def run_file(path):
    exec(open(path,"r").read(), {"__name__": "__main__"})

class autogen:

    def build(cls):
        os.chdir("autogen")
        for file in os.listdir(os.getcwd()):
            if not file.endswith(".py"):
                continue

            run_file(file)

class parse:
    def build(cls):
        os.chdir("parse")
        run_file("parse.py")

