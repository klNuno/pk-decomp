/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[0x24];
    s32 unk_24;
    f32 unk_28;
} unk_func_00245B70_0;

s32 fn_ucGetProcedureUltraOperator();
void fn_vGetUltraOperatorPerso();
unk_func_00245B70_0 *func_00246280();
s32 *fn_p_stEvalTree();

s32 *func_00245B70(s32 arg0, s32 *arg1) {
    unk_func_00245B70_0 *p;
    s32 v;
    s32 temp;
    s32 sp40[7];
    s32 sp5C;

    temp = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp), arg0, &sp5C);
    p = func_00246280(sp5C);
    if (p != NULL) {
        arg1 = fn_p_stEvalTree(arg0, arg1, sp40);
        p->unk_24 = sp40[0];
        if (p->unk_24 != 0) {
            v = 0;
        } else {
            v = 30;
        }
        p->unk_28 = v;
    }
    return arg1;
}
