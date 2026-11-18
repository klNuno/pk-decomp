/* profile: o0_301 */
#include "common.h"

s32 *HIE_fn_hGetSuperObjectObject(s32);
s32 func_00133AA0(s32 *);
s32 func_00133C70(u8, s32);
s32 func_001971C0(s32);
s32 func_001979C0(s32);
s32 func_0019C730(s32);
s32 func_001ACF40(s32, u16);
s32 func_001B0130(s32, u8, u8);

s32 func_001B19A0(s32 arg0, u8 arg1, u8 arg2, u8 arg3, s32 *arg4) {
    s32 res;
    s32 a;
    s32 b;
    s32 *obj;
    s32 x;
    s32 flags;

    if (arg2) {
        b = a = func_001ACF40(func_0019C730(*HIE_fn_hGetSuperObjectObject(arg0)), arg3);
        if (a == 0) {
            return 0;
        }
        flags = func_001971C0(a);
        if (!(flags & 0x18)) {
            b = func_001ACF40(func_0019C730(*HIE_fn_hGetSuperObjectObject(arg0)), arg3 + 0x8000);
            if (b == 0) {
                return 0;
            }
        }
        obj = HIE_fn_hGetSuperObjectObject(b);
        if (obj == NULL) {
            return 0;
        }
        x = func_00133AA0(obj);
        if (x == 0) {
            return 0;
        }
        res = func_00133C70(arg1, x);
        if (res == 0) {
            return 0;
        }
        *arg4 = func_001979C0(a);
        return res;
    }
    res = func_001B0130(arg0, arg1, arg3 - 1);
    if (res != 0) {
        *arg4 = func_001979C0(arg0);
        return res;
    }
    return 0;
}
