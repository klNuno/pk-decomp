/* profile: o0 */
#include "common.h"

void fn_bObjectTypeAnimationPosition();
s32 func_00127318(f32);

s32 fn_s32ObjectTypeAnimationY(s32 arg0) {
    f32 temp[3];

    temp[1] = 0.0f;
    fn_bObjectTypeAnimationPosition(arg0, -1, temp);
    return func_00127318(65536.0f * temp[1]);
}
