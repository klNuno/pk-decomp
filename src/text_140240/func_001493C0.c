#include "common.h"

typedef struct unk_func_001493C0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001493C0_0;

void func_00155DA0();
unk_func_001493C0_0 *func_00155EE0();

void func_001493C0(u8 *arg0, s32 arg1) {
    unk_func_001493C0_0 d;
    u8 *p;
    unk_func_001493C0_0 *a;
    unk_func_001493C0_0 *b;
    f32 temp;

    p = arg0 + 0xE0;
    a = func_00155EE0(arg0 + 0x80);
    b = func_00155EE0(p);
    temp = 1.0f / (f32)arg1;
    d.unk_00 = b->unk_00 - a->unk_00;
    d.unk_04 = b->unk_04 - a->unk_04;
    d.unk_08 = b->unk_08 - a->unk_08;
    d.unk_00 = temp * d.unk_00;
    d.unk_04 = temp * d.unk_04;
    d.unk_08 = temp * d.unk_08;
    func_00155DA0(p, a, &d);
    *(f32 *)(arg0 + 0x3C) = temp * *(f32 *)(arg0 + 0x3C);
    *(f32 *)(arg0 + 0x40) = temp * *(f32 *)(arg0 + 0x40);
    *(f32 *)(arg0 + 0x44) = temp * *(f32 *)(arg0 + 0x44);
}
