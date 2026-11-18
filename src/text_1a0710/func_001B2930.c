/* profile: o0_301 */
#include "common.h"

s32 *HIE_fn_hGetSuperObjectObject(s32);
s32 func_00133AA0(s32 *);
s32 func_00133D00(s32);
s32 func_001971C0(s32);
s32 func_001979C0(s32);
s32 func_0019C730(s32);
s32 func_001ACF40(s32, u16);
void func_001B2AB0(s32, s32, s32, s32, s32, s32);

void func_001B2930(s32 arg0, u8 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 a;
    s32 b;
    s32 c;
    s32 d;
    s32 *obj;

    b = a = func_001ACF40(func_0019C730(*HIE_fn_hGetSuperObjectObject(arg0)), arg1);
    if (a == 0) {
        return;
    }
    if (func_001971C0(a) != 8) {
        b = func_001ACF40(func_0019C730(*HIE_fn_hGetSuperObjectObject(arg0)), arg1 + 0x8000);
        if (b == 0) {
            return;
        }
    }
    obj = HIE_fn_hGetSuperObjectObject(b);
    c = func_00133D00(func_00133AA0(obj));
    if (c == 0) {
        return;
    }
    d = func_001979C0(a);
    func_001B2AB0(arg0, c, d, arg2, arg3, arg4);
}
