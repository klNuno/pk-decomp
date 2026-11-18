#include "common.h"

f32 int2dB(s32);

extern "C" {
void func_002C82A0(f32 *, f32, f32, f32, f32, f32, f32);
void func_00101928(s32, s32, f32 *);
extern u8 D_007B7B8C[];
extern s32 D_007B83E4[];

void func_002C81A0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    f32 m[16];

    func_002C82A0(m, int2dB(arg0), int2dB(arg1), int2dB(arg2), int2dB(arg3), int2dB(arg4), int2dB(arg5));
    func_00101928(D_007B83E4[0], D_007B83E4[0], m);
    D_007B7B8C[0] = 1;
}
}
