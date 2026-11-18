/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[0xC];
    s32 unk_14;
    u8 pad_18[8];
    s32 unk_20;
} unk_func_001B0D40_0;

unk_func_001B0D40_0 *HIE_fn_hGetSuperObjectObject(s32);
s32 func_00198500(s32);
s32 func_00198520(s32);
s32 func_00198540(s32);
s32 func_0019ABC0(s32);
u8 func_0019ABE0(s32);
s32 func_0019E900(s32);
s32 func_0019E920(s32);
s32 func_0019E940(s32);
s32 func_0019E970(s32);
s32 func_001B13A0(s32, s32, s32, u16);
s32 func_001B6E30(s32);
s32 func_001BE470(s32);

void func_001B0D40(s32 arg0, s32 arg1, s32 arg2, s32 *arg3, u16 arg4, s32 arg5, s32 *arg6)
{
    s32 temp0;
    s32 temp1;
    s32 temp2;
    s32 temp3;
    s32 temp4;
    s32 temp5;
    s32 temp6;
    s32 temp7;
    s32 temp8;
    volatile s32 temp9;
    volatile s32 temp10;
    volatile s32 temp11;
    volatile s32 temp12;
    volatile s32 temp13;
    volatile s32 temp14;

    temp4 = func_0019ABC0(HIE_fn_hGetSuperObjectObject(arg0)->unk_04) & 8;
    temp5 = func_001B6E30(HIE_fn_hGetSuperObjectObject(arg0)->unk_14) & 0xFF;
    temp7 = 0;
    temp10 = temp1 = func_00198540(func_001BE470(HIE_fn_hGetSuperObjectObject(arg0)->unk_20));
    while (temp1 != 0) {
        if (*arg6 < arg5) {
            temp0 = func_00198500(temp1);
            if (arg0 != temp0 && func_0019ABE0(HIE_fn_hGetSuperObjectObject(temp0)->unk_04) == 1
                && (temp4 == 0 || (temp9 = HIE_fn_hGetSuperObjectObject(temp0)->unk_14) == 0
                    || func_001B6E30(temp9) == 0)
                && (temp5 == 0 || !(func_0019ABC0(HIE_fn_hGetSuperObjectObject(temp0)->unk_04) & 8))
                && func_001B13A0(arg1, arg2, temp0, arg4) != 0) {
                arg3[(*arg6)++] = temp0;
            }
        } else {
            return;
        }
        ++temp7;
        temp11 = temp1 = func_00198520(temp1);
    }
    if (*arg6 < arg5) {
        temp7 = func_0019E970(func_001BE470(HIE_fn_hGetSuperObjectObject(arg0)->unk_20));
        temp12 = temp8 = func_0019E940(func_001BE470(HIE_fn_hGetSuperObjectObject(arg0)->unk_20));
        while (temp7 != 0) {
            temp6 = 0;
            temp13 = temp1 = func_00198540(func_0019E920(temp8));
            while (temp1 != 0) {
                if (*arg6 < arg5) {
                    temp0 = func_00198500(temp1);
                    if (func_0019ABE0(HIE_fn_hGetSuperObjectObject(temp0)->unk_04) == 1
                        && (temp4 == 0 || (temp2 = HIE_fn_hGetSuperObjectObject(temp0)->unk_14) == 0
                            || func_001B6E30(temp2) == 0)
                        && (temp5 == 0 || !(func_0019ABC0(HIE_fn_hGetSuperObjectObject(temp0)->unk_04) & 8))
                        && func_001B13A0(arg1, arg2, temp0, arg4) != 0) {
                        arg3[(*arg6)++] = temp0;
                    }
                } else {
                    return;
                }
                ++temp6;
                temp3 = temp1 = func_00198520(temp1);
                (void)temp3;
            }
            --temp7;
            temp14 = temp8 = func_0019E900(temp8);
        }
    }
}
