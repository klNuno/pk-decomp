#include "common.h"

extern u8 D_007B0775[];
extern s32 D_007B0778[];
extern s32 D_007B077C[];

void func_002C27B0(s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32);

void func_002AB940(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8) {
    f32 x;
    f32 y;

    arg1 = 100.0f - arg1;
    arg3 = 100.0f - arg3;
    x = D_007B0778[0] * 16;
    arg4 *= x;
    arg6 *= x;
    if (D_007B0775[0]) {
        y = D_007B077C[0] * 16;
        arg5 *= y;
        arg7 *= y;
    } else {
        y = D_007B077C[0] * 8;
        arg5 *= y;
        arg7 *= y;
    }
    func_002C27B0(0x4000, 1, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}
