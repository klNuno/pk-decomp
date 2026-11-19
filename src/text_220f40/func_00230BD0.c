/* profile: o0_301 */
#include "common.h"

typedef union {
    s32 i;
    f32 f;
} unk_func_00230BD0_1;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_00230BD0_0;

s32 fn_ucGetProcedureUltraOperator();
void fn_vGetUltraOperatorPerso();
s32 *fn_p_stEvalTree();
unk_func_00230BD0_0 *HIE_fn_hGetSuperObjectObject();
s32 func_0019ABC0();
void func_001BFBA0();
s32 *func_00230DB0();
f32 *func_00230DE0();

s32 *func_00230BD0(s32 arg0, s32 *arg1) {
    s32 *p;
    unk_func_00230BD0_1 node[6];
    s32 perso;
    f32 val;
    s32 b;
    s32 flags;
    s32 so;
    s32 op;

    op = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(op), arg0, &perso);
    switch (op) {
    case 0x161:
        so = HIE_fn_hGetSuperObjectObject(perso)->unk_04;
        flags = func_0019ABC0(so);
        (void)flags;
        arg1 = fn_p_stEvalTree(arg0, arg1, node);
        b = node[0].i;
        if (b) {
            flags |= 0x100;
        } else {
            flags &= ~0x100;
        }
        func_001BFBA0(so, flags);
        break;
    case 0x162:
        arg1 = fn_p_stEvalTree(arg0, arg1, node);
        val = node[0].f;
        *func_00230DE0(perso) = val;
        break;
    case 0x163:
        arg1 = fn_p_stEvalTree(arg0, arg1, node);
        p = (s32 *)node;
        func_00230DB0(perso)[0] = p[0];
        func_00230DB0(perso)[1] = p[1];
        func_00230DB0(perso)[2] = p[2];
        break;
    default:
        return arg1;
    }
    return arg1;
}
