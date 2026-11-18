/* profile: opt_nodf */
#include "common.h"

typedef struct unk_func_002951A0_0 {
    u16 unk_00;
    u16 unk_02;
    u16 unk_04;
} unk_func_002951A0_0;

extern f32 D_007B8420[][4];

void func_002951A0(s32 arg0, unk_func_002951A0_0 *arg1) {
    f32 r;
    f32 g;
    f32 b;
    b = arg1->unk_04 / 65535.0f;
    g = arg1->unk_02 / 65535.0f;
    r = arg1->unk_00 / 65535.0f;
    D_007B8420[arg0][0] = r;
    D_007B8420[arg0][1] = g;
    D_007B8420[arg0][2] = b;
    D_007B8420[arg0][3] = 1.0f;
}
