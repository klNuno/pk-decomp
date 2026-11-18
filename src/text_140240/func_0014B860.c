#include "common.h"

typedef struct unk_func_0014B860_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_0014B860_0;

typedef struct unk_func_0014B860_2 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_0014B860_2;

typedef struct unk_func_0014B860_1 {
    f32 unk_00;
    u8 pad_04[0xC];
    unk_func_0014B860_0 unk_10;
    u8 pad_1C[0x12];
    s16 unk_2E;
    f32 unk_30;
    f32 unk_34;
    f32 unk_38;
    unk_func_0014B860_0 unk_3C;
    unk_func_0014B860_0 unk_48;
    f32 unk_54;
    u8 pad_58[0x10];
} unk_func_0014B860_1;

f32 func_001E60E0(f32);

void func_0014B860(s32 arg0, unk_func_0014B860_1 *arg1, f32 *arg2) {
    f32 sp70[3];
    s32 i;
    unk_func_0014B860_1 *p;
    f32 len;
    f32 inv;
    f32 t;
    u8 alive;
    f32 y;
    f32 x;
    f32 z;
    s32 *src;

    for (i = 0; i < arg0; i++) {
        p = &arg1[i];
        alive = p->unk_2E != 0x63;
        if (alive) {
            t = p->unk_00;
            if (t > 1.0f) {
                p->unk_00 = 1.0f;
                y = p->unk_3C.unk_04;
                x = p->unk_3C.unk_00;
                z = p->unk_3C.unk_08;
                len = func_001E60E0(x * x + y * y + z * z);
                if (len != 0.0f) {
                    inv = 1.0f / len;
                    sp70[0] = inv * p->unk_3C.unk_00;
                    sp70[1] = inv * p->unk_3C.unk_04;
                    sp70[2] = inv * p->unk_3C.unk_08;
                } else {
                    *(unk_func_0014B860_0 *)sp70 = p->unk_3C;
                }
                sp70[0] = p->unk_54 * sp70[0];
                sp70[1] = p->unk_54 * sp70[1];
                sp70[2] = p->unk_54 * sp70[2];
                sp70[0] = sp70[0] + p->unk_48.unk_00;
                sp70[1] = sp70[1] + p->unk_48.unk_04;
                sp70[2] = sp70[2] + p->unk_48.unk_08;
                src = (s32 *)sp70;
                ((s32 *)&p->unk_10)[0] = src[0];
                ((s32 *)&p->unk_10)[1] = src[1];
                ((s32 *)&p->unk_10)[2] = src[2];
            } else if (!(t < 0.0f)) {
                p->unk_30 = (1.0f - t) * arg2[0];
                p->unk_34 = (1.0f - p->unk_00) * arg2[1];
                p->unk_38 = (1.0f - p->unk_00) * arg2[2];
            }
        }
    }
}
