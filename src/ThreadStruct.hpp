#include <QtNetwork/QTcpServer>
#include <QtNetwork/QTcpSocket>
#include <string>
#include <set>

extern std::string address;

extern int port;


typedef struct {
    QTcpSocket* conn;
    
} ThreadStruct;
    
ThreadStruct* currStruct();
void setAddressandPort();