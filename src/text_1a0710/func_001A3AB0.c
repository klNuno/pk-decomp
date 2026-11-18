/* profile: o0_301 */
#include "common.h"

void func_00131C30(s32, s32);
s32 func_001987D0(s32);
s32 func_001987F0(s32);
s32 func_00198810(s32);
s32 func_00198840(s32);

void func_001A3AB0(s32 arg0) {
    s32 child;
    s32 count;
    s32 sub;
    s32 next;
    s32 first;

    func_00131C30(arg0, 1);
    count = func_00198840(arg0);
    for (first = child = func_00198810(arg0); count > 0; count--, next = child = func_001987D0(child)) {
        sub = func_001987F0(child);
        func_00131C30(sub, 1);
    }
}
