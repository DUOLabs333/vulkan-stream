#include <nlohmann/json_fwd.hpp>

json readfromConn();
void writetoConn(json data);
class StreamServer;
std::shared_ptr<StreamServer> startServer();
