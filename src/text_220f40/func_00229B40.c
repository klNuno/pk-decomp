/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00229B40_0 {
    s32 unk_00;
    s32 unk_04;
    u8 unk_08;
    u8 pad_09[0x17];
    u8 unk_20;
    u8 pad_21[0x3];
} unk_func_00229B40_0;

s32 fn_ucGetProcedureUltraOperator(s32);
void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
s32 *fn_p_stEvalTree(s32, s32 *, s32 **);
s32 fn_h_StandardGameGetSuperObject(s32);
s32 *func_001EB720(s32 *);
extern u16 D_003601B8;
extern unk_func_00229B40_0 D_00605970[];

s32 *func_00229B40(s32 arg0, s32 *arg1) {
    unk_func_00229B40_0 *temp2;
    s32 temp;
    s32 *sp30[7];
    s32 sp4C;

    temp = arg1[-2];
    sp4C = arg0;
    if (D_003601B8 >= 20) {
        return func_001EB720(arg1);
    }
    temp2 = &D_00605970[D_003601B8];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp), arg0, &sp4C);
    temp2->unk_00 = sp4C;
    arg1 = fn_p_stEvalTree(arg0, arg1, sp30);
    temp2->unk_04 = fn_h_StandardGameGetSuperObject(sp30[0][1]);
    temp2->unk_08 = 0xFF;
    temp2->unk_20 = 2;
    D_003601B8++;
    return arg1;
}
