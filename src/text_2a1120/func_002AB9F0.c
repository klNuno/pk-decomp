/* profile: opt */
#include "common.h"

void func_002C3570(s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern u8 D_007B0775[];
extern s32 D_007B0778[];
extern s32 D_007B077C[];

void func_002AB9F0(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, f32 arg10, f32 arg11) {
    f32 sx;
    f32 sy;

    arg1 = 100.0f - arg1;
    arg3 = 100.0f - arg3;
    sx = D_007B0778[0] * 16;
    arg8 *= sx;
    arg10 *= sx;
    if (D_007B0775[0] != 0) {
        sy = D_007B077C[0] * 16;
        arg9 *= sy;
        arg11 *= sy;
    } else {
        sy = D_007B077C[0] * 8;
        arg9 *= sy;
        arg11 *= sy;
    }
    func_002C3570(0x4000, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
}
