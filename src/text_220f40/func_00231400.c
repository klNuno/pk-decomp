/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00231400_0 {
    s32 unk_00;
    u8 pad_04[0xC];
} unk_func_00231400_0;

s32 *fn_p_stEvalTree(s32, s32 *, unk_func_00231400_0 *);
s32 fn_ucGetProcedureUltraOperator(s32);
void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
void func_0019A2C0(s32, s32);
s32 func_001C2550(s32);

s32 *func_00231400(s32 arg0, s32 *arg1) {
    unk_func_00231400_0 sp20;
    s32 sp3C;
    s32 temp_s0;

    temp_s0 = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp_s0), arg0, &sp3C);
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp20);
    if (sp20.unk_00 != 0) {
        func_0019A2C0(sp3C, func_001C2550(sp3C) & ~1);
    } else {
        func_0019A2C0(sp3C, func_001C2550(sp3C) | 1);
    }
    return arg1;
}
