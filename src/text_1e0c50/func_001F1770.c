/* profile: o0_p */
#include "common.h"

f32 func_001149C0(f32);

f32 func_001F1770(f32 *arg0) {
    f32 x;
    f32 y;
    f32 a;

    x = arg0[0];
    y = arg0[1];
    if (x) {
        a = func_001149C0(y / x);
    } else if (y < 0.0f) {
        a = -1.5707964f;
    } else {
        a = 1.5707964f;
    }
    if (x < 0.0f) {
        a = 3.1415927f + a;
    }
    if (a < 0.0f) {
        a = 6.2831855f + a;
    }
    a = 1.5707964f + a;
    if (a > 6.2831855f) {
        a -= 6.2831855f;
    }
    return a;
}
