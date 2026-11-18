/* profile: o0_301 */
#include "common.h"

s32 func_001348A0(s16);
s16 func_0019D070(s32, u16);

s32 func_0019D140(s32 arg0, u16 arg1) {
    s16 idx;
    s32 ret;

    idx = func_0019D070(arg0, arg1);
    if (idx != -1) {
        ret = func_001348A0(idx);
    } else {
        ret = 0;
    }
    return ret;
}
