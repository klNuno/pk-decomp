#include "common.h"

typedef struct unk_func_00179570_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00179570_0;

typedef struct unk_func_00179570_1 {
    u8 pad_00[0x20];
    f32 unk_20;
    f32 unk_24;
    f32 unk_28;
} unk_func_00179570_1;

void func_00155810(unk_func_00179570_0 *, s32, unk_func_00179570_0 *);
f32 func_001E60E0(f32);
extern unk_func_00179570_0 D_0036EE20;
extern unk_func_00179570_0 D_0036EE30;

static inline void func_00179570_cross(unk_func_00179570_0 *d, unk_func_00179570_0 *a, unk_func_00179570_0 *b) {
    d->unk_00 = a->unk_04 * b->unk_08 - a->unk_08 * b->unk_04;
    d->unk_04 = a->unk_08 * b->unk_00 - a->unk_00 * b->unk_08;
    d->unk_08 = a->unk_00 * b->unk_04 - a->unk_04 * b->unk_00;
}

static inline void func_00179570_norm(unk_func_00179570_0 *d, unk_func_00179570_0 *s) {
    f32 len;
    f32 inv;
    f32 z;
    f32 y;

    y = s->unk_04;
    z = s->unk_08;

    len = func_001E60E0(s->unk_00 * s->unk_00 + y * y + z * z);
    if (len != 0.0f) {
        inv = 1.0f / len;
        d->unk_00 = inv * s->unk_00;
        d->unk_04 = inv * y;
        d->unk_08 = inv * z;
    } else {
        *d = *s;
    }
}

void func_00179570(s32 arg0, unk_func_00179570_1 *arg1, f32 arg2, f32 arg3) {
    unk_func_00179570_0 sp30;
    unk_func_00179570_0 sp40;
    unk_func_00179570_0 sp50;

    sp30.unk_00 = 0.0f;
    sp30.unk_04 = 0.0f;
    sp30.unk_08 = -1.0f;
    func_00155810(&sp40, arg0, &sp30);
    D_0036EE20.unk_00 = arg1->unk_20;
    D_0036EE20.unk_04 = arg1->unk_24;
    D_0036EE20.unk_08 = arg1->unk_28;
    func_00179570_cross(&sp50, &D_0036EE20, &sp40);
    func_00179570_norm(&D_0036EE30, &sp50);
    D_0036EE30.unk_00 *= arg2;
    D_0036EE30.unk_04 *= arg2;
    D_0036EE30.unk_08 *= arg2;
    D_0036EE20.unk_00 *= arg3;
    D_0036EE20.unk_04 *= arg3;
    D_0036EE20.unk_08 *= arg3;
}
