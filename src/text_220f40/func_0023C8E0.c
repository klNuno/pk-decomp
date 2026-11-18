/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 unk_00;
    u8 pad_01[0xF];
} unk_func_0023C8E0_0;

s32 *HIE_fn_hGetSuperObjectObject(s32);
s32 fn_p_stEvalTree(s32, s32, unk_func_0023C8E0_0 *);
s32 fn_ucGetProcedureUltraOperator(s32);
void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
void func_001EDBB0(s32, s32);
void func_0023C9D0(s32, u8);

s32 func_0023C8E0(s32 arg0, s32 arg1) {
    s32 id;
    s32 obj;
    u8 v;
    unk_func_0023C8E0_0 res;
    s32 perso;

    id = ((s32 *)arg1)[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(id), arg0, &perso);
    obj = *HIE_fn_hGetSuperObjectObject(perso);
    switch (id) {
    case 0x1CC:
        arg1 = fn_p_stEvalTree(arg0, arg1, &res);
        v = res.unk_00;
        func_0023C9D0(obj, v);
        break;
    default:
        func_001EDBB0(0x27, 0);
        break;
    }
    return arg1;
}
