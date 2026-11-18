/* profile: o0_301 */
#include "common.h"

s32 *HIE_fn_hGetSuperObjectObject(s32);
s32 fn_ucGetProcedureUltraOperator(s32);
void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
void func_0019A290(s32, s32);
void func_0019B1B0(s32, s32);
s32 func_0019B200(s32);

s32 *func_0023D420(s32 arg0, s32 *arg1) {
    s32 temp;
    s32 flags;
    s32 sp3C;

    temp = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp), arg0, &sp3C);
    switch (temp) {
    case 0x83:
        flags = func_0019B200(sp3C);
        flags |= 8;
        func_0019B1B0(*HIE_fn_hGetSuperObjectObject(sp3C), flags);
        func_0019A290(sp3C, flags);
        break;
    }
    return arg1;
}
