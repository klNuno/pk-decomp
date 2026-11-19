#include "common.h"

f32 func_001E60E0(f32);

s32 func_001E39A0(f32 *arg0, f32 *arg1, f32 arg2, f32 arg3, f32 arg4) {
    f32 temp;
    f32 temp2;
    f32 temp3;
    s32 ret;

    if (arg2 != 0.0f) {
        temp = arg3 * arg3 - 4.0f * (arg2 * arg4);
        if (temp > 0.0f) {
            temp2 = func_001E60E0(temp);
            temp3 = 1.0f / (arg2 + arg2);
            arg3 = -arg3;
            ret = 2;
            *arg0 = temp3 * (arg3 + temp2);
            *arg1 = temp3 * (arg3 - temp2);
        } else if (temp < 0.0f) {
            return 0;
        } else {
            ret = 0;
            if (temp == 0.0f) {
                ret = 1;
                *arg0 = -(arg3 / (arg2 + arg2));
            }
        }
    } else {
        if (arg3 != 0.0f) {
            *arg0 = -(arg4 / arg3);
            return 1;
        }
        return 0;
    }
    return ret;
}
