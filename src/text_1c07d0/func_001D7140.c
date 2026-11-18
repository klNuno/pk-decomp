/* profile: o0 */
#include "common.h"

s32 SAV2_fn_p_stFindElementByName(s32);

s32 func_001D7140(s32 arg0) {
    s32 var_s0;
    if (SAV2_fn_p_stFindElementByName(arg0) != 0) {
        var_s0 = 1;
    } else {
        var_s0 = 0;
    }
    return var_s0 & 0xFF;
}
