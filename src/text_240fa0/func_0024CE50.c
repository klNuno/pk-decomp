/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[0x264];
    s32 unk_264;
    s32 unk_268;
    s32 unk_26C;
    u8 pad_270[4];
    s32 unk_274;
    s32 unk_278;
    u8 pad_27C[4];
    s32 unk_280;
    u8 pad_284[0x328 - 0x284];
} unk_func_0024CE50_0;

s32 fn_ucGetProcedureUltraOperator();
void fn_vGetUltraOperatorPerso();
s32 *HIE_fn_hGetSuperObjectObject(s32);
s32 *fn_p_stEvalTree(s32, s32 *, s32 *);
extern s32 **D_003601D8;
extern unk_func_0024CE50_0 D_006173A0[];

s32 *func_0024CE50(s32 arg0, s32 *arg1) {
    s32 sp30[7];
    s32 sp4C;
    unk_func_0024CE50_0 *temp_s0;
    s32 temp_s1;

    temp_s1 = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp_s1), arg0, &sp4C);
    D_003601D8 = (s32 **)HIE_fn_hGetSuperObjectObject(sp4C)[4];
    temp_s0 = &D_006173A0[((s32 *)D_003601D8[1])[0x74 / 4]];
    arg1 = fn_p_stEvalTree(arg0, arg1, sp30);
    temp_s0->unk_278 = sp30[0];
    arg1 = fn_p_stEvalTree(arg0, arg1, sp30);
    temp_s0->unk_280 = sp30[0];
    arg1 = fn_p_stEvalTree(arg0, arg1, sp30);
    temp_s0->unk_274 = sp30[0];
    arg1 = fn_p_stEvalTree(arg0, arg1, sp30);
    temp_s0->unk_264 = sp30[0];
    arg1 = fn_p_stEvalTree(arg0, arg1, sp30);
    temp_s0->unk_26C = sp30[0];
    arg1 = fn_p_stEvalTree(arg0, arg1, sp30);
    temp_s0->unk_268 = sp30[0];
    return arg1;
}
