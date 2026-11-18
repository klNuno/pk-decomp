/* profile: o0 */
#include "common.h"

u32 func_001B74D0(u8, s32);

s32 func_001B7740(u8 arg0, s32 arg1, s16 arg2) {
    u32 temp;
    s16 temp2;
    u8 temp3;

    temp = func_001B74D0(arg0, arg1);
    if (temp == 0) {
        return 0;
    }
    temp2 = arg2 * 2;
    temp &= 3 << temp2;
    temp3 = (u8)(temp >> temp2);
    switch (temp3) {
    case 0:
        return 0;
    case 1:
        return 1;
    case 2:
        return 2;
    default:
        return 3;
    }
}
