#include "common.h"

typedef unsigned int unk_u128 __attribute__((mode(TI)));

void func_002C9610(unk_u128 *arg0, s32 arg1, s32 arg2) {
    unk_u128 *dst;
    unk_u128 *src;

    dst = arg0 + arg2;
    src = arg0 + arg1;
    while (arg1 > 0) {
        if (arg1 & 1) {
            dst[1] = src[2];
            dst[2] = src[1];
        } else {
            dst[2] = src[2];
            dst[1] = src[1];
        }
        arg1--;
        dst[0] = src[0];
        src--;
        dst -= 3;
    }
}
