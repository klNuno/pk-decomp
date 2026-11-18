/* profile: o0_301_p */
#include "common.h"

void func_0011CBB0();
s32 func_0015EEE0(s32);
void func_00162A40();
void func_0017E8D0();
void func_0019C130();
void func_0019C170();
s32 func_0027FBA0();
void func_00280180();
void func_00280270(f32, void *);
s32 func_002D4E10();
void func_002D4E40();
void *memset(void *, s32, u32);
extern s8 D_003313F0[];
extern s32 D_003603C4;
extern s32 D_003603D4;
extern s32 D_007B00A8[];
extern s32 D_007B00E4[];

s32 func_002813E0(s32 arg0) {
    char out[0x10C];
    char buf[4];

    if (!func_0015EEE0(arg0) && !D_003603D4) {
        D_003603D4 = 1;
        return 0;
    }
    if (D_003603D4) {
        D_003603D4 = 0;
        memset(buf, 0, 4);
        buf[0] = D_003313F0[arg0 * 12] + '1';
        func_0011CBB0(out, (char *)D_007B00A8[0], buf, buf);
        D_003603C4 = 1;
        func_0019C130();
        func_002D4E40();
        func_0017E8D0();
        func_00280270(450.0f, out);
        func_00162A40();
        func_0017E8D0();
        func_00280270(450.0f, out);
        func_00162A40();
        do {
            buf[0] = 0;
            func_0017E8D0();
            func_00280270(450.0f, out);
            func_00162A40();
        } while (!func_0015EEE0(arg0));
        do {
            buf[0] = 0;
            func_0017E8D0();
            func_00280270(500.0f, (void *)D_007B00E4[0]);
            func_00162A40();
        } while (func_0027FBA0() != 3);
        while (func_0027FBA0() == 3) {
        }
        func_00280180();
        D_003603C4 = 0;
        func_0019C170();
        func_002D4E10();
    }
}
