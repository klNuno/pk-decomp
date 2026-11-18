/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_00243120_1 {
    u8 pad_00[0x4];
    s32 unk_04;
} unk_func_00243120_1;

typedef struct unk_func_00243120_0 {
    unk_func_00243120_1 *unk_00;
    u8 pad_04[0xC];
} unk_func_00243120_0;

s32 fn_h_StandardGameGetSuperObject(s32);
s32 *fn_p_stEvalTree(s32, s32 *, unk_func_00243120_0 *);
s32 fn_ucGetProcedureUltraOperator(s32);
void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
void func_001BEAB0(s32, s32);

s32 *func_00243120(s32 arg0, s32 *arg1) {
    s32 temp = arg1[-2];
    unk_func_00243120_0 sp30;
    s32 sp4C;
    unk_func_00243120_1 *temp2;

    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp), arg0, &sp4C);
    switch (temp) {
    case 0x2CB:
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp30);
        temp2 = sp30.unk_00;
        func_001BEAB0(sp4C, fn_h_StandardGameGetSuperObject(temp2->unk_04));
        return arg1;
    case 0x2CC:
        func_001BEAB0(sp4C, 0);
        return arg1;
    }
    return arg1;
}
