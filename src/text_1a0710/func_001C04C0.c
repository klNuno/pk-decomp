/* profile: o0_301_p */
#include "common.h"

s32 *HIE_fn_hGetSuperObjectObject(s32);
s32 func_001AEC70(s32);
f32 func_001C03F0(s32, s32);
f32 func_001C05B0(s32);
extern u8 D_005AB880[];

u8 func_001C04C0(s32 arg0) {
    u8 i;
    s32 temp;
    f32 temp1;
    f32 temp2;

    temp2 = 3.402822e38f;
    temp = *HIE_fn_hGetSuperObjectObject(arg0);
    for (i = 0; i < D_005AB880[0]; i++) {
        temp1 = func_001C03F0(arg0, func_001AEC70(i));
        if (temp1 < temp2) {
            temp2 = temp1;
        }
    }
    return temp2 < func_001C05B0(temp);
}
