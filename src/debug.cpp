#include "debug.hpp"

void debug_printf(const char* pString, ...){
    #ifdef DEBUG
        va_list args;
        va_start(args, pString);
        
        vprintf(pString, args);
        va_end(args);
     #endif
}