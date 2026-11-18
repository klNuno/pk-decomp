#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_Q_0;

typedef struct {
    u8 pad_00[0x40];
    f32 unk_40;
    f32 unk_44;
    f32 unk_48;
    u8 pad_4C[0x4];
    s32 unk_50;
    u8 pad_54[0x20];
    f32 unk_74;
} unk_Q_1;

int rand(void);
unk_Q_1 *func_00266E40(s32, unk_Q_0 *, unk_Q_0 *, s32, f32, f32, f32);
extern s32 D_00360220;

void func_00260350(unk_Q_0 *arg0, s32 arg1, s32 arg2) {
    unk_Q_0 sp60;
    unk_Q_0 sp70;
    f32 temp_f20;
    s32 i;
    s32 j;
    unk_Q_1 *temp_v0;

    for (i = 0; i < 2; i++) {
        {
            f32 *p = (f32 *)&sp60;
            for (j = 0; j < 3; j++) {
                p[j] = ((f32 *)arg0)[j];
            }
        }
        sp60.unk_00 += -20.0f + (40.0f * rand()) / 2147483648.0f;
        sp60.unk_04 += -20.0f + (40.0f * rand()) / 2147483648.0f;
        sp60.unk_08 += 2.2f + (4.3999996f * rand()) / 2147483648.0f;
        sp70.unk_00 = -0.5f;
        sp70.unk_04 = 0.5f;
        sp70.unk_08 = 0.0f;
        temp_f20 = 25.0f + (20.0f * rand()) / 2147483648.0f;
        temp_v0 = func_00266E40(0x17, &sp60, &sp70, arg2, 0.5f, temp_f20, 25.0f + (20.0f * rand()) / 2147483648.0f);
        if (temp_v0 != NULL) {
            temp_v0->unk_50 = D_00360220;
            temp_v0->unk_40 = 120.0f + (80.0f * rand()) / 2147483648.0f;
            temp_v0->unk_44 = 1.0f;
            temp_v0->unk_48 = 50.0f + (100.0f * rand()) / 2147483648.0f;
            temp_v0->unk_74 = 5.0f;
        }
    }
}
