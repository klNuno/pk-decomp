/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u8 pad_00[0x1C];
    s32 unk_1C;
} unk_Q_0;

s32 fn_ucGetProcedureUltraOperator();
void fn_vGetUltraOperatorPerso();
unk_Q_0 *HIE_fn_hGetSuperObjectObject();
s32 *fn_p_stEvalTree();
void func_001BA7B0();

s32 *func_002374A0(s32 arg0, s32 *arg1) {
    s32 a;
    s32 b;
    s32 mode;
    s32 c;
    s32 temp;
    s32 obj;
    s32 v[7];
    s32 perso;

    temp = arg1[-2];
    a = -1;
    b = -1;
    mode = -1;
    c = -1;
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp), arg0, &perso);
    obj = HIE_fn_hGetSuperObjectObject(perso)->unk_1C;
    switch (temp) {
    case 0x1B7:
        mode = 0;
        a = 0;
        b = 0;
        c = 0;
        break;
    case 0x1B8:
        mode = 1;
        arg1 = fn_p_stEvalTree(arg0, arg1, v);
        a = v[0];
        b = 0;
        c = 0;
        break;
    case 0x1B9:
        mode = 2;
        arg1 = fn_p_stEvalTree(arg0, arg1, v);
        a = v[0];
        arg1 = fn_p_stEvalTree(arg0, arg1, v);
        b = v[0];
        arg1 = fn_p_stEvalTree(arg0, arg1, v);
        c = v[0];
        break;
    }
    func_001BA7B0(obj, mode, a, b, c);
    return arg1;
}
