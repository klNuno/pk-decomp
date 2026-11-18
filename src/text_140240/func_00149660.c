#include "common.h"

s32 func_001BFB20();

s32 func_00149660(void) {
    return (func_001BFB20() & 0x80000000) == 0x80000000;
}
