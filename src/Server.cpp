#include <pthread.h>
#include <Server.hpp>
#include <ThreadStruct.hpp>
//Maybe use QT for JSON later
std::this_thread::get_id();
//Use QT Network and QThread (copy sockdescriptor to thread)
//Subclass incomingConnection
//QByteArray QIODevice::readLine
//Use QThread::create
//qint64 QIODevice::write(const char *data)

#ifndef CLIENT
    void handleConnection(qintptr socketDescriptor){
        //Will only be called by the server
        
        auto socket=QTcpSocket();
        socket->setSocketDescriptor(socketDescriptor);
        
        currStruct()->conn=socket;
        
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
            else if (type.rfind("command_",0)==0){
                handle_command(data);
            }
            else if (type.rfind("funcpointer_",0)==0){
                handle_funcpointer(data);
        }
    }
    
    class StreamServer : public QTcpServer
    {
    
    protected:
        std::vector<QThread*> threads;
        void incomingConnection(qintptr socketDescriptor){
                auto thread=QThread::create(handleConnections,socketDescriptor);
                thread->start();
                threads.push_back(thread);
        }
    };
    
    auto startServer(){
        setAddressandPort();
        auto server = std::make_shared<StreamServer>(service, address,port);
        server->Start();
        return server;
    }
    
#else
    bool isConnConnected(){
        //Will only be called by the server
        return currStruct()->conn->IsConnected();
    }
#endif

json readFromConn(){
    auto conn=currStruct()->conn;
    auto stream=currStruct()->conn_ss;
            
    
    while(true){
        std::string word;
        getline(*stream,word);
        if (!stream->eof()){ //Must have gotten a \n
           return json::parse(word);
        }else{
            *stream << conn->Receive(64);
        }
    }
}

void writeToConn(json data){
    currStruct()->conn->Send(data.dump()+"\n");
}