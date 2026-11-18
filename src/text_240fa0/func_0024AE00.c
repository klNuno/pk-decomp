/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_0024AE00_0 {
    u8 pad_00[0x1488];
    s32 unk_1488;
} unk_func_0024AE00_0;

s32 fn_ucGetProcedureUltraOperator();
void fn_vGetUltraOperatorPerso();
unk_func_0024AE00_0 *func_00246280();
s32 *fn_p_stEvalTree();

s32 *func_0024AE00(s32 arg0, s32 *arg1) {
    unk_func_0024AE00_0 *p;
    u8 n;
    s32 temp;
    u8 sp40[0x1C];
    s32 sp5C;

    temp = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp), arg0, &sp5C);
    p = func_00246280(sp5C);
    if (p != NULL) {
        arg1 = fn_p_stEvalTree(arg0, arg1, sp40);
        n = sp40[0];
        if (n > 0) {
            p->unk_1488 = 1000 / n;
        } else {
            p->unk_1488 = 0xA6;
        }
    }
    return arg1;
}
