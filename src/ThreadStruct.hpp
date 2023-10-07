#include <memory>
#include <string>
#include <set>
#include <QTcpServer>
extern std::string address;

extern int port;


typedef struct {
    std::set<uintptr_t>* mem_to_sync; //On client, mem_to_sync is set(vkmemory); on server, it's set(void*)
    
    QTcpSocket* conn;
    
    std::stringstream* conn_ss;
} ThreadStruct;
    
ThreadStruct* currStruct();
void setAddressandPort();