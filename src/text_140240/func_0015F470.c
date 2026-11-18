#include "common.h"

extern s32 D_0035F9C8;
s32 func_0010A9B0(s32);

s16 func_0015F470(void) {
    s32 temp;

    if (D_0035F9C8 != 0) {
        return 1;
    }
    D_0035F9C8 = func_0010A9B0(0);
    if (D_0035F9C8 == 1) {
        temp = 1;
    } else {
        temp = -1;
    }
    return temp;
}
