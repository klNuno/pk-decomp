/* profile: o0_p */
#include "common.h"

f32 func_001F1A60(f32 arg0, f32 arg1, f32 arg2) {
    arg2 -= arg0;
    while (arg2 < 0.0f) {
        arg2 += arg1;
    }
    while (arg2 >= arg1) {
        arg2 -= arg1;
    }
    arg2 += arg0;
    return arg2;
}
