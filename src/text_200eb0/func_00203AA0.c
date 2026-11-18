/* profile: o0_301 */
#include "common.h"

s32 func_00162090(s32);
s32 func_00161FF0(s32);
u16 func_00162330(s32);

u8 func_00203AA0(s32 arg0, u16 arg1) {
    s32 temp_s0;
    u16 temp_s1;

    if (func_00162090(arg0) == 0) {
        return 0;
    }
    temp_s0 = func_00161FF0(arg0);
    if (temp_s0 == -1) {
        return 0;
    }
    temp_s1 = func_00162330(temp_s0);
    return (temp_s1 & arg1) == arg1;
}
