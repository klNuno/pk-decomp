/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00243F40_0 {
    s16 unk_00;
    u8 pad_02[0xE];
} unk_func_00243F40_0;

u8 fn_ucGetProcedureUltraOperator(s32);
void fn_vGetUltraOperatorPerso(u8, s32, s32 *);
s32 *fn_p_stEvalTree(s32, s32 *, unk_func_00243F40_0 *);
void func_00136010(s32, s16);

s32 *func_00243F40(s32 arg0, s32 *arg1) {
    s16 temp_s0;
    s32 temp_s1;
    unk_func_00243F40_0 sp30;
    s32 sp4C;

    temp_s1 = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp_s1), arg0, &sp4C);
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp30);
    temp_s0 = sp30.unk_00;
    func_00136010(arg0, temp_s0);
    return arg1;
}
