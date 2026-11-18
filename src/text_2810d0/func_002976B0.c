/* profile: opt_nodf */
#include "common.h"

typedef struct unk_func_002976B0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002976B0_0;

extern unk_func_002976B0_0 D_007B8420;

void func_002976B0(s32 arg0, s32 arg1, s32 arg2) {
    D_007B8420.unk_00 = arg0 / 127.0f;
    D_007B8420.unk_04 = arg1 / 127.0f;
    D_007B8420.unk_08 = arg2 / 127.0f;
    D_007B8420.unk_0C = 1.0f;
}
