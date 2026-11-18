#include "common.h"

typedef struct unk_func_0013CB20_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_0013CB20_0;

typedef struct unk_func_0013CB20_1 {
    u8 pad_00[0x6C];
    unk_func_0013CB20_0 unk_6C;
} unk_func_0013CB20_1;

unk_func_0013CB20_1 *func_00138800();
unk_func_0013CB20_0 *func_00155EE0(void *);
f32 func_001E60E0(f32);
void func_00155DA0(void *, unk_func_0013CB20_0 *, unk_func_0013CB20_0 *);
void func_0014ADD0(u8 *, f32);

void func_0013CB20(u8 *arg0, f32 arg1) {
    u8 *p;
    unk_func_0013CB20_0 *n;
    unk_func_0013CB20_0 *a;
    unk_func_0013CB20_0 *b;
    unk_func_0013CB20_0 d;
    unk_func_0013CB20_0 m;
    f32 dot;
    f32 len;
    f32 inv;

    n = &func_00138800()->unk_6C;
    if (0.0f == n->unk_00 && 0.0f == n->unk_04 && 0.0f == n->unk_08) {
        return;
    }
    p = arg0 + 0xE0;
    a = func_00155EE0(p);
    b = func_00155EE0(arg0 + 0x80);
    d.unk_00 = a->unk_00 - b->unk_00;
    d.unk_04 = a->unk_04 - b->unk_04;
    d.unk_08 = a->unk_08 - b->unk_08;
    dot = d.unk_00 * n->unk_00 + d.unk_04 * n->unk_04 + d.unk_08 * n->unk_08;
    len = func_001E60E0(n->unk_00 * n->unk_00 + n->unk_04 * n->unk_04 + n->unk_08 * n->unk_08);
    if (0.0f != len) {
        inv = 1.0f / len;
        m.unk_00 = inv * n->unk_00;
        m.unk_04 = inv * n->unk_04;
        m.unk_08 = inv * n->unk_08;
    } else {
        m = *n;
    }
    m.unk_00 = dot * m.unk_00;
    m.unk_04 = dot * m.unk_04;
    m.unk_08 = dot * m.unk_08;
    d.unk_00 = d.unk_00 - m.unk_00;
    d.unk_04 = d.unk_04 - m.unk_04;
    d.unk_08 = d.unk_08 - m.unk_08;
    func_00155DA0(p, b, &d);
    func_0014ADD0(arg0, arg1);
}
