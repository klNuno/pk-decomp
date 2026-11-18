/* profile: o0 */
#include "common.h"

extern s32 D_0035FEC4;

s32 func_0019BEF0(void) {
    s32 var_s0;

    if (D_0035FEC4 == 1) {
        var_s0 = 1;
    } else {
        var_s0 = 0;
    }
    return var_s0 & 0xFF;
}
