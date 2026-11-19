/* profile: o0_301_p */
#include "common.h"

s32 *HIE_fn_hGetSuperObjectObject(s32);
u8 func_00197E40(s32);
s32 func_00198500(s32);
s32 func_00198520(s32);
s32 func_00198540(s32);

s32 func_001A2DF0(s32 arg0) {
    s32 s0;
    s32 count;
    s32 total;
    s32 first;
    s32 s1;

    count = 0;
    total = 0;
    first = s0 = func_00198540(arg0);
    while (s0 != 0) {
        if (func_00197E40(HIE_fn_hGetSuperObjectObject(func_00198500(s0))[1]) == 1) {
            count++;
        }
        total++;
        s1 = s0 = func_00198520(s0);
        (void)s1;
    }
    return count;
}
