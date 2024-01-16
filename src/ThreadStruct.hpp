#include <QtNetwork/QTcpServer>
#include <QtNetwork/QTcpSocket>
#include <string>
#include <set>
#include <debug.hpp>

extern std::string address;

extern int port;


typedef struct {
    QTcpSocket* conn;
    int uuid;
} ThreadStruct;
    
ThreadStruct* currStruct();
void setAddressandPort();