/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001FD0D0_0 {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_001FD0D0_0;

s32 fn_ucGetProcedureUltraOperator();
void fn_vGetUltraOperatorPerso();
unk_func_001FD0D0_0 *HIE_fn_hGetSuperObjectObject();
s32 *fn_p_stEvalTree();
void func_001B5FB0(s32, u8);

s32 *func_001FD0D0(s32 arg0, s32 *arg1) {
    s32 a;
    s32 temp;
    s64 b;
    s32 sp40[7];
    s32 sp5C;

    temp = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp), arg0, &sp5C);
    a = HIE_fn_hGetSuperObjectObject(sp5C)->unk_10;
    arg1 = fn_p_stEvalTree(arg0, arg1, sp40);
    b = sp40[0];
    func_001B5FB0(a, b);
    return arg1;
}
