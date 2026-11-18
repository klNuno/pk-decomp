#include "common.h"

f32 func_00115E30(f32, f32);
extern f32 D_005AB850[];

static inline f32 func_0014A800_ease(f32 x) {
    f32 t;

    if (x >= 1.0f) {
        return x;
    }
    if (!(x <= 0.0f)) {
        t = 1.0f - x;
        t = t * t;
        return 1.0f - t * t;
    }
    return 0.0f;
}

static inline f32 func_0014A800_abs(f32 x) {
    return (x > 0.0f) ? x : -x;
}

f32 func_0014A800(s32 arg0, f32 arg1) {
    arg1 = func_0014A800_ease(arg1);
    if (arg0 != 0) {
        if (!(func_0014A800_abs(D_005AB850[0] - 0.016666668f) <= 0.001f)) {
            arg1 = func_00115E30(arg1, 60.0f * D_005AB850[0]);
        }
    }
    return arg1;
}
