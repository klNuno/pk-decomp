#include "common.h"

typedef struct {
    s32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    u8 pad_10[0x4];
    s32 unk_14;
    s8 unk_18;
    u8 unk_19;
    u8 unk_1A;
    u8 pad_1B[0x6];
    u8 unk_21;
    u8 pad_22[0x6];
} unk_func_00273CF0_0;

extern s32 D_00360300;
extern unk_func_00273CF0_0 D_007A5F10[];

void func_00273CF0(s32 arg0, s32 arg1, f32 *arg2, s32 arg3, f32 arg4) {
    unk_func_00273CF0_0 *p;

    if (arg1 < 0xC8) {
        p = &D_007A5F10[arg1];
        p->unk_00 = arg3;
        p->unk_14 = D_00360300;
        p->unk_18 = arg4;
        p->unk_19 = 0;
        p->unk_04 = arg2[0];
        p->unk_08 = arg2[1];
        p->unk_0C = arg2[2];
        p->unk_1A = 0;
        if (arg0 == 0) {
            p->unk_21 = 0xFF;
        } else {
            p->unk_21 = arg0 - 1;
        }
    }
}
