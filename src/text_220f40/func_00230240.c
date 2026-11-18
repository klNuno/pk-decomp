/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00230240_0 {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_00230240_0;

typedef struct unk_func_00230240_1 {
    unk_func_00230240_0 *unk_00;
    u8 pad_04[0xC];
} unk_func_00230240_1;

typedef struct unk_func_00230240_2 {
    u8 pad_00[8];
    s32 unk_08;
} unk_func_00230240_2;

unk_func_00230240_2 *HIE_fn_hGetSuperObjectObject(s32);
s32 fn_h_StandardGameGetSuperObject(s32);
s32 *fn_p_stEvalTree(s32, s32 *, unk_func_00230240_1 *);
s32 fn_ucGetProcedureUltraOperator(s32);
void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
void func_00148D00(s32, s32);
void func_00148D70(s32, s32, s32);
s32 func_001B84B0(s32);

s32 *func_00230240(s32 arg0, s32 *arg1) {
    unk_func_00230240_1 sp50;
    s32 sp6C;
    s32 obj;
    s32 p;
    s32 op;
    s32 so;

    op = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(op), arg0, &sp6C);
    p = HIE_fn_hGetSuperObjectObject(sp6C)->unk_08;
    if (p == 0) {
        return arg1;
    }
    obj = func_001B84B0(p);
    switch (op) {
    case 0x142:
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp50);
        so = fn_h_StandardGameGetSuperObject(sp50.unk_00->unk_04);
        func_00148D70(obj, sp6C, so);
        break;
    case 0x143:
        func_00148D00(obj, sp6C);
        break;
    }
    return arg1;
}
