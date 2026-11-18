#include "common.h"

typedef struct {
    s32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    u8 pad_10[4];
    s32 unk_14;
    s8 unk_18;
    u8 unk_19;
    u8 unk_1A;
    u8 pad_1B[6];
    u8 unk_21;
    u8 pad_22[2];
    u8 unk_24;
    u8 pad_25[3];
} unk_func_00273C00_0;

extern s32 D_00360300;
extern unk_func_00273C00_0 D_007A5F10[];

void func_00273C00(s32 arg0, f32 *arg1, s32 arg2, f32 arg3) {
    unk_func_00273C00_0 *p;

    if (arg0 < 200) {
        p = &D_007A5F10[arg0];
        p->unk_00 = arg2;
        p->unk_14 = D_00360300;
        p->unk_18 = arg3;
        p->unk_24 = 1;
        p->unk_19 = 0;
        p->unk_04 = arg1[0];
        p->unk_08 = arg1[1];
        p->unk_0C = arg1[2];
        p->unk_1A = 0;
        p->unk_21 = 0xFF;
    }
}
