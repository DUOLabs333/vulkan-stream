#include <debug.hpp>

boost::json::object readFromConn();
void writeToConn(boost::json::object&);
void readFromConn(Sync&);
void writeToConn(Sync&);

void startServer();
