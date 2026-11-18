#include "common.h"

typedef struct unk_func_00273360_0 {
    s32 unk_00;
    u8 pad_04[0x14];
    u8 unk_18;
    u8 unk_19;
    u8 unk_1A;
    u8 pad_1B[0x1];
    s32 unk_1C;
    u8 pad_20[0x2];
    u8 unk_22;
    u8 unk_23;
    u8 pad_24[0x4];
} unk_func_00273360_0;

extern unk_func_00273360_0 D_007A5F10[];
extern u8 D_0035F5D4;
extern s32 D_00360300;

void func_00273360(void) {
    s32 i;
    s32 off;
    unk_func_00273360_0 *p;
    u8 *a;
    u8 *b;

    for (i = 0, off = 0; i < 200; i++, off += 0x28) {
        p = (unk_func_00273360_0 *)((u8 *)D_007A5F10 + off);
        p->unk_00 = 0;
        a = &p->unk_22;
        b = &p->unk_23;
        p->unk_18 = 0;
        p->unk_19 = 0;
        p->unk_1A = 0;
        p->unk_1C = 0;
        p->unk_22 = 0;
        p->unk_23 = 0;
        if (D_0035F5D4 != 0) {
            *a = 0;
            *b = 0;
        }
    }
    D_0035F5D4 = 0;
    D_00360300 = -1;
}
