/* profile: o0_p */
#include "common.h"

f32 func_00257A60(u8 *, s32 *);
f32 func_002576F0(u8 *, s32 *);
extern s32 D_006053C0[];

s32 func_00253630(u8 *arg0) {
    f32 a;
    f32 b;
    s32 ret;
    s32 flag;

    a = func_00257A60(arg0 + 0x160, D_006053C0);
    a = (a > 0.0f) ? a : -a;
    b = func_002576F0(arg0 + 0x160, D_006053C0);
    b = (b > 0.0f) ? b : -b;
    ret = 0;
    flag = 1;
    if (a >= 0.7853982f && a <= 2.3561945f) {
        flag = 0;
    }
    if (flag && b < 2.3561945f) {
        ret = 1;
    }
    return ret;
}
