#include <pthread.h>
#include <nholmann/json_fwd.hpp>


//
void *thread_func(void *session){
    //Will only be called by the server
    currStruct()->conn=(std::shared_ptr< TCPSession >)session;
    
    while(true){
        if(!isConnConnected()){
            break;
        }
        json data=readfromConn();
        
        std::string type=data["type"];
        if (type=="sync_init"){
            handle_sync_init(data);
            //Keep synced_memories (set) here: when sync point (eg, WaitForFences), sync all of them
        }
        else if (type.rfind("Command_",0)==0){
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
            pthread_create(NULL,NULL,thread_func,(void*)session);
            threadStruct(thread_id)->conn=session;
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
    return currStruct()->conn->IsConnected();
}

json readfromConn(){
    auto conn=currStruct()->conn;
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
    currStruct()-conn->Send(data.dump()+"\n");
}      