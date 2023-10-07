#include <QtNetwork/QTcpServer>
#include <memory>
#include <string>
#include <set>
extern std::string address;

extern int port;


typedef struct {
    std::set<uintptr_t>* mem_to_sync; //On client, mem_to_sync is set(vkmemory); on server, it's set(void*)
    QTcpSocket* conn;
    
} ThreadStruct;
    
ThreadStruct* currStruct();
void setAddressandPort();