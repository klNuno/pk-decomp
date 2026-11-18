/* profile: o0_301 */
#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[0x18];
} unk_func_001FA680_0;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_001FA680_1;

typedef struct {
    u8 pad_00[0x10];
    unk_func_001FA680_1 *unk_10;
} unk_func_001FA680_2;

s32 fn_ucGetProcedureUltraOperator(s32);
void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
unk_func_001FA680_2 *HIE_fn_hGetSuperObjectObject(s32);
s32 fn_p_stEvalTree(s32, s32, unk_func_001FA680_0 *);
void func_001FA420(unk_func_001FA680_1 *, s32, s32, s32, s32, s32, s32, unk_func_001FA680_0 *);

s32 func_001FA680(s32 arg0, s32 arg1) {
    unk_func_001FA680_1 *temp_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 temp_s5;
    s32 temp_s6;
    s32 temp_s7;
    unk_func_001FA680_0 *temp_fp;
    unk_func_001FA680_0 spA0;
    s32 spBC;

    temp_s5 = ((s32 *)arg1)[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp_s5), arg0, &spBC);
    temp_s0 = HIE_fn_hGetSuperObjectObject(spBC)->unk_10;
    arg1 = fn_p_stEvalTree(arg0, arg1, &spA0);
    temp_s7 = spA0.unk_00;
    arg1 = fn_p_stEvalTree(arg0, arg1, &spA0);
    temp_s6 = spA0.unk_00;
    arg1 = fn_p_stEvalTree(arg0, arg1, &spA0);
    temp_fp = &spA0;
    switch (temp_s5) {
    case 0x231:
        var_s1 = temp_s0->unk_00;
        var_s2 = temp_s0->unk_04;
        var_s3 = temp_s0->unk_08;
        var_s4 = temp_s0->unk_0C;
        break;
    case 0x232:
        var_s1 = temp_s0->unk_00 + 0xC;
        var_s2 = temp_s0->unk_04 + 0xC;
        var_s3 = temp_s0->unk_08 + 0xC;
        var_s4 = temp_s0->unk_0C + 0xC;
        break;
    default:
        return arg1;
    }
    func_001FA420(temp_s0, var_s1, var_s2, var_s3, var_s4, temp_s7, temp_s6, temp_fp);
    return arg1;
}
