#include "common.h"

typedef struct unk_func_001492C0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001492C0_0;

typedef struct unk_func_001492C0_1 {
    u8 pad_00[0x3C];
    f32 unk_3C;
    f32 unk_40;
    f32 unk_44;
    u8 pad_48[0x38];
    u8 unk_80[0x60];
    u8 unk_E0[0x10];
} unk_func_001492C0_1;

unk_func_001492C0_0 *func_00155EE0(void *);
void func_00155D20(void *, unk_func_001492C0_0 *, unk_func_001492C0_0 *);

void func_001492C0(unk_func_001492C0_1 *arg0, s32 arg1) {
    unk_func_001492C0_0 sp50;
    void *p;
    unk_func_001492C0_0 *a;
    unk_func_001492C0_0 *b;

    p = arg0->unk_80;
    a = func_00155EE0(p);
    b = func_00155EE0(arg0->unk_E0);
    sp50.unk_00 = b->unk_00 - a->unk_00;
    sp50.unk_04 = b->unk_04 - a->unk_04;
    sp50.unk_08 = b->unk_08 - a->unk_08;
    sp50.unk_00 = (f32)arg1 * sp50.unk_00;
    sp50.unk_04 = (f32)arg1 * sp50.unk_04;
    sp50.unk_08 = (f32)arg1 * sp50.unk_08;
    func_00155D20(p, b, &sp50);
    arg0->unk_3C = (f32)arg1 * arg0->unk_3C;
    arg0->unk_40 = (f32)arg1 * arg0->unk_40;
    arg0->unk_44 = (f32)arg1 * arg0->unk_44;
}
