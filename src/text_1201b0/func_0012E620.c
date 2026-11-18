#include "common.h"

extern u8 D_0035F8B8;
extern u8 D_0035F8BC;
extern u8 D_0035F8C0;
extern f32 D_0035F8C8;

void func_0012E620(u8 arg0, u8 arg1, u8 arg2, f32 arg3) {
    if (arg0 > 2 && arg0 < 0) return;
    D_0035F8B8 = arg0;
    D_0035F8BC = (s8)arg1 - 1;
    D_0035F8C8 = arg3;
    D_0035F8C0 = (s8)arg2 - 1;
}
