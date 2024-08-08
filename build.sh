export UPDATE_DEPENDENCIES=1
python3 ../tools/build.py parse autogen

CLEAN=1 python3 ../tools/build.py main
python3 ../tools/build.py main
