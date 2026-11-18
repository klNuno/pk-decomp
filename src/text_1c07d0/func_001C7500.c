/* profile: o0_301 */
#include "common.h"

s32 *HIE_fn_hGetSuperObjectObject();
s32 func_001C6C30();

s32 func_001C7500(s32 arg0, s32 arg1) {
    s32 temp;

    temp = *HIE_fn_hGetSuperObjectObject(arg0);
    if (arg1 == func_001C6C30(temp)) {
        return 1;
    }
    return 0;
}
