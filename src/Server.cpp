#include <pthread.h>

auto service = std::make_shared<CppServer::Asio::Service>();

void *thread_func(void *arg){
    //Will only be called by the server
    
    while(thread_to_conn.find(pthread_self())==0){ // Prevent race
    }
    
    while(true){
        if(!isConnConnected()){
            break;
        }
        json data=readfromConn();
        
        std::string type=data["type"];
        if (type=="sync_init"){
            handle_sync_init(data);
        }
        else (if type=="Command"){
            handle_Command(data);
        }
    }
}
std::map<pthread_t, std::shared_ptr< TCPSession >> thread_to_conn;
std::map<std::shared_ptr< TCPSession >, stringstream> conn_to_stream;

class StreamServer : public CppServer::Asio::TCPServer
{

public:
    using CppServer::Asio::TCPServer::TCPServer;

protected:
    void onConnected(std::shared_ptr< TCPSession > &session){
            pthread_t thread_id;
            pthread_create(&thread_id,NULL,thread_func,NULL);
            thread_to_conn[thread_id]=session;
            auto ss=stringstream()
            conn_to_stream[session]=&ss;
    }
};

class StreamClient : public CppServer::Asio::TCPClient
{
public:
    ChatClient(std::shared_ptr<CppServer::Asio::Service> service, const std::string& address, int port)
        : CppServer::Asio::TCPClient(service, address, port)
    {
    }
};

bool isConnConnected(){
    //Will only be called by the server
    return thread_to_conn[pthread_self()]->IsConnected();
}

json readfromConn(){
    pthread_t thread_id=pthread_self();
    
    auto conn=thread_to_conn[thread_id];
    auto stream=conn_to_stream[conn];
            
    
    while(true){
        string word;
        getline(*stream,word);
        if (!(*stream).eof()){ //Must have gotten a \n
           break;
        }else{
            *stream << conn->Recieve(64);
        }
    }
    return json::parse(word);
}

void writetoConn(json data){

    #ifdef CLIENT
        if(thread_to_conn.count(thread_id)==0){
            thread_to_conn[thread_id]=std::make_shared<StreamClient>(service, address, port);
            thread_to_conn[thread_id]->Start();
            service->Start(); //Make sure it's on
        }
    #endif
        
    thread_to_conn[thread_id]->Send(data.dump()+"\n");
}
    

auto startServer(){
    server = std::make_shared<StreamServer>(service, port);
    server->Start();
    return server; 
}        