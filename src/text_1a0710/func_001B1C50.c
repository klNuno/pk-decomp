/* profile: o0_301 */
#include "common.h"

s32 func_001B19A0(s32, s32, u8, u8, s32 *);
s32 func_001E3AC0(s32, s32, s32, s32, s32 *, s32 *);

s32 func_001B1C50(s32 arg0, u8 arg1, u8 arg2, s32 arg3, u8 arg4, u8 arg5) {
    s32 a;
    s32 b;
    s32 c;
    s32 d;
    s32 r0;
    s32 r1;

    r0 = func_001B19A0(arg0, 2, arg1, arg2, &a);
    r1 = func_001B19A0(arg3, 2, arg4, arg5, &b);
    if (r0 == 0 || r1 == 0) {
        return 0;
    }
    if (func_001E3AC0(r0, a, r1, b, &c, &d)) {
        return 1;
    }
    return 0;
}
