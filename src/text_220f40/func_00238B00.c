/* profile: o0_301 */
#include "common.h"

u8 fn_ucGetProcedureUltraOperator(s32);
void fn_vGetUltraOperatorPerso(u8, s32, s32 *);
void func_001C02A0(s32);
void func_001C0310(s32);
void func_001EDBB0(s32, s32);

s32 func_00238B00(s32 arg0, s32 arg1) {
    s32 temp7;
    s32 temp2;

    temp2 = ((s32 *)arg1)[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp2), arg0, &temp7);
    switch (temp2) {
    case 0x1CA:
        func_001C02A0(temp7);
        return arg1;
    case 0x1CB:
        func_001C0310(temp7);
        return arg1;
    default:
        func_001EDBB0(0x27, 0);
        return arg1;
    }
}
