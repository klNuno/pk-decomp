/* profile: opt */
#include "common.h"

typedef struct unk_func_0025FEC0_0 {
    f32 unk_00[3];
} unk_func_0025FEC0_0;

typedef struct unk_func_0025FEC0_1 {
    u8 pad_00[0x40];
    f32 unk_40;
    f32 unk_44;
    u8 pad_48[8];
    s32 unk_50;
    u8 pad_54[0xC];
    f32 unk_60;
} unk_func_0025FEC0_1;

s32 rand(void);
unk_func_0025FEC0_1 *func_00266E40(s32, unk_func_0025FEC0_0 *, unk_func_0025FEC0_0 *, s32, f32, f32, f32);
extern s32 D_00360220;

void func_0025FEC0(unk_func_0025FEC0_0 *arg0, s32 arg1, s32 arg2) {
    unk_func_0025FEC0_0 pos;
    unk_func_0025FEC0_0 vel;
    unk_func_0025FEC0_1 *temp;
    f32 f;
    s32 i;

    for (i = 0; i < 4; i++) {
        {
            f32 *dst = pos.unk_00;
            f32 *src = arg0->unk_00;
            s32 j;
            for (j = 0; j < 3; j++) {
                dst[j] = src[j];
            }
        }
        pos.unk_00[2] += -0.2f + 0.4f * (f32)rand() / 2147483648.0f;
        vel.unk_00[0] = 0.3f * (f32)rand() / 2147483648.0f;
        vel.unk_00[1] = 16.0f + 4.0f * (f32)rand() / 2147483648.0f;
        vel.unk_00[2] = 0.4f + 0.20000002f * (f32)rand() / 2147483648.0f;
        f = 0.4f + 0.20000002f * (f32)rand() / 2147483648.0f;
        temp = func_00266E40(0x1014, &pos, &vel, arg2, 0.5f, f, f);
        if (temp != NULL) {
            temp->unk_60 = 0.5f;
            temp->unk_50 = D_00360220;
            temp->unk_40 = vel.unk_00[0];
            temp->unk_44 = 40.0f;
        }
    }
}
