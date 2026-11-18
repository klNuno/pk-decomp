/* profile: o0_301 */
#include "common.h"

typedef struct {
    union {
        s32 i;
        f32 f;
    } unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_002459A0_0;

typedef struct {
    u8 pad_00[0x30];
    f32 unk_30;
} unk_func_002459A0_1;

s32 *fn_p_stEvalTree();
s32 fn_ucGetProcedureUltraOperator();
void fn_vGetUltraOperatorPerso();
unk_func_002459A0_1 *func_00246280(s32);

s32 *func_002459A0(s32 arg0, s32 *arg1) {
    s32 temp;
    unk_func_002459A0_1 *temp2;
    unk_func_002459A0_0 sp30;
    s32 sp48;

    temp = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp), arg0, &sp48);
    temp2 = func_00246280(sp48);
    if (temp2 != NULL) {
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp30);
        temp2->unk_30 = sp30.unk_0C == 8 ? sp30.unk_00.f : (f32)sp30.unk_00.i;
    }
    return arg1;
}
