#include "common.h"

typedef struct unk_func_002600B0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_002600B0_0;

typedef struct unk_func_002600B0_1 {
    u8 pad_00[0x40];
    f32 unk_40;
    f32 unk_44;
    u8 pad_48[0x14];
    f32 unk_5C;
    f32 unk_60;
    u8 pad_64[0x10];
    f32 unk_74;
} unk_func_002600B0_1;

s32 rand(void);
unk_func_002600B0_1 *func_00266E40(s32, unk_func_002600B0_0 *, unk_func_002600B0_0 *, s32, f32, f32, f32);

void func_002600B0(unk_func_002600B0_0 *arg0, s32 arg1, s32 arg2) {
    unk_func_002600B0_0 pos;
    unk_func_002600B0_0 vel;
    f32 scale;
    s32 i;
    unk_func_002600B0_1 *p;

    arg0->unk_00 += -8.0f + 10.0f * (f32)rand() / 2147483648.0f;
    arg0->unk_04 += -2.0f + 10.0f * (f32)rand() / 2147483648.0f;
    for (i = 0; i < 1; i++) {
        {
            f32 *d = (f32 *)&pos;
            f32 *src = (f32 *)arg0;
            s32 j;
            for (j = 0; j < 3; j++) {
                d[j] = src[j];
            }
        }
        pos.unk_08 += -0.2f + 0.4f * (f32)rand() / 2147483648.0f;
        vel.unk_00 = 0.3f * (f32)rand() / 2147483648.0f;
        vel.unk_04 = 16.0f + 4.0f * (f32)rand() / 2147483648.0f;
        vel.unk_08 = 0.9f + (f32)rand() / 2147483648.0f;
        scale = 0.2f + 0.2f * (f32)rand() / 2147483648.0f;
        p = func_00266E40(0x4016, &pos, &vel, arg2, 0.5f, scale, scale);
        if (p != 0) {
            p->unk_74 = 200.0f;
            p->unk_60 = 1.0f;
            p->unk_5C = 50.0f + 80.0f * (f32)rand() / 2147483648.0f;
            p->unk_40 = vel.unk_00;
            p->unk_44 = 20.0f;
        }
    }
}
