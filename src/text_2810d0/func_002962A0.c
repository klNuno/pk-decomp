/* profile: opt_nodf */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002962A0_0;

extern unk_func_002962A0_0 D_007B8420[];

void func_002962A0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    D_007B8420[arg0].unk_00 = (f32)arg1 / 127.0f;
    D_007B8420[arg0].unk_04 = (f32)arg2 / 127.0f;
    D_007B8420[arg0].unk_08 = (f32)arg3 / 127.0f;
    D_007B8420[arg0].unk_0C = 1.0f;
}
