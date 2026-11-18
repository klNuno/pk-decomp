/* profile: o0 */
#include "common.h"

extern s32 D_005AD540[];

u8 func_001AE780(s32 arg0) {
    u8 i;

    for (i = 0; i < 30; i++) {
        if (arg0 == D_005AD540[i]) {
            return i;
        }
    }
    return i;
}
