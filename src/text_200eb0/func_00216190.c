/* profile: o0_301 */
#include "common.h"

typedef union {
    struct {
        f32 unk_00;
        f32 unk_04;
        f32 unk_08;
    } unk_00;
    u32 unk_01[3];
} unk_00216190_0;

typedef struct {
    union {
        unk_00216190_0 unk_00;
        s32 unk_01;
        u16 unk_02;
    } unk_00;
    s32 unk_0C;
} unk_00216190_1;

s32 fn_p_stEvalTree(s32, s32, unk_00216190_1 *);
void func_00209E50(s32);
extern s32 D_0035F594;
extern s32 D_0035F598;
extern s32 D_00360100;
extern s32 D_00360164;
extern s32 D_00360168;
extern s32 D_005AB800[];
extern unk_00216190_0 D_006053D0;
extern unk_00216190_0 D_006053E0;
extern unk_00216190_0 D_006053F0;

s32 func_00216190(s32 arg0, s32 arg1, unk_00216190_1 *arg2) {
    unk_00216190_0 *temp0;
    unk_00216190_0 *temp1;
    s32 temp2;
    s32 temp3;
    u32 temp4;
    unk_00216190_0 temp5;

    temp2 = 0;
    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    temp0 = &arg2->unk_00.unk_00;
    if (D_006053F0.unk_00.unk_00 != temp0->unk_00.unk_00 ||
        D_006053F0.unk_00.unk_04 != temp0->unk_00.unk_04 ||
        D_006053F0.unk_00.unk_08 != temp0->unk_00.unk_08) {
        ((u32 *)&D_006053F0)[0] = ((u32 *)temp0)[0];
        ((u32 *)&D_006053F0)[1] = ((u32 *)temp0)[1];
        ((u32 *)&D_006053F0)[2] = ((u32 *)temp0)[2];
        temp2 = 1;
    }
    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    temp1 = &arg2->unk_00.unk_00;
    if (D_006053E0.unk_00.unk_00 != temp1->unk_00.unk_00 ||
        D_006053E0.unk_00.unk_04 != temp1->unk_00.unk_04 ||
        D_006053E0.unk_00.unk_08 != temp1->unk_00.unk_08) {
        ((u32 *)&D_006053E0)[0] = ((u32 *)temp1)[0];
        ((u32 *)&D_006053E0)[1] = ((u32 *)temp1)[1];
        ((u32 *)&D_006053E0)[2] = ((u32 *)temp1)[2];
        temp2 = 1;
    }
    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    temp3 = arg2->unk_00.unk_01;
    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    temp4 = arg2->unk_00.unk_02;
    if (temp2 || D_00360164 != D_005AB800[0] || D_0035F594 != temp3 || D_00360168 != 1) {
        ((u32 *)&temp5)[0] = ((u32 *)&D_006053E0)[0];
        ((u32 *)&temp5)[1] = ((u32 *)&D_006053E0)[1];
        ((u32 *)&temp5)[2] = ((u32 *)&D_006053E0)[2];
        D_00360100 = temp4;
        D_00360164 = D_005AB800[0];
        D_0035F594 = temp3;
        D_00360168 = 1;
        func_00209E50(arg0);
        ((u32 *)&D_006053E0)[0] = ((u32 *)&temp5)[0];
        ((u32 *)&D_006053E0)[1] = ((u32 *)&temp5)[1];
        ((u32 *)&D_006053E0)[2] = ((u32 *)&temp5)[2];
        D_00360100 = 0;
    }
    D_0035F598 = 0x40;
    ((u32 *)&arg2->unk_00.unk_00)[0] = ((u32 *)&D_006053D0)[0];
    ((u32 *)&arg2->unk_00.unk_00)[1] = ((u32 *)&D_006053D0)[1];
    ((u32 *)&arg2->unk_00.unk_00)[2] = ((u32 *)&D_006053D0)[2];
    arg2->unk_0C = 0x15;
    return arg1;
}
