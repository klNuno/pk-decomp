/* profile: o0_301 */
#include "common.h"

void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
s32 func_001A7C50(s32);
s32 func_00208B20(s32);

s32 *func_00205F20(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 temp_s0;
    s32 sp2C;

    temp_s0 = arg1[-2];
    fn_vGetUltraOperatorPerso(func_00208B20(temp_s0), arg0, &sp2C);
    *arg2 = func_001A7C50(sp2C);
    return arg1;
}
