/* profile: opt_nodf */
#include "common.h"

typedef struct unk_func_00295FB0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_00295FB0_0;

extern unk_func_00295FB0_0 D_007B8420[];

void func_00295FB0(s32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    D_007B8420[arg0].unk_00 = arg1 / 255.0f;
    D_007B8420[arg0].unk_04 = arg2 / 255.0f;
    D_007B8420[arg0].unk_08 = arg3 / 255.0f;
    D_007B8420[arg0].unk_0C = 1.0f;
}
