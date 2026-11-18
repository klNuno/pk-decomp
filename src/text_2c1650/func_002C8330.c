/* profile: opt_nodf */
#include "common.h"

typedef struct unk_func_002C8330_0 {
    f32 unk_00[4][4];
} __attribute__((aligned(16))) unk_func_002C8330_0;

f32 func_001149C0(f32);
f32 func_00114D70(f32);
f32 func_00115110(f32);
f32 func_00115200(f32);
extern u8 D_007B0775[];
extern s32 D_007B0778[];
extern s32 D_007B077C[];
extern u8 D_007B7B8D[];
extern unk_func_002C8330_0 D_007B8560;
extern unk_func_002C8330_0 D_007B85A0;
extern f32 D_007B85E0[];
extern f32 D_007B85E4[];
extern f32 D_007B85E8[];
extern f32 D_007B85EC[];

void func_002C8330(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    f32 temp_f20;
    f32 temp_f27;
    f32 temp_f25;
    s32 temp_s0;
    s32 var_s1;
    unk_func_002C8330_0 sp60;
    unk_func_002C8330_0 spA0;

    arg0 = (3.1415927f * arg0) / 360.0f;
    temp_s0 = D_007B0778[0];
    var_s1 = D_007B077C[0];
    if (D_007B0775[0] == 0 && var_s1 >= 0x1C0) {
        var_s1 >>= 1;
    }
    temp_f20 = func_00115200(arg0);
    temp_f27 = func_001149C0(arg1 * temp_f20);
    sp60.unk_00[0][0] = func_00114D70(temp_f27);
    sp60.unk_00[1][0] = 0;
    sp60.unk_00[2][0] = -func_00115110(temp_f27);
    sp60.unk_00[3][0] = 0;
    sp60.unk_00[0][1] = -sp60.unk_00[0][0];
    sp60.unk_00[1][1] = 0;
    sp60.unk_00[2][1] = sp60.unk_00[2][0];
    sp60.unk_00[3][1] = 0;
    sp60.unk_00[0][2] = 0;
    sp60.unk_00[1][2] = func_00114D70(arg0);
    sp60.unk_00[2][2] = -func_00115110(arg0);
    sp60.unk_00[3][2] = 0;
    sp60.unk_00[0][3] = 0;
    sp60.unk_00[1][3] = -sp60.unk_00[1][2];
    sp60.unk_00[2][3] = sp60.unk_00[2][2];
    sp60.unk_00[3][3] = 0;
    temp_f20 *= 4096.0f;
    arg0 = func_001149C0(temp_f20 / (f32)var_s1);
    temp_f25 = func_001149C0((temp_f20 * arg1) / (f32)temp_s0);
    spA0.unk_00[0][0] = func_00114D70(temp_f25);
    spA0.unk_00[1][0] = 0;
    spA0.unk_00[2][0] = -func_00115110(temp_f25);
    spA0.unk_00[3][0] = 0;
    spA0.unk_00[0][1] = -spA0.unk_00[0][0];
    spA0.unk_00[1][1] = 0;
    spA0.unk_00[2][1] = spA0.unk_00[2][0];
    spA0.unk_00[3][1] = 0;
    spA0.unk_00[0][2] = 0;
    spA0.unk_00[1][2] = func_00114D70(arg0);
    spA0.unk_00[2][2] = -func_00115110(arg0);
    spA0.unk_00[3][2] = 0;
    spA0.unk_00[0][3] = 0;
    spA0.unk_00[1][3] = -spA0.unk_00[1][2];
    spA0.unk_00[2][3] = spA0.unk_00[2][2];
    spA0.unk_00[3][3] = 0;
    D_007B8560 = sp60;
    D_007B85A0 = spA0;
    D_007B85E0[0] = arg2;
    D_007B85E4[0] = arg3;
    D_007B85E8[0] = arg4;
    D_007B85EC[0] = arg5;
    D_007B7B8D[0] = 1;
}
