Clone vulkan-headers

declare -a REPOS=("KhronosGroup/Vulkan-Headers" "nlohmann/json" "okdshin/PicoSHA2" "chronoxor/CppServer" )
for repo in ${REPOS[@]}; do
	folder= $(echo $repo |  awk -F/ '{print $NF}' )
	rm -rf external/$folder
	git clone --depth=1 https://github.com/$repo external/$folder
	if [ "$folder" == "CppServer" ]; then
		cd external/$folder
		gil clone --depth=1
		gil link
		cd build
		./unix.sh
	fi
