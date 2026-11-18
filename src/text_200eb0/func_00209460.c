/* profile: o0_301 */
#include "common.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} unk_func_00209460_0;

typedef struct {
    unk_func_00209460_0 unk_00;
    s32 unk_0C;
} unk_func_00209460_1;

typedef struct {
    u8 pad_00[0x3C];
    unk_func_00209460_0 unk_3C;
} unk_func_00209460_2;

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
} unk_func_00209460_3;

unk_func_00209460_3 *HIE_fn_hGetSuperObjectObject(s32);
unk_func_00209460_2 *func_001B84B0(s32);

s32 func_00209460(s32 arg0, unk_func_00209460_1 *arg1) {
    unk_func_00209460_0 *temp_s0;
    unk_func_00209460_2 *temp_s1;
    s32 temp_s2;

    temp_s0 = &arg1->unk_00;
    temp_s2 = HIE_fn_hGetSuperObjectObject(arg0)->unk_08;
    arg1->unk_0C = 0x15;
    if (temp_s2 != 0) {
        temp_s1 = func_001B84B0(temp_s2);
        if (temp_s1 != NULL) {
            *temp_s0 = temp_s1->unk_3C;
            return 1;
        }
    }
    temp_s0->z = temp_s0->y = temp_s0->x = 0.0f;
    return 1;
}
