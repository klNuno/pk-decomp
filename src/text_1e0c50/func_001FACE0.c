/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001FACE0_0 {
    u8 pad_00[0x68];
    s32 unk_68;
} unk_func_001FACE0_0;

typedef struct unk_func_001FACE0_1 {
    unk_func_001FACE0_0 *unk_00;
    unk_func_001FACE0_0 *unk_04;
    unk_func_001FACE0_0 *unk_08;
    unk_func_001FACE0_0 *unk_0C;
} unk_func_001FACE0_1;

typedef struct unk_func_001FACE0_3 {
    s32 unk_00;
    u8 pad_04[0x18];
} unk_func_001FACE0_3;

typedef struct unk_func_001FACE0_2 {
    u8 pad_00[0x10];
    unk_func_001FACE0_1 *unk_10;
} unk_func_001FACE0_2;

s32 fn_ucGetProcedureUltraOperator(s32);
void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
unk_func_001FACE0_2 *HIE_fn_hGetSuperObjectObject(s32);
s32 *fn_p_stEvalTree(s32, s32 *, s32 *);
s32 fn_h_StandardGameGetSuperObject(s32);
void func_001B4D70(unk_func_001FACE0_1 *);
void func_001B4750(unk_func_001FACE0_1 *);
extern s32 D_0036015C;

s32 *func_001FACE0(s32 arg0, s32 *arg1) {
    unk_func_001FACE0_1 *temp_s0;
    s32 var_s1;
    unk_func_001FACE0_0 *var_s2;
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_s5;
    s32 temp_s6;
    unk_func_001FACE0_3 sp80;
    s32 sp9C;

    temp_s5 = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp_s5), arg0, &sp9C);
    temp_s0 = HIE_fn_hGetSuperObjectObject(sp9C)->unk_10;
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp80.unk_00);
    temp_s3 = sp80.unk_00;
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp80.unk_00);
    temp_s4 = sp80.unk_00;
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp80.unk_00);
    var_s1 = fn_h_StandardGameGetSuperObject(((s32 *)sp80.unk_00)[1]);
    if (temp_s3 == 1) {
        func_001B4D70(temp_s0);
        var_s2 = temp_s0->unk_0C;
    } else {
        var_s2 = temp_s0->unk_04;
    }
    switch (temp_s4) {
    case -1:
        var_s1 = temp_s0->unk_00->unk_68;
        break;
    case 0:
        var_s1 = 0;
        break;
    case 1:
        break;
    }
    temp_s6 = var_s2->unk_68;
    var_s2->unk_68 = var_s1;
    if (temp_s3 != 1) {
        temp_s0->unk_08->unk_68 = var_s1;
        temp_s0->unk_0C->unk_68 = var_s1;
    }
    if (D_0036015C != 0 && D_0036015C != var_s1) {
        func_001B4750(temp_s0);
    }
    return arg1;
}
