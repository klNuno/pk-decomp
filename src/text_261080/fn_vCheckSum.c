/* profile: o0_p */
#include "common.h"

s32 fn_vCheckSum(u8 *arg0, s32 arg1) {
    s32 sum;
    s32 i;

    sum = 0;
    for (i = 0; i < arg1; i++) {
        sum += arg0[i];
    }
    return sum;
}
