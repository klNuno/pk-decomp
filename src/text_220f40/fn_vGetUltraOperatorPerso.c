/* profile: o0 */
#include "common.h"

extern s32 D_0036018C;

void fn_vGetUltraOperatorPerso(u8 arg0, s32 arg1, s32 *arg2) {
    if (D_0036018C != 0) {
        if (arg0) {
            *arg2 = D_0036018C;
            D_0036018C = 0;
        }
    } else {
        *arg2 = arg1;
    }
}
