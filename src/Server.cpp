/*
When you recieve a new connection, make a new thread to handle it. Keep thread id. When session is later disconnected, exit thread
sendtoConn/readfromConn looks up the conn in thread_to_conn (pthread_self and pthread_create)

Keep reading until new line
*/
#include <pthread.h>


void thread_func(){
    while(true){
        std::string data_string=readfromConn();
        json data=parseJSON(data_string);
        
        std::string type=data["type"];
        if type==
std::<pthread_t, std::shared_ptr< TCPSession >> thread_to_conn;

class StreamServer : public CppServer::Asio::TCPServer
{

public:
    using CppServer::Asio::TCPServer::TCPServer;

protected:
    void onConnected(std::shared_ptr< TCPSession > &session){
            pthread_t thread_id;