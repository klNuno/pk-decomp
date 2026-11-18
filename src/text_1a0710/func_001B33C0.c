/* profile: o0_301 */
#include "common.h"

s32 *HIE_fn_hGetSuperObjectObject(s32);
s32 func_001B74D0(u8, s32);

u8 func_001B33C0(u8 arg0, s32 arg1) {
    s32 temp_s0;

    temp_s0 = HIE_fn_hGetSuperObjectObject(arg1)[5];
    if (temp_s0 != 0) {
        return func_001B74D0(arg0, temp_s0) == 0;
    }
    return 1;
}
