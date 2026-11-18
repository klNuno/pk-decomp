/* profile: o0_301 */
#include "common.h"

s32 *HIE_fn_hGetSuperObjectObject(s32);
s32 func_00197860(s32);
s32 func_001ABB90(s32);

s32 func_001A4D40(s32 arg0) {
    s32 temp_v0;
    temp_v0 = func_00197860(*HIE_fn_hGetSuperObjectObject(arg0));
    if (temp_v0 == 0) {
        return 0;
    }
    return func_001ABB90(temp_v0);
}
