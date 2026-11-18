/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[0x18];
    s32 unk_20;
} unk_001B2AB0_0;

unk_001B2AB0_0 *HIE_fn_hGetSuperObjectObject(s32);
s32 func_00198500(s32);
s32 func_00198520(s32);
s32 func_00198540(s32);
s32 func_001987D0(s32);
s32 func_001987F0(s32);
s32 func_00198810(s32);
s32 func_00198840(s32);
u8 func_0019ABE0(s32);
s32 func_001B0560(s32, s32, s32);
s32 func_001BE470(s32);

void func_001B2AB0(s32 arg0, s32 arg1, s32 arg2, s32 *arg3, s32 arg4, s32 *arg5)
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

    temp4 = 0;
    temp9 = temp0 = func_00198540(func_001BE470(HIE_fn_hGetSuperObjectObject(arg0)->unk_20));
    while (temp0 != 0) {
        temp1 = func_00198500(temp0);
        if (arg0 != temp1 && func_0019ABE0(HIE_fn_hGetSuperObjectObject(temp1)->unk_04) == 1
            && func_001B0560(arg1, arg2, temp1)) {
            if (*arg5 >= arg4) {
                break;
            }
            arg3[(*arg5)++] = temp1;
        }
        ++temp4;
        temp6 = temp0 = func_00198520(temp0);
        (void)temp6;
    }
    if (*arg5 < arg4) {
        temp4 = func_00198840(func_001BE470(HIE_fn_hGetSuperObjectObject(arg0)->unk_20));
        temp10 = temp5 = func_00198810(func_001BE470(HIE_fn_hGetSuperObjectObject(arg0)->unk_20));
        while (temp4 > 0) {
            if (*arg5 >= arg4) {
                break;
            }
            temp3 = 0;
            temp7 = temp0 = func_00198540(func_001987F0(temp5));
            (void)temp7;
            while (temp0 != 0) {
                temp1 = func_00198500(temp0);
                if (func_0019ABE0(HIE_fn_hGetSuperObjectObject(temp1)->unk_04) == 1
                    && func_001B0560(arg1, arg2, temp1)) {
                    if (*arg5 >= arg4) {
                        break;
                    }
                    arg3[(*arg5)++] = temp1;
                }
                ++temp3;
                temp2 = temp0 = func_00198520(temp0);
                (void)temp2;
            }
            --temp4;
            temp8 = temp5 = func_001987D0(temp5);
            (void)temp8;
        }
    }
}
