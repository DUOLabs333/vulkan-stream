declare -a DEPS=( "Vulkan-Headers" "lz4" "shm_open_anon" "asio" "komihash" "Turbo-Base64" "simdjson" "boost" )

for dep in ${DEPS[@]}; do
	python3 ../tools/update.py "$dep=download,build"
done
