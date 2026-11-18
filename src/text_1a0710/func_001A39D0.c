/* profile: o0_301 */
#include "common.h"

void func_00131C30(s32, s32);
s32 func_001987D0(s32);
s32 func_001987F0(s32);
s32 func_00198810(s32);
s32 func_00198840(s32);

void func_001A39D0(s32 arg0) {
    s32 p;
    s32 n;
    s32 c;
    s32 next;
    s32 first;

    func_00131C30(arg0, 0);
    n = func_00198840(arg0);
    first = p = func_00198810(arg0);
    while (n > 0) {
        c = func_001987F0(p);
        func_00131C30(c, 0);
        n--;
        next = p = func_001987D0(p);
    }
}
