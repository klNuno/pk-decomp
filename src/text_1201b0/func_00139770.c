#include "common.h"

typedef struct unk_func_00139770_0 {
    u8 pad_00[0xC];
    s32 unk_0C;
    u8 pad_10[0x2C];
    f32 unk_3C;
    f32 unk_40;
    f32 unk_44;
    u8 pad_48[0x24];
    f32 unk_6C;
    f32 unk_70;
    f32 unk_74;
    u8 pad_78[8];
    u8 unk_80[0x60];
    u8 unk_E0[4];
} unk_func_00139770_0;

typedef struct unk_func_00139770_1 {
    u8 pad_00[0x24];
    void *unk_24;
} unk_func_00139770_1;

typedef struct unk_func_00139770_2 {
    u8 pad_00[0x60];
    f32 unk_60;
    f32 unk_64;
    f32 unk_68;
} unk_func_00139770_2;

void func_00155E80(void *, s32);
void func_00155FA0(void *, void *);
u8 *func_001387B0(unk_func_00139770_0 *);
unk_func_00139770_2 *func_00138800(unk_func_00139770_0 *);
void func_0012D940(unk_func_00139770_1 *);

void func_00139770(unk_func_00139770_0 *arg0, unk_func_00139770_1 *arg1, s32 arg2) {
    void *a;
    void *b;

    if ((arg0->unk_0C & 0x80) ? 1 : 0) {
        func_00155E80(arg1->unk_24, arg2);
    } else {
        b = arg1->unk_24;
        a = arg0->unk_E0;
        func_00155E80(a, arg2);
        func_00155E80(arg0->unk_80, arg2);
        func_00155FA0(b, a);
        if ((arg0->unk_0C & 4) ? 1 : 0) {
            u8 *c = func_001387B0(arg0) + 0xB0;
            u8 *d = func_001387B0(arg0) + 0x110;
            func_00155E80(c, arg2);
            func_00155E80(d, arg2);
        }
    }
    func_0012D940(arg1);
    arg0->unk_3C = 0.0f;
    arg0->unk_40 = 0.0f;
    arg0->unk_44 = 0.0f;
    arg0->unk_6C = 0.0f;
    arg0->unk_70 = 0.0f;
    arg0->unk_74 = 0.0f;
    if ((arg0->unk_0C & 2) ? 1 : 0) {
        func_00138800(arg0)->unk_68 = func_00138800(arg0)->unk_64 = func_00138800(arg0)->unk_60 = 0.0f;
    }
}
