/* profile: o0_301 */
#include "common.h"

typedef struct {
    s32 *unk_00;
    u8 pad_04[0xC];
} unk_func_00205630_0;

s32 *fn_p_stEvalTree();
s32 fn_h_StandardGameGetSuperObject();
s8 func_001EC5D0();
s8 func_001EC690();
s8 func_001EC760();

s32 *func_00205630(s32 arg0, s32 *arg1, s32 *arg2) {
    unk_func_00205630_0 a;
    unk_func_00205630_0 b;
    s32 op;

    op = arg1[-2];
    switch (op) {
    case 0x26:
        arg1 = fn_p_stEvalTree(arg0, arg1, &a);
        arg1 = fn_p_stEvalTree(arg0, arg1, &b);
        *arg2 = func_001EC5D0(a.unk_00, fn_h_StandardGameGetSuperObject(b.unk_00[1]));
        return arg1;
    case 0x27:
        arg1 = fn_p_stEvalTree(arg0, arg1, &a);
        arg1 = fn_p_stEvalTree(arg0, arg1, &b);
        *arg2 = func_001EC690(a.unk_00, b.unk_00);
        return arg1;
    case 0x28:
        arg1 = fn_p_stEvalTree(arg0, arg1, &a);
        arg1 = fn_p_stEvalTree(arg0, arg1, &b);
        *arg2 = func_001EC760(a.unk_00, b.unk_00);
        return arg1;
    case 0x29:
        arg1 = fn_p_stEvalTree(arg0, arg1, &a);
        *arg2 = *(u8 *)a.unk_00 == 0;
        return arg1;
    default:
        *arg2 = 0;
        return arg1;
    }
}
