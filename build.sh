if [[ "$OSTYPE" == "darwin"* ]]; then
	export VK_HEADER_FLAGS="-DVK_USE_PLATFORM_METAL_EXT"
else
	export VK_HEADER_FLAGS="-DVK_USE_PLATFORM_XCB_KHR -DVK_USE_PLATFORM_XLIB_KHR"
fi

export UPDATE_DEPENDENCIES=1
python3 ../tools/build.py parse autogen

CLEAN=1 python3 ../tools/build.py main
python3 ../tools/build.py main
