/* profile: o0_p */
#include "common.h"

f32 func_001FE8E0(f32 arg0) {
    if (arg0 < 0.0f) {
        return 6.2831855f + arg0;
    }
    if (arg0 >= 6.2831855f) {
        return arg0 - 6.2831855f;
    }
    return arg0;
}
