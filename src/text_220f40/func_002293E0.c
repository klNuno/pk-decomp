/* profile: o0 */
#include "common.h"

extern s32 D_0035F8A8;

s32 func_002293E0(void *arg0) {
    s32 temp_s0;
    s32 var_s1;
    temp_s0 = *(s32 *)((u8 *)arg0 + 0x28);
    var_s1 = 1;
    if ((temp_s0 != D_0035F8A8) && (temp_s0 != -1)) {
        var_s1 = 0;
    }
    return var_s1 & 0xFF;
}
