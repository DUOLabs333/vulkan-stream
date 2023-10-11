#include <Server.hpp>
#include <ThreadStruct.hpp>
#include <Synchronization.hpp>
#include <Commands.hpp>
#include <thread>
#include <nlohmann/json.hpp>

//Maybe use QT for JSON later

bool isConnConnected(){
    //Will only be called by the server
    return currStruct()->conn->state()==QAbstractSocket::ConnectedState;
}

#ifndef CLIENT
    void handleConnection(qintptr socketDescriptor){
        //Will only be called by the server
        
        auto socket=new QTcpSocket();
        socket->setSocketDescriptor(socketDescriptor);
        
        currStruct()->conn=socket;
        while(true){
            if(!isConnConnected()){
                break;
            }
            json data=readFromConn();
            
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
    }
    
    class StreamServer : public QTcpServer
    {
    protected:
        void incomingConnection(qintptr socketDescriptor){
                std::thread thread(handleConnection,socketDescriptor);
                thread.detach();
        }
    };
    
    StreamServer* startServer(){
        setAddressandPort();
        auto server = new StreamServer();
        server->listen(QHostAddress(QString::fromStdString(address)),port);
        return server;
    }
    
#endif


json readFromConn(){
    //Check if line is empty
    auto conn=currStruct()->conn;
            
    while(true){
        auto line=conn->readLine().toStdString();
        if (line.size()>0){
           return json::parse(line);
        }
    }
}

void writeToConn(json data){
    currStruct()->conn->write(QByteArray::fromStdString(data.dump()+"\n"));
}