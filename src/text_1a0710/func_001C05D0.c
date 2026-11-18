/* profile: o0_301_p */
#include "common.h"

s32 *HIE_fn_hGetSuperObjectObject(s32);
s32 func_001AEC70(s32);
f32 func_001C03F0(s32, s32);
f32 func_001C06C0(s32);
extern u8 D_005AB880[];

u8 func_001C05D0(s32 arg0) {
    f32 temp;
    f32 var = 3.40282205e+38f;
    s32 temp2;
    u8 i;

    temp2 = *HIE_fn_hGetSuperObjectObject(arg0);
    for (i = 0; i < D_005AB880[0]; i++) {
        temp = func_001C03F0(arg0, func_001AEC70(i));
        if (temp < var) {
            var = temp;
        }
    }
    return var < func_001C06C0(temp2);
}
