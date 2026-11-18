/* profile: o0_301 */
#include "common.h"

s32 *fn_p_stEvalTree();
void func_001A4750();
void func_001EDBB0();

s32 *func_00211E30(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 type;
    s32 x;
    s32 sp30[4];
    s32 v[3];

    type = arg1[-2];
    if (type == 0xC7) {
        arg1 = fn_p_stEvalTree(arg0, arg1, sp30);
        x = sp30[0];
        func_001A4750(arg0, v, x, -1);
        arg2[0] = ((s32 *)&v)[0];
        arg2[1] = ((s32 *)&v)[1];
        arg2[2] = ((s32 *)&v)[2];
        arg2[3] = 0x15;
        return arg1;
    }
    func_001EDBB0(0x27, 0);
    return arg1;
}
