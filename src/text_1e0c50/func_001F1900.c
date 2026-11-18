/* profile: o0_p */
#include "common.h"

f32 func_001F1900(f32 arg0, f32 arg1) {
    f32 temp;

    temp = arg1 - arg0;
    if (temp > 0.0f) {
        if (temp > 3.1415927f) {
            temp -= 6.2831855f;
        }
    } else if (temp < -3.1415927f) {
        temp = 6.2831855f + temp;
    }
    return temp;
}
