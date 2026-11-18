#include "common.h"

typedef struct unk_func_00149940_0 {
    u8 pad_00[0x2E];
    s16 unk_2E;
    f32 unk_30;
    f32 unk_34;
    f32 unk_38;
    u8 pad_3C[0x2C];
} unk_func_00149940_0;

#define ABS(x) ((x) > 0.0f ? (x) : -(x))

void func_00149940(s32 arg0, unk_func_00149940_0 *arg1) {
    s32 i;
    u8 r;
    unk_func_00149940_0 *p;

    for (i = 0; i < arg0; i++) {
        p = &arg1[i];
        if ((u8)(p->unk_2E != 0x63)) {
            r = (ABS(p->unk_30) < 0.001f && ABS(p->unk_34) < 0.001f) && ABS(p->unk_38) < 0.001f;
            if (r) {
                p->unk_2E = 0x63;
            }
        }
    }
}
