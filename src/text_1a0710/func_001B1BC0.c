/* profile: o0_301 */
#include "common.h"

s32 func_001B13A0(s32, s32, s32, u16);
s32 func_001B19A0(s32, s32, u8, u8, s32 *);

s32 func_001B1BC0(s32 arg0, u8 arg1, u8 arg2, s32 arg3, u16 arg4) {
    s32 temp_s0;
    s32 sp2C;

    temp_s0 = func_001B19A0(arg0, 2, arg1, arg2, &sp2C);
    if (temp_s0 == 0) {
        return 0;
    }
    return func_001B13A0(temp_s0, sp2C, arg3, arg4);
}
