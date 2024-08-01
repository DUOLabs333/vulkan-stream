The only setup that is supported is with a MacOS computer as the server and a Linux computer as the client (though other setups shouldn't be too hard t adjust the program for)

On MacOS, the server must have MoltenVK >= 1.2.7, and vulkan-loader >= 1.3.275

To compile:
	1. Clone my tools repo (https://github.com/DUOLabs333/tools) and asio_c (https://github.com/DUOLabs333/asio_c) in the same parent directory as this repo
	2. Run `build.sh`.
	3. Profit

	
	Caveats:
		If you do not use Nix on the server, and the loader is in a non-standard location, set `VK_LIB_PATH` to the path where the Vulkan loader resides. Make sure that the loader can pick up MoltenVK when being loaded.

		For maximum performance, compile with `DEBUG=0`

To use:
	On the server, simply run `./vulkan_stream`. On the client, simply run `VK_ICD_FILENAMES=./stream_icd.aarch64.json <application>`

	Caveats:
		On both the server and the client, set `STREAM_ADDRESS` and `STREAM_PORT` to values that both the server can connect on, and the client can connect to.
