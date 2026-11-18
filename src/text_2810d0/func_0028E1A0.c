#include "common.h"

f32 int2dB__Fi(s32);
extern f32 D_007B8460[];
extern f32 D_007B8464[];
extern f32 D_007B8468[];
extern f32 D_007B846C[];

void func_0028E1A0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    D_007B8460[0] = int2dB__Fi(arg0);
    D_007B8464[0] = int2dB__Fi(arg1);
    D_007B8468[0] = int2dB__Fi(arg2);
    D_007B846C[0] = int2dB__Fi(arg3);
}
