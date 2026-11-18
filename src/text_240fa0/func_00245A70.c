/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00245A70_0 {
    u8 pad_00[0x20];
    f32 unk_20;
} unk_func_00245A70_0;

typedef struct unk_func_00245A70_1 {
    u32 unk_00;
    u8 pad_04[0x18];
} unk_func_00245A70_1;

s32 fn_ucGetProcedureUltraOperator(s32);
void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
unk_func_00245A70_0 *func_00246280(s32);
s32 *fn_p_stEvalTree(s32, s32 *, unk_func_00245A70_1 *);

s32 *func_00245A70(s32 arg0, s32 *arg1) {
    unk_func_00245A70_1 sp30;
    s32 sp4C;
    s32 temp;
    unk_func_00245A70_0 *p;

    temp = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp), arg0, &sp4C);
    p = func_00246280(sp4C);
    if (p != NULL) {
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp30);
        p->unk_20 = sp30.unk_00;
        if (p->unk_20 <= 0.0f) {
            p->unk_20 = 5.0f;
        }
    }
    return arg1;
}
