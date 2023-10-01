#include <nlohmann/json.hpp>

// for convenience
using json = nlohmann::json;

json readFromConn();
void writeToConn(json data);
class StreamServer;
std::shared_ptr<StreamServer> startServer();
