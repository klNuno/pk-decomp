/* profile: o0_p */
#include "common.h"

s32 func_0027F260(s32 arg0) {
    s32 ret;

    ret = 0;
    arg0 = arg0 % 100;
    ret = arg0 % 10;
    ret += (arg0 / 10) << 4;
    return ret;
}
