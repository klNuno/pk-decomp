/* profile: o0 */
#include "common.h"

s32 func_00280710(s32, f32);
extern s32 D_007B0090[];

s32 func_00281300(s32 arg0) {
    s32 temp_s0;

    temp_s0 = func_00280710(D_007B0090[0], 450.0f);
    if (temp_s0 == -1) {
        return 3;
    }
    if (temp_s0 == 4) {
        return 2;
    }
    return 4;
}
