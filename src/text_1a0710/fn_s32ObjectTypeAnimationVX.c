/* profile: o0_301 */
#include "common.h"

typedef struct unk_fn_s32ObjectTypeAnimationVX_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_fn_s32ObjectTypeAnimationVX_0;

void fn_bObjectTypeAnimationVelocity();
s32 func_00127318(f32);

s32 fn_s32ObjectTypeAnimationVX(s32 arg0) {
    unk_fn_s32ObjectTypeAnimationVX_0 temp;

    temp.unk_00 = 0.0f;
    fn_bObjectTypeAnimationVelocity(arg0, -1, &temp);
    return func_00127318(65536.0f * temp.unk_00);
}
