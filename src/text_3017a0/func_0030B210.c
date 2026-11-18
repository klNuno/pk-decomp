#include "common.h"

void func_002D2BA0();
u32 func_0031E828();
u32 func_0031EA60();
extern s32 D_0035F7B0;
extern u32 D_0036080C;
extern s8 D_00360810;
extern u32 D_00360814;
extern s8 D_00360818;
extern u8 D_007CA700[];

u32 func_0030B210(s32 arg0, u32 arg1, u8 *arg2, u32 arg3) {
    u32 temp_v1;
    u32 var_s0;
    u32 var_s1;

    if (D_00360810 == 0) {
        D_0036080C = -1;
        D_00360810 = 1;
    }
    if (D_00360818 == 0) {
        D_00360814 = 0;
        D_00360818 = 1;
    }
    var_s0 = 0;
    temp_v1 = arg1 - D_0036080C;
    if (D_0035F7B0 != arg0) {
        D_0035F7B0 = arg0;
        D_00360814 = 0;
    }
    if (temp_v1 < D_00360814) {
        var_s1 = D_00360814 - temp_v1;
        if (arg3 < var_s1) {
            var_s1 = arg3;
        }
        func_002D2BA0(arg2, D_007CA700 + temp_v1, var_s1);
        var_s0 += var_s1;
        arg3 -= var_s1;
        arg2 += var_s1;
        arg1 += var_s1;
    }
    if (arg3 != 0) {
        if (arg1 != func_0031E828(arg0, 0, 1)) {
            func_0031E828(arg0, arg1, 0);
        }
        if (arg3 < 0x800) {
            D_00360814 = func_0031EA60(arg0, D_007CA700, 0x800);
            if (D_00360814 < arg3) {
                arg3 = D_00360814;
            }
            func_002D2BA0(arg2, D_007CA700, arg3);
            D_0036080C = arg1;
            var_s0 += arg3;
        } else {
            var_s0 += func_0031EA60(arg0, arg2, arg3);
        }
    }
    return var_s0;
}
