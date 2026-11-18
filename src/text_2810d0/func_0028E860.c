/* profile: opt_nodf */
#include "common.h"

typedef struct unk_func_0028E860_0 {
    f32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_0028E860_0;

extern unk_func_0028E860_0 D_007B8460;

void func_0028E860(s32 arg0) {
    f32 temp = arg0;

    D_007B8460.unk_04 = 0;
    D_007B8460.unk_00 = temp / 32767.0f;
}
