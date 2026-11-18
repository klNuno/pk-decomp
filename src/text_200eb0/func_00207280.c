/* profile: o0_p */
#include "common.h"

s32 fn_p_stEvalTree();

#define ABS(x) ((x) > 0.0f ? (x) : -(x))

s32 func_00207280(s32 arg0, s32 arg1, s32 *arg2) {
    f32 vec[5];
    f32 *v;
    s32 b;
    s32 a;

    arg1 = fn_p_stEvalTree(arg0, arg1, vec);
    v = vec;
    b = 0;
    a = 0;
    if (ABS(v[0]) < 0.00001f && ABS(v[1]) < 0.00001f) {
        a = 1;
    }
    if (a && ABS(v[2]) < 0.00001f) {
        b = 1;
    }
    *arg2 = b ? 1 : 0;
    return arg1;
}
