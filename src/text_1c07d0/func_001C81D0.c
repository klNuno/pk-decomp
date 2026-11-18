/* profile: o0_301 */
#include "common.h"

s32 *HIE_fn_hGetSuperObjectObject(s32);
s32 func_00197860(s32);
s32 func_001A16A0(s32);
s32 func_001C4820(s32);

s32 func_001C81D0(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;
    temp_s0 = *HIE_fn_hGetSuperObjectObject(arg0);
    if (func_001A16A0(temp_s0) != 0) {
        temp_s1 = func_00197860(temp_s0);
        if (temp_s1 == func_001C4820(temp_s0)) {
            return 1;
        }
    }
    return 0;
}
