#include <asio/ip/tcp.hpp>
#include <asio/streambuf.hpp>

#include <string>
#include <set>
#include <debug.hpp>

using tcp = asio::ip::tcp;

extern std::string address;

extern std::string port;

int BUFFER_SIZE=1000000; //1 MB
typedef struct {
    tcp::socket* conn;
    int uuid;
    serializer serializer;
    parser parser;
    char[BUFFER_SIZE] data_buf;
    char[4] size_buf; //Holding the size of the incoming message (32 bits should be good enough for everyone, right?)
    
} ThreadStruct;
    
ThreadStruct* currStruct();
void setAddressandPort();