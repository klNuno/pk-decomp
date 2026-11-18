/* profile: o0 */
#include "common.h"

typedef union {
    f32 unk_00;
    s32 unk_00_s32;
} unk_00215DA0_0;

typedef struct {
    unk_00215DA0_0 unk_00, unk_04, unk_08;
    s32 unk_0C;
} unk_00215DA0_1;

extern s32 D_0035F594, D_0035F598, D_00360100, D_00360164, D_00360168, D_00360184;
extern s32 D_005AB800[];
extern unk_00215DA0_1 D_006053C0[], D_006053D0[], D_006053E0[], D_006053F0[];

s32 *fn_p_stEvalTree(s32, s32 *, unk_00215DA0_1 *);
s32 HIE_fn_hGetSuperObjectObject(s32);
s32 func_001971C0(s32);
void func_00209E50(s32);

#define COPY_00215DA0(dst, src) do { \
    ((unk_00215DA0_1 *)(u32)(dst))->unk_00.unk_00_s32 = ((const unk_00215DA0_1 *)(u32)(src))->unk_00.unk_00_s32; \
    ((unk_00215DA0_1 *)(u32)(dst))->unk_04.unk_00_s32 = ((const unk_00215DA0_1 *)(u32)(src))->unk_04.unk_00_s32; \
    ((unk_00215DA0_1 *)(u32)(dst))->unk_08.unk_00_s32 = ((const unk_00215DA0_1 *)(u32)(src))->unk_08.unk_00_s32; \
} while (0)

s32 *func_00215DA0(s32 arg0, s32 *arg1, unk_00215DA0_1 *arg2)
{
    unk_00215DA0_1 sp80;
    unk_00215DA0_1 *temp0, *temp1;
    s32 temp2, temp3, temp6;

    temp6 = arg1[-2];
    temp2 = 0;
    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    temp0 = arg2;
    if (D_006053F0->unk_00.unk_00 != temp0->unk_00.unk_00 ||
        D_006053F0->unk_04.unk_00 != temp0->unk_04.unk_00 ||
        D_006053F0->unk_08.unk_00 != temp0->unk_08.unk_00) {
        COPY_00215DA0(D_006053F0, temp0);
        temp2 = 1;
    }

    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    temp1 = arg2;
    if (D_006053E0->unk_00.unk_00 != temp1->unk_00.unk_00 ||
        D_006053E0->unk_04.unk_00 != temp1->unk_04.unk_00 ||
        D_006053E0->unk_08.unk_00 != temp1->unk_08.unk_00) {
        COPY_00215DA0(D_006053E0, temp1);
        temp2 = 1;
    }

    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    temp3 = arg2->unk_00.unk_00_s32;
    if (temp2 != 0 || D_00360164 != D_005AB800[0] || D_0035F594 != temp3 || D_00360168 != 2) {
        COPY_00215DA0(&sp80, D_006053E0);
        D_00360164 = D_005AB800[0];
        D_0035F594 = temp3;
        D_00360168 = 2;
        D_00360100 = 0;
        func_00209E50(arg0);
        COPY_00215DA0(D_006053E0, &sp80);
    }

    switch (temp6) {
    case 0x10B:
        COPY_00215DA0(arg2, D_006053D0);
        arg2->unk_0C = 0x15;
        break;
    case 0x10C:
        COPY_00215DA0(arg2, D_006053C0);
        arg2->unk_0C = 0x15;
        break;
    case 0x10D:
        arg2->unk_00.unk_00_s32 = D_00360184 == 0 ? 0 : (func_001971C0(D_00360184) != 2 ? 0 : HIE_fn_hGetSuperObjectObject(D_00360184));
        arg2->unk_0C = 0xB;
        break;
    }
    D_0035F598 = 0x40;
    return arg1;
}
