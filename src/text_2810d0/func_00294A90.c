/* profile: opt_nodf */
#include "common.h"

typedef struct unk_func_00294A90_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    s32 unk_0C;
} unk_func_00294A90_0;

extern unk_func_00294A90_0 D_007B8450;

void func_00294A90(s32 arg0, s32 arg1, s32 arg2) {
    D_007B8450.unk_0C = 0;
    D_007B8450.unk_00 = arg0 / 127.0f;
    D_007B8450.unk_04 = arg1 / 127.0f;
    D_007B8450.unk_08 = arg2 / 127.0f;
}
