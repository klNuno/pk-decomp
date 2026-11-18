/* profile: o0_p */
#include "common.h"

f32 func_001FE840(f32 arg0) {
    if (arg0 > 3.1415927f) {
        return arg0 - 6.2831855f;
    }
    if (arg0 <= -3.1415927f) {
        return 6.2831855f + arg0;
    }
    return arg0;
}
