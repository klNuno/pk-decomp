/* profile: o0_301 */
#include "common.h"

void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
s32 func_001C82B0(s32);
void func_001EDBB0(s32, s32);
s32 func_00208B20(s32);

s32 *func_00207C00(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 sp2C;
    s32 temp_s0;

    temp_s0 = arg1[-2];
    fn_vGetUltraOperatorPerso(func_00208B20(temp_s0), arg0, &sp2C);
    switch (temp_s0) {
    case 0x76:
        *arg2 = func_001C82B0(sp2C);
        return arg1;
    default:
        func_001EDBB0(0x2B, 0);
        return arg1;
    }
}
