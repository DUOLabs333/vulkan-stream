#include <asio/ip/tcp.hpp>
#include <asio/streambuf.hpp>

#include <string>
#include <set>
#include <debug.hpp>

using tcp = asio::ip::tcp;

extern std::string address;

extern std::string port;


typedef struct {
    tcp::socket* conn;
    int uuid;
    asio::streambuf buf;
    std::istream* is;
    
} ThreadStruct;
    
ThreadStruct* currStruct();
void setAddressandPort();