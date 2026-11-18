/* profile: opt_nodf */
#include "common.h"

typedef struct unk_func_002949D0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    s32 unk_0C;
} unk_func_002949D0_0;

extern unk_func_002949D0_0 D_007B8450;

void func_002949D0(s32 arg0, s32 arg1, s32 arg2) {
    D_007B8450.unk_0C = 0;
    D_007B8450.unk_00 = (f32)arg0 / 2147483648.0f;
    D_007B8450.unk_04 = (f32)arg1 / 2147483648.0f;
    D_007B8450.unk_08 = (f32)arg2 / 2147483648.0f;
}
