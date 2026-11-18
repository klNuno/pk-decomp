/* profile: o0_301 */
#include "common.h"

typedef struct { s8 unk_00; u8 pad_01[7]; } unk_func_0022C0C0_0;
typedef struct { s32 unk_00; u8 pad_04[4]; } unk_func_0022C0C0_1;
typedef struct {
    union { s32 unk_00; u8 unk_00_u8; } unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_0022C0C0_2;
typedef struct { u8 pad_00[0xC]; s32 unk_0C; } unk_func_0022C0C0_3;

unk_func_0022C0C0_3 *HIE_fn_hGetSuperObjectObject(s32);
s32 fn_p_stBrainGetMind(s32);
unk_func_0022C0C0_0 *fn_p_stEvalTree(s32, unk_func_0022C0C0_0 *, unk_func_0022C0C0_2 *);
u8 func_001EA0D0(u8, s32, s32, unk_func_0022C0C0_2 *);

extern u8 D_005ACACA[], D_005ACACB[], D_005ACACC[], D_005ACACD[];

unk_func_0022C0C0_0 *func_0022C0C0(s32 arg0, unk_func_0022C0C0_0 *arg1) {
    unk_func_0022C0C0_2 temp;
    u8 unk_00;
    s32 unk_01 = ((unk_func_0022C0C0_1 *)arg1)[-1].unk_00;

    switch (unk_01) {
    case 0x17C:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp);
        D_005ACACC[0] = temp.unk_00.unk_00_u8;
        break;
    case 0x17B:
        unk_00 = (u8)arg1->unk_00;
        arg1++;
        if (D_005ACACD[0]) {
            D_005ACACA[0] = 0;
            temp.unk_00.unk_00 = D_005ACACA[0];
            temp.unk_0C = 6;
        } else {
            temp.unk_00.unk_00 = D_005ACACA[0];
        }
        temp.unk_0C = 6;
        unk_00 = func_001EA0D0(unk_00, 0, fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(arg0)->unk_0C), &temp);
        unk_00 = (u8)arg1->unk_00;
        arg1++;
        if (D_005ACACD[0]) {
            D_005ACACB[0] = 0;
            temp.unk_00.unk_00 = D_005ACACB[0];
            temp.unk_0C = 6;
        } else {
            temp.unk_00.unk_00 = D_005ACACB[0];
        }
        temp.unk_0C = 6;
        unk_00 = func_001EA0D0(unk_00, 0, fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(arg0)->unk_0C), &temp);
        break;
    case 0x17A:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp);
        if (!D_005ACACD[0]) {
            D_005ACACA[0] = temp.unk_00.unk_00_u8;
        }
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp);
        if (!D_005ACACD[0]) {
            D_005ACACB[0] = temp.unk_00.unk_00_u8;
        }
        break;
    }
    return arg1;
}
