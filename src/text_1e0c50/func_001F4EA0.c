/* profile: o0_p */
#include "common.h"

extern f32 D_005AD910[];

f32 func_001FE840(f32);
f32 func_001FE8E0(f32);

void func_001F4EA0(void *arg0, f32 *arg1, f32 *arg2, f32 *arg3, f32 arg4, f32 arg5)
{
    s32 temp0;
    f32 temp1;
    f32 temp2;
    f32 temp3;
    f32 temp4;
    f32 temp5;

    if (arg5 >= 3.1415927f) {
        *arg2 = *arg1;
        return;
    }
    temp4 = arg4;
    if (arg5 > 0.0f) {
        arg5 = 0.0001f + arg5;
        temp1 = arg4 - arg5;
        if (temp1 < 0.0f) {
            temp1 = 6.2831855f + temp1;
        }
        temp2 = arg4 + arg5;
        if (temp2 > 6.2831855f) {
            temp2 -= 6.2831855f;
        }
        if (temp2 > temp1) {
            temp0 = *arg1 >= temp1 && *arg1 <= temp2;
        } else {
            temp0 = !(*arg1 > temp2 && *arg1 < temp1);
        }
        if (temp0 == 0) {
            temp3 = *arg1 - arg4;
            temp3 = func_001FE840(temp3);
            if (temp3 > 0.0f) {
                temp4 = temp2;
            } else {
                temp4 = temp1;
            }
        } else {
            temp4 = *arg1;
        }
    }
    temp3 = temp4 - *arg1;
    temp3 = func_001FE840(temp3);
    *arg3 = temp3;
    if (temp3 > 0.0f) {
        temp5 = temp3;
    } else {
        temp5 = -temp3;
    }
    if (temp5 >= D_005AD910[0]) {
        if (temp3 > 0.0f) {
            *arg2 = *arg1 + D_005AD910[0];
        } else {
            *arg2 = *arg1 - D_005AD910[0];
        }
        *arg2 = func_001FE8E0(*arg2);
    } else {
        *arg2 = temp4;
    }
    *arg1 = temp4;
}
