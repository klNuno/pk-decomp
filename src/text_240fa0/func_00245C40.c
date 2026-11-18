/* profile: o0_301 */
#include "common.h"

u8 fn_ucGetProcedureUltraOperator(s32);
void fn_vGetUltraOperatorPerso(u8, s32, s32 *);
s32 func_00246280(s32);
void func_00246630(s32, s32, s32);

s32 *func_00245C40(s32 arg0, s32 *arg1) {
    s32 temp_s1;
    s32 sp3C;
    s32 temp_s0;

    temp_s1 = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp_s1), arg0, &sp3C);
    temp_s0 = func_00246280(sp3C);
    if (temp_s0 != 0) {
        func_00246630(temp_s0, 2, 1);
    }
    return arg1;
}
