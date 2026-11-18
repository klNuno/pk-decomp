/* profile: opt_nodf */
#include "common.h"

typedef struct unk_func_00295DB0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_00295DB0_0;

extern unk_func_00295DB0_0 D_007B8420[];

void func_00295DB0(s32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    f32 temp;

    temp = arg1;
    D_007B8420[arg0].unk_00 = temp / 65535.0f;
    temp = arg2;
    D_007B8420[arg0].unk_04 = temp / 65535.0f;
    temp = arg3;
    D_007B8420[arg0].unk_08 = temp / 65535.0f;
    D_007B8420[arg0].unk_0C = 1.0f;
}
