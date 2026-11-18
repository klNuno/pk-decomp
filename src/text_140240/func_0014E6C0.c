#include "common.h"

f32 func_0014E6C0(s32 arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    f32 ret;
    f32 temp;

    if (arg0 != 0 || arg5 < 0.001f) {
        return arg5;
    }
    ret = arg5;
    if (!(ret <= arg2)) {
        ret = arg2;
    }
    if (arg1 == 0) {
        if (arg5 < arg2 * arg4) {
            arg5 = arg5 / arg4;
            if (!(ret <= arg5)) {
                ret = arg5;
            }
        }
        temp = arg6 + arg2 / arg3;
        if (!(ret <= temp)) {
            ret = temp;
        }
    }
    return ret;
}
