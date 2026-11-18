/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_0027F340_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_0027F340_0;

typedef struct unk_func_0027F340_1 {
    u8 pad_00[0x9];
    u8 unk_09;
    u8 unk_0A;
    u8 unk_0B;
    u8 unk_0C;
    u8 unk_0D;
    u16 unk_0E;
    u8 pad_10[0x68];
} unk_func_0027F340_1;

typedef struct unk_func_0027F340_2 {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
    u8 unk_04;
    u8 unk_05;
    u8 unk_06;
    u8 unk_07;
} unk_func_0027F340_2;

extern unk_func_0027F340_0 D_003313F0[];

s32 func_0027BE90();
void *memset(void *, s32, s32);
s32 func_0027F260();
s32 func_0027F2F0();
void func_00284C58();

s32 func_0027F340(s32 arg0, s32 arg1, s32 *arg2) {
    unk_func_0027F340_1 sp20;
    unk_func_0027F340_2 sp98;
    s32 ret;

    if (arg2 == 0) {
        return -1;
    }
    ret = func_0027BE90(D_003313F0[arg0].unk_00, D_003313F0[arg0].unk_04, arg1, &sp20);
    if (ret == 0) {
        return 0;
    }
    memset(&sp98, 0, 8);
    sp98.unk_01 = (u8)func_0027F260(sp20.unk_09);
    sp98.unk_02 = (u8)func_0027F260(sp20.unk_0A);
    sp98.unk_03 = (u8)func_0027F260(sp20.unk_0B);
    sp98.unk_05 = (u8)func_0027F260(sp20.unk_0C);
    sp98.unk_06 = (u8)func_0027F260(sp20.unk_0D);
    sp98.unk_07 = (u8)func_0027F260(sp20.unk_0E);
    func_00284C58(&sp98);
    arg2[0] = func_0027F2F0(sp98.unk_07);
    arg2[1] = func_0027F2F0(sp98.unk_06);
    arg2[2] = func_0027F2F0(sp98.unk_05);
    arg2[3] = func_0027F2F0(sp98.unk_03);
    arg2[4] = func_0027F2F0(sp98.unk_02);
    arg2[5] = func_0027F2F0(sp98.unk_01);
    return 1;
}
