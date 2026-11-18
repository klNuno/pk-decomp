/* profile: o0 */
#include "common.h"

s32 *HIE_fn_hGetSuperObjectObject(s32);
s32 func_001971C0(s32);

s32 func_001AEF20(s32 arg0) {
    s32 temp_s0;

    if (func_001971C0(arg0) != 2) {
        return 0;
    }
    temp_s0 = HIE_fn_hGetSuperObjectObject(arg0)[4];
    if (temp_s0 == 0) {
        return 0;
    }
    return 1;
}
