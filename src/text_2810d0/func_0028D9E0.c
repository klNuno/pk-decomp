#include "common.h"

f32 int2dB__Fi();
extern f32 D_007B8460[][4];
extern f32 D_007B8464[][4];
extern f32 D_007B8468[][4];

void func_0028D9E0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    D_007B8460[arg0][0] = int2dB__Fi(arg1);
    D_007B8464[arg0][0] = int2dB__Fi(arg2);
    D_007B8468[arg0][0] = int2dB__Fi(arg3);
}
