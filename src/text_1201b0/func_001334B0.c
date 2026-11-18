#include "common.h"

extern u32 D_0035F910;
extern u32 D_00364F50[];
extern u32 D_00364F54[];
extern u32 D_00365020[];
extern u32 *D_00365028[];

s32 func_001334B0(s32 arg0, s32 arg1, s32 arg2) {
    u32 *p;
    u32 temp;
    s32 ret;
    p = &D_00364F54[arg0];
    temp = *p;
    ret = arg1 + ((arg2 + 1 - arg1) * D_00365028[0][temp]) / (D_00365020[0] + 1);
    *p = temp + 1;
    *p += D_0035F910 % 255;
    if (*p >= D_00364F50[0]) {
        *p = 0;
    }
    return ret;
}
