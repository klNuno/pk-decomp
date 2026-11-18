#include "common.h"

typedef struct unk_func_001398C0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001398C0_0;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_001398C0_1;

typedef struct {
    u8 pad_00[8];
    u32 unk_08;
    u32 unk_0C;
    u8 pad_10[0x2C];
    s32 unk_3C;
    s32 unk_40;
    s32 unk_44;
    u8 pad_48[0x24];
    unk_func_001398C0_1 unk_6C;
    u8 pad_78[0x68];
    u8 unk_E0[4];
} unk_func_001398C0_2;

unk_func_001398C0_0 *func_00155EE0(void *);

void func_001398C0(unk_func_001398C0_2 *arg0, unk_func_001398C0_0 *arg1) {
    unk_func_001398C0_0 r;
    unk_func_001398C0_0 *b;
    s32 *p;

    if (((arg0->unk_0C & 0x80) ? 1 : 0) == 0) {
        arg0->unk_08 = arg0->unk_08 |= 0x80000000;
        b = func_00155EE0(arg0->unk_E0);
        r.unk_00 = arg1->unk_00 - b->unk_00;
        r.unk_04 = arg1->unk_04 - b->unk_04;
        r.unk_08 = arg1->unk_08 - b->unk_08;
        p = (s32 *)&r;
        arg0->unk_6C.unk_00 = p[0];
        arg0->unk_6C.unk_04 = p[1];
        arg0->unk_6C.unk_08 = p[2];
        arg0->unk_3C = 0;
        arg0->unk_40 = 0;
        arg0->unk_44 = 0;
    }
}
