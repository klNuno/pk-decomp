/* profile: o0_301_p */
#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_001B5470_0;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001B5470_1;

typedef struct {
    u8 pad_00[0x68];
    s32 unk_68;
} unk_func_001B5470_2;

typedef struct {
    u8 pad_00[0xC];
    unk_func_001B5470_2 *unk_0C;
    u8 pad_10[0x68];
    unk_func_001B5470_1 unk_78[8];
    unk_func_001B5470_0 unk_D8[8];
    f32 unk_138[8];
} unk_func_001B5470_3;

extern "C" {
unk_func_001B5470_0 *func_00155EE0(s32);
s32 func_001979C0(s32);

void func_001B5470(unk_func_001B5470_3 *arg0);
}

void func_001B5470(unk_func_001B5470_3 *arg0) {
    u32 i;
    unk_func_001B5470_0 *p;
    f32 f;

    for (i = 0; i < 8; i++) {
        if (arg0->unk_138[i]) {
            break;
        }
    }
    if (i < 8) {
        return;
    }
    p = func_00155EE0(func_001979C0(arg0->unk_0C->unk_68));
    f = 0.03f;
    for (i = 0; i < 8; i++) {
        arg0->unk_138[i] = f;
        arg0->unk_78[i].unk_08 = arg0->unk_78[i].unk_04 = arg0->unk_78[i].unk_00 = 0.0f;
        ((s32 *)&arg0->unk_D8[i])[0] = p->unk_00;
        ((s32 *)&arg0->unk_D8[i])[1] = p->unk_04;
        ((s32 *)&arg0->unk_D8[i])[2] = p->unk_08;
    }
}
