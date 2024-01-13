#include "debug.hpp"

void debug_printf(const char* pString, ...){
    std::va_list args;
    va_start(args, pString);
    
    #ifndef DISABLE_PRINTF
        vprintf(pString, args);
    #endif
    
    va_end(args);
}