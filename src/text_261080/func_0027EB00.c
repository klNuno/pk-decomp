/* profile: o0 */
#include "common.h"

s32 func_0027EA90(s32);
extern s32 D_0035F5FC;

s32 func_0027EB00(void) {
    if (D_0035F5FC < 0 || D_0035F5FC > 7) {
        return 0;
    }
    return func_0027EA90(D_0035F5FC);
}
