#include "common.h"

u8 *func_003050B0(u8 *arg0, u32 *arg1) {
    u32 b0 = arg0[0];
    u32 b1;
    u32 b2;

    if (!(b0 & 1)) {
        *arg1 = b0 >> 1;
        return arg0 + 1;
    }
    b1 = arg0[1];
    if (!(b0 & 2)) {
        *arg1 = ((b0 >> 2) << 8) | b1;
        return arg0 + 2;
    }
    b2 = arg0[2];
    if (!(b0 & 4)) {
        *arg1 = b2 | (((b0 >> 3) << 16) | (b1 << 8));
        return arg0 + 3;
    }
    *arg1 = arg0[3] | ((b2 << 8) | (((b0 >> 3) << 24) | (b1 << 16)));
    return arg0 + 4;
}
