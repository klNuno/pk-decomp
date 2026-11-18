#include "common.h"

extern u8 *D_0035F968;
u8 func_0015A7F0(s32);

u8 func_00158130(u8 *arg0) {
    u8 temp;

    D_0035F968 = arg0 + 0xC;
    if (func_0015A7F0(*(s32 *)D_0035F968) == 1) {
        temp = 1;
    } else {
        temp = 0;
    }
    D_0035F968 += 0xC;
    return temp;
}
