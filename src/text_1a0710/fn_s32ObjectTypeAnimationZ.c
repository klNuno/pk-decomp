/* profile: o0 */
#include "common.h"

typedef struct unk_fn_s32ObjectTypeAnimationZ_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_fn_s32ObjectTypeAnimationZ_0;

s32 func_00127318(f32);
void fn_bObjectTypeAnimationPosition(s32, s32, unk_fn_s32ObjectTypeAnimationZ_0 *);

s32 fn_s32ObjectTypeAnimationZ(s32 arg0) {
    unk_fn_s32ObjectTypeAnimationZ_0 sp10;

    sp10.unk_08 = 0.0f;
    fn_bObjectTypeAnimationPosition(arg0, -1, &sp10);
    return func_00127318(65536.0f * sp10.unk_08);
}
