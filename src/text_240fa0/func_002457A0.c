/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_002457A0_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_002457A0_0;

typedef struct unk_func_002457A0_4 {
    f32 unk_00[3];
    u8 pad_0C[0x28];
} unk_func_002457A0_4;

typedef struct unk_func_002457A0_2 {
    u8 pad_00[0x1C];
    u8 unk_1C;
    u8 pad_1D[0x17];
    unk_func_002457A0_4 unk_34[1];
} unk_func_002457A0_2;

typedef struct unk_func_002457A0_3 {
    u16 unk_00;
    u8 pad_02[0xE];
} unk_func_002457A0_3;

s32 *fn_p_stEvalTree(s32, s32 *, unk_func_002457A0_3 *);
void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
s32 func_00208CC0(s32);
unk_func_002457A0_2 *func_00246280(s32);
extern f32 D_00617320[];

s32 *func_002457A0(s32 arg0, s32 *arg1, unk_func_002457A0_0 *arg2) {
    unk_func_002457A0_3 res;
    s32 perso;
    s32 id;
    u16 idx;
    unk_func_002457A0_2 *obj;

    id = arg1[-2];
    fn_vGetUltraOperatorPerso(func_00208CC0(id), arg0, &perso);
    arg1 = fn_p_stEvalTree(arg0, arg1, &res);
    idx = res.unk_00;
    obj = func_00246280(perso);
    if (obj != NULL) {
        if (idx < obj->unk_1C && idx >= 0) {
            arg2->unk_00 = ((s32 *)obj->unk_34[idx].unk_00)[0];
            arg2->unk_04 = ((s32 *)obj->unk_34[idx].unk_00)[1];
            arg2->unk_08 = ((s32 *)obj->unk_34[idx].unk_00)[2];
            arg2->unk_0C = 0x15;
        } else {
            arg2->unk_00 = ((s32 *)D_00617320)[0];
            arg2->unk_04 = ((s32 *)D_00617320)[1];
            arg2->unk_08 = ((s32 *)D_00617320)[2];
        }
        arg2->unk_0C = 0x15;
    } else {
        arg2->unk_00 = ((s32 *)D_00617320)[0];
        arg2->unk_04 = ((s32 *)D_00617320)[1];
        arg2->unk_08 = ((s32 *)D_00617320)[2];
    }
    arg2->unk_0C = 0x15;
    return arg1;
}
