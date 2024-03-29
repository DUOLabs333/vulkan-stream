The only setup that is supported is with a MacOS computer as the server and a Linux computer as the client (though other setups shouldn't be too hard)

On MacOS, the server must have MoltenVK >= 1.2.7

To compile:
	Simply run `build.sh`, and everything should work.

	Caveats:
		If you do not use Nix on the server, set `VK_LIB_PATH` to the path where the Vulkan loader resides. Make sure that the loader can pick up MoltenVK when being loaded.

		For maximum performance, compile with `DEBUG=0`

To use:
	On the server, simply run `./vulkan_stream`. On the client, simply run `VK_ICD_FILENAMES=./stream_icd.aarch64.json <application>`

	Caveats:
		On both the server and the client, set `STREAM_ADDRESS` and `STREAM_PORT` to values that both the server can connect on, and the client can connect to.