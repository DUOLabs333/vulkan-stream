if [[ "$OSTYPE" == "darwin"* ]]; then
	export VK_HEADER_FLAGS="-DVK_USE_PLATFORM_METAL_EXT"
else
	export VK_HEADER_FLAGS="-DVK_USE_PLATFORM_XCB_KHR -DVK_USE_PLATFORM_XLIB_KHR"
	export CLIENT=1
fi

(cd parse && python3 parse.py)
(cd autogen && ls *.py | xargs -L 1 python3)

CLEAN=1 python3 build.py
python3 build.py
