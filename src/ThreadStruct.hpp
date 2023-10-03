#include <memory>
#include <string>
#include <set>
#include <server/asio/tcp_server.h>
#include <server/asio/tcp_client.h>
extern std::string address;

extern int port;

extern std::shared_ptr<CppServer::Asio::Service> service;



typedef struct {
    std::set<uintptr_t>* mem_to_sync; //On client, mem_to_sync is set(vkmemory); on server, it's set(void*)
    
    #ifdef CLIENT
    std::shared_ptr<CppServer::Asio::TCPClient> conn;
    #else
    std::shared_ptr<CppServer::Asio::TCPSession> conn;
    #endif
    
    std::stringstream* conn_ss;
} ThreadStruct;
    
ThreadStruct* currStruct();
void setAddressandPort();