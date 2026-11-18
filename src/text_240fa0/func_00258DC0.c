#include "common.h"

typedef struct unk_func_00258DC0_0 {
    f32 unk_00[3];
    f32 unk_0C[3];
    f32 unk_18[3];
    f32 unk_24;
    f32 unk_28;
    f32 unk_2C;
    f32 unk_30;
    f32 unk_34;
    f32 unk_38;
    s32 unk_3C;
    s32 unk_40;
    s32 unk_44;
    f32 unk_48;
    u32 unk_4C;
} unk_func_00258DC0_0;

s32 func_001273A8(f32);
extern s32 D_00360288;
extern u32 D_0036028C;
extern unk_func_00258DC0_0 D_0062C5C0[];

void func_00258DC0(f32 *arg0, f32 *arg1, f32 *arg2, s32 arg3, s32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, f32 arg10, f32 arg11) {
    unk_func_00258DC0_0 *p;
    s32 i;
    u32 min;
    s32 idx;

    if (D_00360288 == 200) {
        idx = 0;
        min = D_0062C5C0[0].unk_4C;
        for (i = 0; i < 200; i++) {
            if (D_0062C5C0[i].unk_4C < min) {
                min = D_0062C5C0[i].unk_4C;
                idx = i;
            }
        }
        p = &D_0062C5C0[idx];
    } else {
        p = &D_0062C5C0[D_00360288++];
    }
    p->unk_4C = D_0036028C;
    p->unk_00[0] = arg0[0];
    p->unk_0C[0] = arg1[0];
    p->unk_18[0] = arg2[0];
    p->unk_00[1] = arg0[1];
    p->unk_0C[1] = arg1[1];
    p->unk_18[1] = arg2[1];
    p->unk_00[2] = arg0[2];
    p->unk_0C[2] = arg1[2];
    p->unk_18[2] = arg2[2];
    p->unk_24 = arg5;
    p->unk_28 = arg6;
    p->unk_2C = arg7;
    p->unk_30 = arg8;
    p->unk_34 = arg9;
    p->unk_38 = arg10;
    p->unk_48 = 255.0f;
    p->unk_3C = arg3;
    p->unk_40 = func_001273A8(arg11);
    p->unk_44 = 0;
    if (arg4 & 2) {
        p->unk_44 |= 2;
    }
}
