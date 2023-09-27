#Clone vulkan-headers

declare -a REPOS=( "KhronosGroup/Vulkan-Headers" "nlohmann/json" "okdshin/PicoSHA2" "chronoxor/CppServer" "lassik/shm_open_anon" )

for repo in ${REPOS[@]}; do
	folder= $(echo $repo |  awk -F/ '{print $NF}' )
	rm -rf external/$folder
	git clone --depth=1 https://github.com/$repo external/$folder
	if [ "$folder" == "CppServer" ]; then
		echo "Cloning the dependencies of CppServer"
		cd external/$folder
		gil clone --depth=1
		gil link
		cd build
		./unix.sh
	fi
done

echo "Building CppServer"
(cd external/CppServer; cd build; ./unix.sh)
