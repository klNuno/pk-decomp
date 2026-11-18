#include "common.h"

extern s32 D_0035C320[];

static inline s32 func_002F4FA0_hex(s8 *p) {
    s32 v;
    s32 c;
    s32 t;

    v = 0;
    for (;; p++) {
        c = *p;
        switch (D_0035C320[c]) {
        case 0:
            return v;
        case 1:
            v = (c - 0x30) + v * 16;
            break;
        case 2:
            t = (c - 0x41) + v * 16;
            v = t + 10;
            break;
        case 3:
            t = (c - 0x61) + v * 16;
            v = t + 10;
            break;
        }
    }
}

s32 func_002F4FA0(s32 *arg0, s8 *arg1) {
    s32 hi;

    if (arg1[8] != 0x2D || arg1[0xD] != 0x2D || arg1[0x12] != 0) {
        return 0;
    }
    arg0[0] = func_002F4FA0_hex(arg1);
    hi = func_002F4FA0_hex(arg1 + 9);
    arg0[1] = (hi << 16) + func_002F4FA0_hex(arg1 + 0xE);
    return 1;
}
