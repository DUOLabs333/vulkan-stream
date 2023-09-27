extern std::string address;

extern int port;

extern std::shared_ptr<CppServer::Asio::Service> service;



struct {
    *std::set<uintptr_t> mem_to_sync; //On client, mem_to_sync is set(vkmemory); on server, it's set(void*)
    
    #ifdef CLIENT
    std::shared_ptr<CppServer::Asio::TCPClient> conn;
    #else
    std::shared_ptr<CppServer::Asio::TCPSession> conn;
} ThreadStruct;
    
ThreadStruct currStruct();