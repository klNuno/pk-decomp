#include "common.h"

typedef struct unk_func_0012DCC0_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    u8 pad_20[4];
    s32 unk_24;
    s32 unk_28;
    s32 unk_2C;
    u32 unk_30;
    s32 unk_34;
    s32 unk_38;
    u8 pad_3C[0xC];
    f32 unk_48;
    u8 pad_4C[4];
    s32 unk_50;
    u8 pad_54[0x29];
    u8 unk_7D;
    u8 pad_7E[2];
} unk_func_0012DCC0_0;

extern s32 D_0035F8A8;

unk_func_0012DCC0_0 *HMU_fn_p_vMalloc(s32, s32);
s32 func_0012C610(void);
void func_00155C70(s32);

unk_func_0012DCC0_0 *func_0012DCC0(s32 arg0) {
    unk_func_0012DCC0_0 *buf;
    unk_func_0012DCC0_0 *p;
    s32 i;

    buf = HMU_fn_p_vMalloc(arg0 * sizeof(unk_func_0012DCC0_0), 0);
    p = buf;
    for (i = 0; i < arg0; i++, p++) {
        p->unk_08 = 0;
        p->unk_0C = 0;
        p->unk_10 = 0;
        p->unk_14 = 0;
        p->unk_18 = 0;
        p->unk_1C = 0;
        p->unk_00 = 1;
        p->unk_04 = 0;
        p->unk_34 = 0;
        p->unk_38 = 0;
        p->unk_2C = -1;
        p->unk_24 = func_0012C610();
        func_00155C70(p->unk_24);
        if (p->unk_28 != -1) {
            if (D_0035F8A8 != 0) {
                p->unk_28 = D_0035F8A8 - 1;
            } else {
                p->unk_28 = D_0035F8A8 - 2;
            }
        }
        p->unk_48 = 255.0f;
        p->unk_30 &= ~0x20000;
        p->unk_50 = 0;
        p->unk_7D = 0;
    }
    return buf;
}
