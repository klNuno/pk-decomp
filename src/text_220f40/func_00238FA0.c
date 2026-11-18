/* profile: o0 */
#include "common.h"

s32 func_00238FA0(f32 *arg0, f32 *arg1) {
    f32 *sp40;
    f32 *sp50;
    s32 var_s2;
    s32 var_s3;

    sp40 = arg0;
    sp50 = arg1;
    if (*sp50 < *sp40) {
        var_s2 = -1;
    } else {
        if (*sp50 == *sp40) {
            var_s3 = 0;
        } else {
            var_s3 = 1;
        }
        var_s2 = var_s3;
    }
    return var_s2;
}
