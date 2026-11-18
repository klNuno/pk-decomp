/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[0x148C];
    s32 unk_148C;
} unk_func_0024AEE0_0;

s32 *fn_p_stEvalTree(s32, s32 *, s32 *);
u8 fn_ucGetProcedureUltraOperator(s32);
void fn_vGetUltraOperatorPerso(u8, s32, s32 *);
unk_func_0024AEE0_0 *func_00246280(s32);

s32 *func_0024AEE0(s32 arg0, s32 *arg1) {
    unk_func_0024AEE0_0 *temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 sp40[4];
    s32 sp5C;

    temp_s2 = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp_s2), arg0, &sp5C);
    temp_s0 = func_00246280(sp5C);
    if (temp_s0 != NULL) {
        arg1 = fn_p_stEvalTree(arg0, arg1, sp40);
        temp_s1 = sp40[0];
        if (temp_s1 != 0) {
            temp_s0->unk_148C = temp_s1;
        } else {
            temp_s0->unk_148C = 0x7D0;
        }
    }
    return arg1;
}
