#include <debug.hpp>
#include <boost/json/fwd.hpp>
#include "../autogen/Serialization.hpp"

boost::json::object readFromConn();
void readFromConn(Sync& sync);
void writeToConn(boost::json::object& json);
void writeToConn(Sync& sync);

void startServer();
