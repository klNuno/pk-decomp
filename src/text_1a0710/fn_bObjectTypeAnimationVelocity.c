/* profile: o0_301 */
#include "common.h"

typedef struct unk_fn_bObjectTypeAnimationVelocity_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_fn_bObjectTypeAnimationVelocity_0;

typedef struct unk_fn_bObjectTypeAnimationVelocity_1 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_fn_bObjectTypeAnimationVelocity_1;

typedef struct unk_fn_bObjectTypeAnimationVelocity_2 {
    u8 pad_00[8];
    s32 unk_08;
} unk_fn_bObjectTypeAnimationVelocity_2;

typedef struct unk_fn_bObjectTypeAnimationVelocity_3 {
    u8 pad_00[0x3C];
    unk_fn_bObjectTypeAnimationVelocity_1 unk_3C;
} unk_fn_bObjectTypeAnimationVelocity_3;

s32 fn_hGetSuperObjectActorHandle(s32);
unk_fn_bObjectTypeAnimationVelocity_2 *HIE_fn_hGetSuperObjectObject(s32);
unk_fn_bObjectTypeAnimationVelocity_3 *func_001B84B0(s32);

s32 fn_bObjectTypeAnimationVelocity(s32 arg0, s32 arg1, unk_fn_bObjectTypeAnimationVelocity_1 *arg2) {
    unk_fn_bObjectTypeAnimationVelocity_3 *temp_s0;
    s32 var_s1;
    s32 var_s2;
    s32 temp_s3;
    s32 temp_s4;
    unk_fn_bObjectTypeAnimationVelocity_1 sp60;

    var_s2 = 0;
    if (arg2 != NULL) {
        var_s1 = fn_hGetSuperObjectActorHandle(arg0);
        if (var_s1 != 0) {
            temp_s3 = fn_hGetSuperObjectActorHandle(arg1);
            if (temp_s3 != 0) {
                var_s1 = temp_s3;
            }
            temp_s4 = HIE_fn_hGetSuperObjectObject(var_s1)->unk_08;
            if (temp_s4 != 0) {
                temp_s0 = func_001B84B0(temp_s4);
                if (temp_s0 != NULL) {
                    ((unk_fn_bObjectTypeAnimationVelocity_0 *)&sp60)->unk_00 = ((unk_fn_bObjectTypeAnimationVelocity_0 *)&temp_s0->unk_3C)->unk_00;
                    ((unk_fn_bObjectTypeAnimationVelocity_0 *)&sp60)->unk_04 = ((unk_fn_bObjectTypeAnimationVelocity_0 *)&temp_s0->unk_3C)->unk_04;
                    ((unk_fn_bObjectTypeAnimationVelocity_0 *)&sp60)->unk_08 = ((unk_fn_bObjectTypeAnimationVelocity_0 *)&temp_s0->unk_3C)->unk_08;
                    arg2->unk_00 = sp60.unk_00;
                    arg2->unk_04 = sp60.unk_04;
                    arg2->unk_08 = sp60.unk_08;
                    var_s2 = 1;
                }
            }
        }
    }
    return var_s2;
}
