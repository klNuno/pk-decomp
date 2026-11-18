#include "common.h"

typedef struct unk_func_0026FCC0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    u8 pad_0C[0x4];
    f32 unk_10;
    f32 unk_14;
    f32 unk_18;
    u8 pad_1C[0x8];
    s32 unk_24;
    u8 pad_28[0x8];
    f32 unk_30;
    f32 unk_34;
    f32 unk_38;
    u8 pad_3C[0x4];
} unk_func_0026FCC0_0;

typedef struct unk_func_0026FCC0_1 {
    s32 unk_00;
    u8 pad_04[0x6C];
    s32 unk_70;
    u32 unk_74;
} unk_func_0026FCC0_1;

void func_0011B418(char *);
unk_func_0026FCC0_0 *func_00267EB0(s32);
extern char D_0034EB50[];
extern f32 D_00360240;

void func_0026FCC0(unk_func_0026FCC0_1 *arg0) {
    unk_func_0026FCC0_0 *p;
    u32 i;
    f32 dt;
    f32 g;

    if (arg0->unk_70 == 0) {
        arg0->unk_74 = 0;
        arg0->unk_00 |= 1;
        return;
    }
    p = func_00267EB0(arg0->unk_70);
    if (p == NULL) {
        func_0011B418(D_0034EB50);
        return;
    }
    dt = D_00360240;
    g = 2.0f * (9.81f * dt);
    for (i = 0; i < arg0->unk_74; p++, i++) {
        if (!(p->unk_24 & 1)) {
            p->unk_18 -= g;
            p->unk_30 = p->unk_00;
            p->unk_34 = p->unk_04;
            p->unk_38 = p->unk_08;
            p->unk_30 -= p->unk_10 * dt;
            p->unk_34 -= p->unk_14 * dt;
            p->unk_38 -= p->unk_18 * dt;
            p->unk_00 += p->unk_10 * dt;
            p->unk_04 += p->unk_14 * dt;
            p->unk_08 += p->unk_18 * dt;
        }
    }
}
