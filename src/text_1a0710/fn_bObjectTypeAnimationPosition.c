/* profile: o0_301 */
#include "common.h"

s32 fn_hGetSuperObjectActorHandle(s32);
void func_00155EC0(s32, f32 *);
s32 func_001979C0(s32);

s32 fn_bObjectTypeAnimationPosition(s32 arg0, s32 arg1, f32 *arg2) {
    s32 ok;
    s32 a;
    s32 b;
    s32 c;
    f32 v[3];

    ok = 0;
    if (arg2 != NULL) {
        a = fn_hGetSuperObjectActorHandle(arg0);
        if (a != 0) {
            b = fn_hGetSuperObjectActorHandle(arg1);
            if (b != 0) {
                a = b;
            }
            c = func_001979C0(a);
            if (c != 0) {
                func_00155EC0(c, v);
                arg2[0] = v[0];
                arg2[1] = v[1];
                arg2[2] = v[2];
                ok = 1;
            }
        }
    }
    return ok;
}
