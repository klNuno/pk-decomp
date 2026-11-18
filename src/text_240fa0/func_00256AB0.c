/* profile: o0_301 */
#include "common.h"

s32 fn_ucGetProcedureUltraOperator();
void fn_vGetUltraOperatorPerso();
s32 *fn_p_stEvalTree();
void SND_fn_vSetVolumeLineSound(s32, s32);
extern s32 D_0035F54C;
extern s32 D_0035F550;
extern s32 D_0035F554;
extern s32 D_0035F558;
extern s32 D_0035F55C;

s32 *func_00256AB0(s32 arg0, s32 *arg1) {
    s32 a;
    s32 b;
    s32 temp;
    s32 c;
    s32 sp50[7];
    s32 sp6C;

    temp = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp), arg0, &sp6C);
    arg1 = fn_p_stEvalTree(arg0, arg1, sp50);
    c = sp50[0];
    switch (temp) {
    case 0x2F6:
        b = sp6C;
        a = D_0035F550;
        break;
    case 0x2F7:
        b = sp6C;
        a = D_0035F54C;
        break;
    case 0x2F8:
        b = -1;
        a = D_0035F554;
        break;
    case 0x2F9:
        b = -1;
        a = D_0035F558;
        break;
    case 0x2FA:
        b = -1;
        a = D_0035F55C;
        break;
    default:
        b = -1;
        a = -1;
        break;
    }
    SND_fn_vSetVolumeLineSound(a, c);
    return arg1;
}
