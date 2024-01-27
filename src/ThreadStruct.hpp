#include <asio/ip/tcp.hpp>
#include <asio/streambuf.hpp>
#include <array>
#include <string>
#include <set>
#include <debug.hpp>

using tcp = asio::ip::tcp;

extern std::string address;

extern std::string port;

const int BUFFER_SIZE=1000000; //1 MB
typedef struct {
    tcp::socket* conn;
    int uuid;
    boost::json::serializer serializer = {{.allow_infinity_and_nan=true}};
    boost::json::stream_parser parser = {{}, {.max_depth=100, .allow_invalid_utf8=true,.allow_infinity_and_nan=true}};
    char data_buf[BUFFER_SIZE];
    std::array<uint8_t, 4> size_buf; //Holding the size of the incoming message (32 bits should be good enough for everyone, right?)
    
} ThreadStruct;
    
ThreadStruct* currStruct();
void setAddressandPort();