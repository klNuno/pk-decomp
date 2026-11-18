#include "common.h"

typedef struct unk_func_002C1BB0_0 {
    u32 unk_00 : 15;
    u32 unk_01 : 1;
} unk_func_002C1BB0_0;

typedef struct unk_func_002C1BB0_1 {
    s32 unk_00;
    u8 *unk_04;
    unk_func_002C1BB0_0 *unk_08;
    u8 unk_0C;
} unk_func_002C1BB0_1;

typedef struct unk_func_002C1BB0_2 {
    s16 unk_00;
    u8 unk_02;
    u8 unk_03;
    u8 pad_04[4];
    s32 unk_08;
    s32 unk_0C;
} unk_func_002C1BB0_2;

void func_002C1EE0();
void *memcpy(void *, const void *, s64);
extern u8 D_007B09E0[];
extern u8 D_007B09F0[];
extern unk_func_002C1BB0_1 D_007B0E40;
extern unk_func_002C1BB0_2 *D_007B8EF4[];

void func_002C1BB0(void) {
    s64 count;
    unk_func_002C1BB0_2 *p;

    if (D_007B0E40.unk_00 > 1) {
        D_007B0E40.unk_08->unk_01 = 1;
        count = D_007B0E40.unk_00;
        p = D_007B8EF4[0];
        p->unk_00 = count;
        p->unk_02 = 0;
        p->unk_03 = 0x10;
        p->unk_08 = 0x11000000;
        p->unk_0C = count | 0x50000000;
        memcpy(p + 1, D_007B09E0, count * 16);
        D_007B8EF4[0] += count + 1;
    }
    D_007B0E40.unk_0C = 0;
    D_007B0E40.unk_00 = 1;
    D_007B0E40.unk_04 = D_007B09F0;
    D_007B0E40.unk_08 = (unk_func_002C1BB0_0 *)D_007B09E0;
    func_002C1EE0(D_007B0E40.unk_08, 1, 0, 0, 0, 0, 0, 0);
}
