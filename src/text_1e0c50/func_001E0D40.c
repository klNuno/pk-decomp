/* profile: opt_nodf */
#include "common.h"

typedef struct unk_func_001E0D40_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001E0D40_0;

f32 func_001E60E0(f32);

static inline void func_001E0D40_sub(unk_func_001E0D40_0 *arg0, unk_func_001E0D40_0 *arg1, unk_func_001E0D40_0 *arg2) {
    arg0->unk_00 = arg1->unk_00 - arg2->unk_00;
    arg0->unk_04 = arg1->unk_04 - arg2->unk_04;
    arg0->unk_08 = arg1->unk_08 - arg2->unk_08;
}

f32 func_001E0D40(unk_func_001E0D40_0 *arg0, unk_func_001E0D40_0 *arg1, unk_func_001E0D40_0 *arg2, f32 *arg3, unk_func_001E0D40_0 *arg4) {
    unk_func_001E0D40_0 e;
    f32 temp_x = arg2->unk_00;
    f32 temp_y;
    f32 temp_z;

    if (0.0f != temp_x || 0.0f != arg2->unk_04 || 0.0f != arg2->unk_08) {
        func_001E0D40_sub(&e, arg0, arg1);
        temp_y = arg2->unk_04;
        temp_z = arg2->unk_08;
        *arg3 = (temp_x * e.unk_00 + temp_y * e.unk_04 + temp_z * e.unk_08) /
                (temp_x * temp_x + temp_y * temp_y + temp_z * temp_z);
        arg4->unk_00 = arg1->unk_00 + *arg3 * arg2->unk_00;
        arg4->unk_04 = arg1->unk_04 + *arg3 * arg2->unk_04;
        arg4->unk_08 = arg1->unk_08 + *arg3 * arg2->unk_08;
    } else {
        *arg3 = 0.0f;
        *(s32 *)&arg4->unk_00 = *(s32 *)&arg1->unk_00;
        *(s32 *)&arg4->unk_04 = *(s32 *)&arg1->unk_04;
        *(s32 *)&arg4->unk_08 = *(s32 *)&arg1->unk_08;
    }
    {
        f32 dy;
        f32 dz;
        f32 dx;

        dy = arg4->unk_04 - arg0->unk_04;
        dx = arg4->unk_00 - arg0->unk_00;
        dz = arg4->unk_08 - arg0->unk_08;
        return func_001E60E0(dx * dx + dy * dy + dz * dz);
    }
}
