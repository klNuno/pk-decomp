/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001FB230_0 {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_001FB230_0;

s32 fn_ucGetProcedureUltraOperator();
void fn_vGetUltraOperatorPerso();
unk_func_001FB230_0 *HIE_fn_hGetSuperObjectObject();
s32 *fn_p_stEvalTree();
void func_001FA2F0(s32, s32, u8);

s32 *func_001FB230(s32 arg0, s32 *arg1) {
    s32 a;
    s32 b;
    s32 c;
    s32 temp;
    u8 flag;
    s32 sp60[7];
    s32 sp7C;

    temp = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp), arg0, &sp7C);
    a = HIE_fn_hGetSuperObjectObject(sp7C)->unk_10;
    arg1 = fn_p_stEvalTree(arg0, arg1, sp60);
    b = sp60[0];
    arg1 = fn_p_stEvalTree(arg0, arg1, sp60);
    c = sp60[0];
    if (c == 0) {
        flag = 0;
    } else {
        flag = 1;
    }
    func_001FA2F0(a, b, flag);
    return arg1;
}
