/* profile: o0_301 */
#include "common.h"

s32 fn_ucGetProcedureUltraOperator();
void fn_vGetUltraOperatorPerso();
s32 *fn_p_stEvalTree();
void func_00230BB0(f32);

s32 *func_00230B20(s32 arg0, s32 *arg1) {
    s32 temp;
    f32 node[6];
    s32 perso;
    f32 val;

    temp = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp), arg0, &perso);
    arg1 = fn_p_stEvalTree(arg0, arg1, node);
    val = node[0];
    func_00230BB0(val);
    return arg1;
}
