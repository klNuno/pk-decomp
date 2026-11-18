/* profile: o0 */
#include "common.h"

typedef struct unk_func_00223060_0 {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_00223060_0;

s32 fn_p_stEvalTree(s32, s32, unk_func_00223060_0 *);
s32 fn_p_stOperatorGetPerso(s32, s32, s32 *);
s32 func_001971C0(s32);
s32 HIE_fn_hGetSuperObjectObject(s32);

s32 func_00223060(s32 arg0, s32 arg1, unk_func_00223060_0 *arg2) {
    s32 old;
    s32 perso;

    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    old = arg2->unk_00;
    arg1 = fn_p_stOperatorGetPerso(arg0, arg1, &perso);
    arg2->unk_00 = (perso == 0) ? 0 : ((func_001971C0(perso) != 2) ? 0 : HIE_fn_hGetSuperObjectObject(perso));
    arg2->unk_0C = 0xB;
    return arg1;
}
