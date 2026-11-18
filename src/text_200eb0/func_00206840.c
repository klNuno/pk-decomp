/* profile: o0_301 */
#include "common.h"

s32 func_00208B20();
void fn_vGetUltraOperatorPerso();
u8 func_00199430(s32);
u8 func_001994C0(s32);

s32 *func_00206840(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 result;
    s32 temp;
    s32 sp3C;

    temp = arg1[-2];
    result = 0;
    fn_vGetUltraOperatorPerso(func_00208B20(temp), arg0, &sp3C);
    switch (temp) {
    case 0x42:
        result = func_00199430(sp3C);
        break;
    case 0x43:
        result = func_001994C0(sp3C);
        break;
    }
    *arg2 = result;
    return arg1;
}
