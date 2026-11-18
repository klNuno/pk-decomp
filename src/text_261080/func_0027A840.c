#include "common.h"

typedef struct unk_func_0027A840_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    u32 unk_10;
    u32 unk_14;
} unk_func_0027A840_0;

typedef struct unk_func_0027A840_1 {
    s32 unk_00;
    u32 unk_04;
    s32 unk_08;
    u8 pad_0C[0xC];
    s32 unk_18;
    u8 pad_1C[0x24];
    s32 unk_40;
    u8 pad_44[0x4];
    s64 unk_48;
    s32 unk_50;
    s32 unk_54;
} unk_func_0027A840_1;

void func_0027A6A0(unk_func_0027A840_1 *);
s32 func_0031A320(unk_func_0027A840_0 *);

s32 func_0027A840(unk_func_0027A840_1 *arg0, s32 arg1, u32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    unk_func_0027A840_0 sp20;

    arg0->unk_00 = arg1;
    arg0->unk_04 = (arg2 & 0x0FFFFFFF) | 0x20000000;
    arg0->unk_08 = arg3;
    arg0->unk_18 = arg3 << 11;
    arg0->unk_50 = arg4;
    arg0->unk_54 = arg5;
    sp20.unk_08 = 1;
    sp20.unk_04 = 1;
    arg0->unk_40 = func_0031A320(&sp20);
    func_0027A6A0(arg0);
    arg0->unk_48 = 0;
    return 1;
}
