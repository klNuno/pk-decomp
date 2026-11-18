/* profile: o0_301 */
#include "common.h"

typedef union unk_func_0023D4E0_0 {
    s32 unk_00;
    s16 unk_00_s16;
    u8 pad_00[0x1C];
} unk_func_0023D4E0_0;

s32 *HIE_fn_hGetSuperObjectObject(s32);
s32 *fn_p_stEvalTree(s32, s32 *, unk_func_0023D4E0_0 *);
s32 fn_ucGetProcedureUltraOperator(s32);
void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
void func_0023D600(s32, s16);
void func_0023D630(s32, s32);

s32 *func_0023D4E0(s32 arg0, s32 *arg1) {
    unk_func_0023D4E0_0 sp40;
    s32 sp5C;
    s32 temp_s0;
    s32 temp_s1;
    s16 temp_s2;

    temp_s0 = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp_s0), arg0, &sp5C);
    switch (temp_s0) {
    case 14:
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp40);
        temp_s1 = sp40.unk_00;
        if (temp_s1 != 0) {
            func_0023D630(*HIE_fn_hGetSuperObjectObject(sp5C), temp_s1);
        }
        break;
    case 15:
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp40);
        temp_s2 = sp40.unk_00_s16;
        func_0023D600(*HIE_fn_hGetSuperObjectObject(sp5C), temp_s2);
        break;
    }
    return arg1;
}
