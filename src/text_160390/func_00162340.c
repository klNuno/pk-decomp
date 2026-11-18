#include "common.h"

extern u8 *D_0035FB04;

void func_00162340(s32 arg0) {
    *(s32 *)(D_0035FB04 + 0x1D4) = arg0 ? 3 : 0;
}
