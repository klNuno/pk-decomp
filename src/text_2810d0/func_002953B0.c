/* profile: opt_nodf */
#include "common.h"

typedef struct unk_func_002953B0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002953B0_0;

typedef struct unk_func_002953B0_1 {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
} unk_func_002953B0_1;

extern unk_func_002953B0_0 D_007B8420[];

void func_002953B0(s32 arg0, unk_func_002953B0_1 *arg1) {
    f32 r;
    f32 g;
    f32 b;

    b = arg1->unk_02 / 255.0f;
    g = arg1->unk_01 / 255.0f;
    r = arg1->unk_00 / 255.0f;

    D_007B8420[arg0].unk_00 = r;
    D_007B8420[arg0].unk_04 = g;
    D_007B8420[arg0].unk_08 = b;
    D_007B8420[arg0].unk_0C = 1.0f;
}
