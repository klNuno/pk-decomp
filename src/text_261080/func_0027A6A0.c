#include "common.h"

typedef struct {
    s64 unk_00;
    s64 unk_08;
    s32 unk_10;
    s32 unk_14;
} unk_Q_0;

typedef struct {
    u32 unk_00;
    u64 *unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    u8 pad_18[0x2C];
    s32 unk_44;
    u8 pad_48[0x8];
    unk_Q_0 *unk_50;
    s32 unk_54;
    s32 unk_58;
    s32 unk_5C;
} unk_Q_1;

void func_003224C0();
void func_00322508();

s32 func_0027A6A0(unk_Q_1 *arg0) {
    s32 i;

    arg0->unk_0C = 0;
    arg0->unk_10 = 0;
    arg0->unk_14 = 0;
    arg0->unk_44 = 1;
    arg0->unk_58 = 0;
    arg0->unk_5C = 0;
    for (i = 0; i < arg0->unk_54; i++) {
        arg0->unk_50[i].unk_00 = -1;
        arg0->unk_50[i].unk_08 = -1;
        arg0->unk_50[i].unk_10 = 0;
        arg0->unk_50[i].unk_14 = 0;
    }
    for (i = 0; i < arg0->unk_08; i++) {
        arg0->unk_04[i * 2] = (((u64)(arg0->unk_00 + i * 0x800) & 0xFFFFFFF) << 32) | 0x30000080;
    }
    arg0->unk_04[i * 2] = ((u64)(u32)((u32)arg0->unk_04 & 0xFFFFFFF) << 32) | 0x20000000;
    *(volatile s32 *)0x1000B420 = 0;
    *(volatile s32 *)0x1000B410 = arg0->unk_00 & 0xFFFFFFF;
    *(volatile s32 *)0x1000B430 = (u32)arg0->unk_04 & 0xFFFFFFF;
    func_003224C0();
    *(volatile s32 *)0x1000F590 = *(volatile s32 *)0x1000F520 | 0x10000;
    *(volatile s32 *)0x1000B400 = 5;
    *(volatile s32 *)0x1000F590 = *(volatile s32 *)0x1000F520 & ~0x10000;
    func_00322508();
    return 1;
}
