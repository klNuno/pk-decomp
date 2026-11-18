#include "common.h"

typedef struct unk_func_001396A0_0 {
    u8 pad_00[0xC];
    s32 unk_0C;
    u8 pad_10[0x2C];
    s32 unk_3C;
    s32 unk_40;
    s32 unk_44;
} unk_func_001396A0_0;

typedef struct unk_func_001396A0_1 {
    u8 pad_00[0x24];
    s32 unk_24;
} unk_func_001396A0_1;

u8 *func_001387B0(unk_func_001396A0_0 *);
void func_00155FA0(void *, s32);
unk_func_001396A0_0 *func_001B8580(unk_func_001396A0_1 *);

static inline s32 func_001396A0_inl(unk_func_001396A0_0 *arg0) {
    return (arg0->unk_0C & 4) ? 1 : 0;
}

void func_001396A0(unk_func_001396A0_1 *arg0) {
    unk_func_001396A0_0 *p;
    s32 temp;
    u8 *a;
    u8 *b;

    p = func_001B8580(arg0);
    if (p != NULL) {
        temp = arg0->unk_24;
        func_00155FA0((u8 *)p + 0xE0, temp);
        func_00155FA0((u8 *)p + 0x80, temp);
        p->unk_3C = 0;
        p->unk_40 = 0;
        p->unk_44 = 0;
        p->unk_0C = (p->unk_0C |= 0x1000000);
        if (func_001396A0_inl(p)) {
            a = func_001387B0(p) + 0xB0;
            b = func_001387B0(p) + 0x110;
            func_00155FA0(a, temp);
            func_00155FA0(b, temp);
        }
    }
}
