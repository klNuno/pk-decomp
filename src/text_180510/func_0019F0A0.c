/* profile: o0 */
#include "common.h"

extern u8 D_005AB790[];

u8 func_0019F0A0(void) {
    u8 var_s0 = 0;

    if (D_005AB790[0] == 2 || D_005AB790[0] == 6 || D_005AB790[0] == 8) {
        var_s0 = 1;
    }
    return var_s0;
}
