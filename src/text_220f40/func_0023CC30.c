/* profile: o0_301 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_0023CC30_0;

typedef union {
    u8 unk_00_u8;
    unk_func_0023CC30_0 unk_00_v;
} unk_func_0023CC30_1;

typedef struct {
    unk_func_0023CC30_1 unk_00;
    u8 pad_0C[0x10];
} unk_func_0023CC30_2;

typedef struct {
    u8 pad_00[0x54];
    s32 unk_54;
    unk_func_0023CC30_0 unk_58;
    unk_func_0023CC30_0 unk_64;
    unk_func_0023CC30_0 unk_70;
} unk_func_0023CC30_3;

typedef struct {
    s32 unk_00;
} unk_func_0023CC30_4;

unk_func_0023CC30_4 *HIE_fn_hGetSuperObjectObject(unk_func_0023CC30_3 *);
s32 *fn_p_stEvalTree(s32, s32 *, unk_func_0023CC30_2 *);
s32 fn_ucGetProcedureUltraOperator(s32);
void fn_vGetUltraOperatorPerso(s32, s32, unk_func_0023CC30_3 **);
void func_001EDBB0(s32, s32);

s32 *func_0023CC30(s32 arg0, s32 *arg1) {
    unk_func_0023CC30_2 param;
    unk_func_0023CC30_3 *perso;
    unk_func_0023CC30_0 *v;
    s32 op;
    s32 obj;

    op = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(op), arg0, &perso);
    obj = HIE_fn_hGetSuperObjectObject(perso)->unk_00;
    switch (op) {
    case 0x22D:
        arg1 = fn_p_stEvalTree(arg0, arg1, &param);
        perso->unk_54 = param.unk_00.unk_00_u8;
        break;
    case 0x22E:
        arg1 = fn_p_stEvalTree(arg0, arg1, &param);
        v = &param.unk_00.unk_00_v;
        perso->unk_58.unk_00 = v->unk_00;
        perso->unk_58.unk_04 = v->unk_04;
        perso->unk_58.unk_08 = v->unk_08;
        arg1 = fn_p_stEvalTree(arg0, arg1, &param);
        v = &param.unk_00.unk_00_v;
        perso->unk_64.unk_00 = v->unk_00;
        perso->unk_64.unk_04 = v->unk_04;
        perso->unk_64.unk_08 = v->unk_08;
        arg1 = fn_p_stEvalTree(arg0, arg1, &param);
        v = &param.unk_00.unk_00_v;
        perso->unk_70.unk_00 = v->unk_00;
        perso->unk_70.unk_04 = v->unk_04;
        perso->unk_70.unk_08 = v->unk_08;
        break;
    default:
        func_001EDBB0(0x27, 0);
        break;
    }
    return arg1;
}
