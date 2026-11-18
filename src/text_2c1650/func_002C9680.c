#include "common.h"

typedef struct {
    u32 unk_00[4];
} __attribute__((aligned(16))) unk_func_002C9680_0;

void func_002C9680(unk_func_002C9680_0 *arg0, s32 arg1, s32 arg2) {
    unk_func_002C9680_0 *dst;
    unk_func_002C9680_0 *src;

    dst = arg0 + arg2;
    src = arg0 + arg1;
    while (arg1 > 0) {
        arg1--;
        dst[2] = src[2];
        dst[1] = src[1];
        dst[0] = src[0];
        src--;
        dst -= 3;
    }
}
