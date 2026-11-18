#include "common.h"

void func_002C3570(s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern u8 D_007B0775[];
extern s32 D_007B0778[];
extern s32 D_007B077C[];

static inline void func_002ABFA0_h(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 u0, f32 v0, f32 u1, f32 v1) {
    f32 w;
    f32 h;

    w = D_007B0778[0] * 16;
    u0 *= w;
    u1 *= w;
    if (D_007B0775[0] != 0) {
        h = D_007B077C[0] * 16;
        v0 *= h;
        v1 *= h;
    } else {
        h = D_007B077C[0] * 8;
        v0 *= h;
        v1 *= h;
    }
    func_002C3570(0x4000, 0.0f, 100.0f, 100.0f, 0.0f, arg0, arg1, arg2, arg3, u0, v0, u1, v1);
}

void func_002ABFA0(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    func_002ABFA0_h(arg0, arg1, arg2, arg3, 0.0f, 0.0f, 1.0f, 1.0f);
}
