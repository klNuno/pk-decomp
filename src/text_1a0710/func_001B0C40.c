/* profile: o0_301 */
#include "common.h"

typedef union unk_func_001B0C40_0 {
    s32 unk_00;
    s16 unk_00_s16;
} unk_func_001B0C40_0;

s32 func_001979C0(s32);
s32 func_001B0130(s32, s32, u8);
void func_001B0D40(s32, s32, s32, s32, u16, u16, unk_func_001B0C40_0 *);
void func_001B11B0(s32, u8, s32, u16, u16, unk_func_001B0C40_0 *);

void func_001B0C40(s32 arg0, u8 arg1, u8 arg2, s32 arg3, u16 *arg4, u16 arg5) {
    s32 temp;
    u16 val;
    unk_func_001B0C40_0 sp3C;

    val = *arg4;
    sp3C.unk_00 = 0;
    if (arg1) {
        func_001B11B0(arg0, arg2, arg3, arg5, val, &sp3C);
    } else {
        temp = func_001B0130(arg0, 2, arg2 - 1);
        if (temp) {
            func_001B0D40(arg0, temp, func_001979C0(arg0), arg3, arg5, val, &sp3C);
        }
    }
    *arg4 = sp3C.unk_00_s16;
}
