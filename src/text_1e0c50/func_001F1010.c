/* profile: o0_301 */
#include "common.h"

s32 func_001C7500(s32, s32);
s32 func_001C81D0(s32);
s32 func_001E6A60(s32, s32);
s32 func_001E6C40(s32, s32);

s32 func_001F1010(s32 arg0) {
    s32 temp_s0 = func_001E6C40(1, arg0);

    if (func_001E6A60(0, arg0) == 0) {
        return 4;
    }
    if (func_001C7500(arg0, temp_s0) == 0) {
        return 4;
    }
    if (func_001C81D0(arg0) != 0) {
        return 4;
    }
    return 1;
}
