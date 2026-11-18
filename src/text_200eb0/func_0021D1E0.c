/* profile: o0 */
#include "common.h"

void func_0021D1E0(f32 *arg0, f32 (*arg1)[4], f32 *arg2) {
    arg0[0] = arg1[0][0] * arg2[0] + arg1[1][0] * arg2[1] + arg1[2][0] * arg2[2];
    arg0[1] = arg1[0][1] * arg2[0] + arg1[1][1] * arg2[1] + arg1[2][1] * arg2[2];
    arg0[2] = arg1[0][2] * arg2[0] + arg1[1][2] * arg2[1] + arg1[2][2] * arg2[2];
}
