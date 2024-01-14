#include "debug.hpp"

void debug_printf(const char* pString, ...){
    va_list args;
    va_start(args, pString);
    
    #ifdef DEBUG
        vprintf(pString, args);
    #endif
    
    va_end(args);
}