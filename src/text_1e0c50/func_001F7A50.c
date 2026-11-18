/* profile: o0 */
#include "common.h"

typedef struct unk_func_001F7A50_1 {
    u8 pad_00[0x60];
    s32 unk_60;
    u8 pad_64[0x10];
    u8 unk_74;
    u8 unk_75;
    u8 unk_76;
} unk_func_001F7A50_1;

typedef struct unk_func_001F7A50_2 {
    u8 pad_00[0x68];
    s32 unk_68;
    u8 pad_6C[6];
    u16 unk_72;
} unk_func_001F7A50_2;

typedef struct unk_func_001F7A50_0 {
    u8 pad_00[8];
    unk_func_001F7A50_1 *unk_08;
    unk_func_001F7A50_2 *unk_0C;
    u8 pad_10[0x1C];
    u8 unk_2C[0x48];
    s8 unk_74;
} unk_func_001F7A50_0;

s32 func_00203630();
void func_001F6E30();
void func_001F7660();
void func_001F7A40();

void func_001F7A50(unk_func_001F7A50_0 *arg0) {
    if ((arg0->unk_08->unk_74 & 2) || (arg0->unk_0C->unk_72 & 0x2000) || arg0->unk_0C->unk_68 == 0) {
        return;
    }
    if (func_00203630(arg0, arg0->unk_2C) != 0) {
        arg0->unk_08->unk_75 &= ~8;
    }
    if (arg0->unk_08->unk_75 & 8) {
        func_001F6E30(arg0);
        return;
    }
    if (arg0->unk_74 && !(arg0->unk_0C->unk_72 & 4)) {
        func_001F7660(arg0);
    } else {
        arg0->unk_08->unk_76 = 0;
    }
    if (arg0->unk_08->unk_60 == 1) {
        func_001F7A40(arg0, arg0->unk_2C);
    }
}
