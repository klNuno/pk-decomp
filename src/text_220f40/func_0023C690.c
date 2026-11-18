/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 unk_00;
    u8 pad_01[0xF];
} unk_func_0023C690_0;

typedef struct {
    u8 pad_00[0x134];
    u8 unk_134;
    u8 unk_135;
} unk_func_0023C690_1;

typedef struct {
    u8 pad_00[0x2C];
    s32 unk_2C;
} unk_func_0023C690_2;

s32 fn_ucGetProcedureUltraOperator();
void fn_vGetUltraOperatorPerso();
unk_func_0023C690_1 **HIE_fn_hGetSuperObjectObject();
s32 *fn_p_stEvalTree();
void func_001EDBB0();

s32 *func_0023C690(s32 arg0, s32 *arg1) {
    unk_func_0023C690_0 sp60;
    unk_func_0023C690_2 *perso;
    s32 op;
    unk_func_0023C690_1 *obj;
    u8 a;
    u8 b;
    u8 c;

    op = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(op), arg0, &perso);
    obj = *HIE_fn_hGetSuperObjectObject(perso);
    switch (op) {
    case 0x227:
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp60);
        a = sp60.unk_00;
        if (a > 0) {
            obj->unk_135 = a;
        } else {
            obj->unk_135 = 1;
        }
        break;
    case 0x228:
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp60);
        b = sp60.unk_00;
        obj->unk_134 = b;
        break;
    case 0x229:
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp60);
        c = sp60.unk_00;
        if (c) {
            perso->unk_2C |= 0x200;
        } else {
            perso->unk_2C &= ~0x200;
        }
        break;
    default:
        func_001EDBB0(0x27, 0);
        return arg1;
    }
    return arg1;
}
