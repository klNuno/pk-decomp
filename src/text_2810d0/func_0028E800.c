#include "common.h"

f32 int2dB__Fi(s32);
extern f32 D_007B8460[];
extern s32 D_007B8464[];

void func_0028E800(s32 arg0) {
    D_007B8460[0] = int2dB__Fi(arg0);
    D_007B8464[0] = 0;
}
