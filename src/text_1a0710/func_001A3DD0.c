/* profile: o0_301_p */
#include "common.h"

s32 *HIE_fn_hGetSuperObjectObject(s32);
s32 func_0012F460(s32);
s32 func_0012F470();
s32 func_00131C00(s32);
s32 func_00198500(s32);
s32 func_00198520(s32);
void func_001A3520(s32, s32);

void func_001A3DD0(void) {
    s32 cur;
    s32 x;
    s32 n;
    s32 next;
    s32 obj;
    s32 *p;
    s32 first;

    for (obj = func_0012F470(); obj != 0; obj = func_0012F460(obj)) {
        if (func_00131C00(obj) == 0) {
            continue;
        }
        p = HIE_fn_hGetSuperObjectObject(obj);
        n = 0;
        cur = *p;
        first = cur;
        while (cur != 0) {
            x = func_00198500(cur);
            func_001A3520(x, 1);
            n++;
            next = cur = func_00198520(cur);
            (void)next;
        }
    }
}
