/* profile: opt_300 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001E1D70_0;

s32 func_001E20F0(unk_func_001E1D70_0 *, unk_func_001E1D70_0 *, s32, s32, s32, unk_func_001E1D70_0 *, f32 *, unk_func_001E1D70_0 *, f32, f32);
s32 func_001E24E0(unk_func_001E1D70_0 *, s32, s32, s32, unk_func_001E1D70_0 *);

s32 func_001E1D70(unk_func_001E1D70_0 *arg0, unk_func_001E1D70_0 *arg1, s32 arg2, s32 arg3, s32 arg4, unk_func_001E1D70_0 *arg5, f32 *arg6, unk_func_001E1D70_0 *arg7, f32 arg8, f32 arg9) {
    f32 dist;
    f32 t;
    f32 x;

    if (!func_001E20F0(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9)) {
        return 0;
    }
    dist = arg8 + (arg5->unk_00 * arg0->unk_00 + arg5->unk_04 * arg0->unk_04 + arg5->unk_08 * arg0->unk_08);
    x = arg0->unk_00;
    if (((dist > 0.0f) ? dist : -dist) < 0.001f && arg9 < -0.001f) {
        *arg6 = 0.0f;
        *arg7 = *arg0;
        return 1;
    }
    if (dist >= 0.0f && dist < -arg9) {
        t = -(dist / arg9);
        arg7->unk_00 = x + t * arg1->unk_00;
        arg7->unk_04 = arg0->unk_04 + t * arg1->unk_04;
        arg7->unk_08 = arg0->unk_08 + t * arg1->unk_08;
        if (func_001E24E0(arg7, arg2, arg3, arg4, arg5)) {
            *arg6 = t;
            return 1;
        }
        return 0;
    }
    return 0;
}
