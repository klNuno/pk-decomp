/* profile: o0_301 */
#include "common.h"

u32 func_001E6A60();
extern u32 D_005AB800[];

u8 func_001F1270(s32 arg0) {
    u8 ret;
    u32 temp;

    temp = D_005AB800[0];
    ret = (temp < func_001E6A60(0, arg0)) ? 1 : 4;
    return ret;
}
