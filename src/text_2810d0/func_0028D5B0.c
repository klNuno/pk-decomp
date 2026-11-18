#include "common.h"

extern f32 D_007B8460[];
extern f32 D_007B8464[];
extern f32 D_007B8468[];
extern f32 D_007B846C[];

void func_0028D5B0(s32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    D_007B8460[arg0 * 4] = arg1;
    D_007B8464[arg0 * 4] = arg2;
    D_007B8468[arg0 * 4] = arg3;
    D_007B846C[arg0 * 4] = arg4;
}
