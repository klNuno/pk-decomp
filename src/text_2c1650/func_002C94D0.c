#include "common.h"

typedef unsigned int unk_u128 __attribute__((mode(TI)));

void func_002C94D0(unk_u128 *arg0, s32 arg1, s32 arg2) {
    s32 i;
    unk_u128 *src;
    unk_u128 *dst;

    dst = arg0 + arg2;
    src = arg0 + arg1;
    for (i = 0; i < arg1; i++) {
        dst[2] = src[2];
        dst[1] = src[1];
        src--;
        dst[0] = arg0[0];
        dst -= 3;
    }
}
