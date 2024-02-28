#include <asio/ip/tcp.hpp>
#include <asio/streambuf.hpp>
#include <array>
#include <string>
#include <set>
#include <debug.hpp>
#include <boost/json.hpp>
#include <simdjson.h>

using tcp = asio::ip::tcp;

extern std::string address;

extern std::string port;

const int BUFFER_SIZE=1000000; //1 MB
typedef struct {
    tcp::socket* conn;
    boost::json::parser parser = {{}, {.max_depth=180,.allow_invalid_utf8=true,.allow_infinity_and_nan=true}};
    simdjson::ondemand::parser simdparser;
    int uuid;
    asio::streambuf buf;
    std::istream* is;
    std::array<uint8_t, 8> size_buf;
    
} ThreadStruct;
    
ThreadStruct* currStruct();
void setAddressandPort();
void deleteCurrStruct();