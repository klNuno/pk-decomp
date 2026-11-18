/* profile: opt_nodf */
#include "common.h"

typedef struct unk_func_00294810_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    s32 unk_0C;
} unk_func_00294810_0;

extern unk_func_00294810_0 D_007B8450;

void func_00294810(s32 *arg0) {
    s32 x;
    s32 y;
    s32 z;

    z = arg0[2];
    y = arg0[1];
    x = arg0[0];
    D_007B8450.unk_0C = 0;
    D_007B8450.unk_08 = z / 2147483648.0f;
    D_007B8450.unk_04 = y / 2147483648.0f;
    D_007B8450.unk_00 = x / 2147483648.0f;
}
