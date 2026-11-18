/* profile: opt_nodf */
#include "common.h"

typedef struct unk_func_002958A0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002958A0_0;

extern unk_func_002958A0_0 D_007B8420[];

void func_002958A0(s32 arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4) {
    D_007B8420[arg0].unk_00 = arg1 / 4294967296.0f;
    D_007B8420[arg0].unk_04 = arg2 / 4294967296.0f;
    D_007B8420[arg0].unk_08 = arg3 / 4294967296.0f;
    D_007B8420[arg0].unk_0C = arg4 / 4294967296.0f;
}
