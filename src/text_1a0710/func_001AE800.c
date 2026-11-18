/* profile: o0_301 */
#include "common.h"

extern s32 D_005AD4C0[];

u8 func_001AE800(void) {
    u8 i;

    for (i = 0; i < 30; i++) {
        if (D_005AD4C0[i] != 0) {
            D_005AD4C0[i] = 0;
            return i;
        }
    }
    return i;
}
