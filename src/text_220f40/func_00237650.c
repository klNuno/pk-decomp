/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00237650_0 {
    s16 unk_00;
    u8 pad_02[0x1A];
} unk_func_00237650_0;

s32 fn_ucGetProcedureUltraOperator();
void fn_vGetUltraOperatorPerso();
s32 *fn_p_stEvalTree();
void func_001C6F40(s32, s16);
void func_001EDBB0();

s32 *func_00237650(s32 arg0, s32 *arg1) {
    s32 sp5C;
    unk_func_00237650_0 sp40;
    s32 temp_s0;
    s16 temp_s1;
    s32 temp_s2;

    temp_s0 = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp_s0), arg0, &sp5C);
    switch (temp_s0) {
    case 0x1C8:
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp40);
        temp_s1 = sp40.unk_00;
        if (temp_s1 == -0x8000) {
            temp_s2 = -1;
        } else {
            temp_s2 = temp_s1;
        }
        func_001C6F40(sp5C, temp_s2);
        return arg1;
    case 0x1C9:
        func_001C6F40(sp5C, -0x8000);
        return arg1;
    default:
        func_001EDBB0(0x27, 0);
        return arg1;
    }
}
