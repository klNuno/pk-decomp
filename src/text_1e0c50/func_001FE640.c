/* profile: o0_p */
#include "common.h"

f32 func_001FE8E0(f32);

void func_001FE640(void *arg0, f32 *arg1, f32 *arg2) {
    f32 ax;
    f32 ay;

    ax = *arg1 > 0.0f ? *arg1 : -*arg1;
    ay = *arg2 > 0.0f ? *arg2 : -*arg2;
    if (ay > 1.5707964f) {
        if (*arg2 > 0.0f) {
            *arg2 = 3.1415927f - *arg2;
        } else {
            *arg2 = -3.1415927f - *arg2;
        }
    }
    *arg1 = func_001FE8E0(*arg1);
    *arg2 = func_001FE8E0(*arg2);
}
