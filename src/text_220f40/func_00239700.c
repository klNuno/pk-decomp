/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00239700_0 {
    u8 pad_00[0x4];
    s32 unk_04;
} unk_func_00239700_0;

typedef struct unk_func_00239700_1 {
    s32 unk_00;
    u8 pad_04[0xC];
} unk_func_00239700_1;

unk_func_00239700_0 *HIE_fn_hGetSuperObjectObject(s32);
s32 *fn_p_stEvalTree(s32, s32 *, unk_func_00239700_1 *);
s32 fn_ucGetProcedureUltraOperator(s32);
void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
s32 func_001971C0(s32);
void func_001BEE50(s32, u8);

s32 *func_00239700(s32 arg0, s32 *arg1) {
    s32 temp = arg1[-2];
    s32 sp6C;
    unk_func_00239700_0 *temp2;
    unk_func_00239700_1 sp50;
    s32 temp3;

    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp), arg0, &sp6C);
    temp2 = func_001971C0(sp6C) != 2 ? NULL : HIE_fn_hGetSuperObjectObject(sp6C);
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp50);
    temp3 = sp50.unk_00;
    if (temp2 != NULL && temp2->unk_04 != 0) {
        func_001BEE50(temp2->unk_04, temp3);
    }
    return arg1;
}
