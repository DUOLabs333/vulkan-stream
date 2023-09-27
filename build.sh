(cd autogen && PYTHONPATH=. python *.py)
indent autogen/*.cpp

COMPILE_FLAGS="autogen/*.cpp src/*.cpp -I autogen -I src -I external/json/single_include -I external/PicoSHA2 -I external/CppServer/include -L external/CppServer/bin -lcppserver"

g++ -DCLIENT=1 -shared -o vulkan_stream.so $COMPILE_FLAGS

g++ -o vulkan_stream $COMPILE_FLAGS
