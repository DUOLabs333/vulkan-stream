#include <nlohmann/json_fwd.hpp>
#include <debug.hpp>

// for convenience
using json = nlohmann::json;

json readFromConn();
void writeToConn(json& data);
class StreamServer;
StreamServer* startServer();
