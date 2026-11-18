/* profile: o0_301 */
#include "common.h"

s32 func_00208B20(s32);
void fn_vGetUltraOperatorPerso();
s32 *HIE_fn_hGetSuperObjectObject(s32);
u8 func_001B6D40(s32);
u8 func_001B6D70(s32);
u8 func_001B6DA0(s32);
u8 func_001B6DD0(s32);
u8 func_001B6E00(s32);

s32 *func_002081D0(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 sp3C;
    s32 temp_s1;
    s32 temp_s0;

    temp_s1 = arg1[-2];
    fn_vGetUltraOperatorPerso(func_00208B20(temp_s1), arg0, &sp3C);
    temp_s0 = HIE_fn_hGetSuperObjectObject(sp3C)[5];
    switch (temp_s1) {
    case 0x7E:
        *arg2 = func_001B6D40(temp_s0);
        break;
    case 0x7F:
        *arg2 = func_001B6D70(temp_s0);
        break;
    case 0x80:
        *arg2 = func_001B6DA0(temp_s0);
        break;
    case 0x81:
        *arg2 = func_001B6DD0(temp_s0);
        break;
    case 0x82:
        *arg2 = func_001B6E00(temp_s0);
        break;
    }
    return arg1;
}
