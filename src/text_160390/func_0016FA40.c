#include "common.h"

extern s32 D_0035FBDC;
extern s32 D_0035FBE0;
extern s32 D_0035FBF0;
extern s32 D_0036EEE0[];
extern s32 D_0036EEE4[];

void func_0016FA40(void) {
    D_0035FBDC ^= 1;
    D_0035FBE0 = D_0036EEE0[D_0035FBDC * 2];
    D_0035FBF0 = D_0036EEE4[D_0035FBDC * 2];
}
