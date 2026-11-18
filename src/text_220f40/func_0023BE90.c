/* profile: o0_301 */
#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[0x18];
} unk_func_0023BE90_0;

s32 fn_ucGetProcedureUltraOperator(s32);
void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
s32 fn_p_stEvalTree(s32, s32, unk_func_0023BE90_0 *);
void func_001D4CA0(s32, s32, u8, s32);
void func_001D4F30(s32, s32);
void func_001D5160(s32, s32, s32, s32);
void func_001D54E0(s32, s32);
void func_001EDBB0(s32, s32);

s32 func_0023BE90(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_s1;
    s32 var_s2;
    s32 temp_s3;
    u8 temp_s4;
    s32 temp_s5;
    s32 temp_s6;
    unk_func_0023BE90_0 sp80;
    s32 sp9C;

    temp_s1 = ((s32 *)arg1)[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp_s1), arg0, &sp9C);
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp80);
    temp_s0 = sp80.unk_00;
    switch (temp_s1) {
    case 0x223:
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp80);
        if (sp80.unk_00 != 0) {
            var_s2 = 1;
        } else {
            var_s2 = 0;
        }
        temp_s4 = var_s2;
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp80);
        temp_s3 = sp80.unk_00;
        func_001D4CA0(sp9C, temp_s0, temp_s4, temp_s3);
        return arg1;
    case 0x224:
        func_001D4F30(sp9C, temp_s0);
        return arg1;
    case 0x226:
        func_001D54E0(sp9C, temp_s0);
        return arg1;
    case 0x225:
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp80);
        temp_s5 = sp80.unk_00;
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp80);
        temp_s6 = sp80.unk_00;
        func_001D5160(sp9C, temp_s0, temp_s5, temp_s6);
        break;
    default:
        func_001EDBB0(0x27, 0);
        break;
    }
    return arg1;
}
