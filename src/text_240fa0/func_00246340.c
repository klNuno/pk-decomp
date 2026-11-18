/* profile: o0_301_p */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00246340_0;

typedef struct {
    unk_func_00246340_0 unk_00;
    u8 pad_0C[0x28];
} unk_func_00246340_1;

typedef struct {
    s8 unk_00;
    u8 pad_01[3];
    s32 unk_04;
    s32 unk_08;
    u8 pad_0C[0xC];
    s32 unk_18;
    u8 unk_1C;
    u8 unk_1D;
    u8 pad_1E[0x16];
    unk_func_00246340_1 unk_34[100];
    u8 pad_1484[0x18];
    s32 unk_149C;
    s32 unk_14A0;
} unk_func_00246340_2;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_00246340_3;

extern s32 D_005AB800[];
extern void *D_00617310[];
extern char D_00617320[];
extern void func_0025CD20(s32, unk_func_00246340_0 *, unk_func_00246340_0 *, void *, f32);
extern void func_0024B960(unk_func_00246340_2 *, s32, void *, char *, f32);

void func_00246340(unk_func_00246340_2 *arg0) {
    switch (arg0->unk_18) {
    case 1:
        ((unk_func_00246340_3 *)&arg0->unk_34[1])->unk_00 = ((unk_func_00246340_3 *)&arg0->unk_34[2])->unk_00;
        ((unk_func_00246340_3 *)&arg0->unk_34[1])->unk_04 = ((unk_func_00246340_3 *)&arg0->unk_34[2])->unk_04;
        ((unk_func_00246340_3 *)&arg0->unk_34[1])->unk_08 = ((unk_func_00246340_3 *)&arg0->unk_34[2])->unk_08;
        func_0025CD20(0x2D, &arg0->unk_34[1].unk_00, &arg0->unk_34[1].unk_00, (void *)D_00617310[arg0->unk_1D], 4.0f);
        break;
    case 0:
        arg0->unk_149C = arg0->unk_14A0 = D_005AB800[0];
        ((unk_func_00246340_3 *)&arg0->unk_34[2])->unk_00 = ((unk_func_00246340_3 *)&arg0->unk_34[0])->unk_00;
        ((unk_func_00246340_3 *)&arg0->unk_34[2])->unk_04 = ((unk_func_00246340_3 *)&arg0->unk_34[0])->unk_04;
        ((unk_func_00246340_3 *)&arg0->unk_34[2])->unk_08 = ((unk_func_00246340_3 *)&arg0->unk_34[0])->unk_08;
        break;
    case 2:
        arg0->unk_149C = D_005AB800[0];
        break;
    case 3: {
        unk_func_00246340_0 *temp0;
        unk_func_00246340_0 *temp1;
        u8 i;
        u8 count;
        f32 temp;

        arg0->unk_149C = D_005AB800[0];
        count = (u8)(arg0->unk_1C / 2);
        for (i = 0; i < count; ++i) {
            temp0 = &arg0->unk_34[i].unk_00;
            temp1 = &arg0->unk_34[arg0->unk_1C - 1 - i].unk_00;
            temp = temp0->unk_00;
            temp0->unk_00 = temp1->unk_00;
            temp1->unk_00 = temp;
            temp = temp0->unk_04;
            temp0->unk_04 = temp1->unk_04;
            temp1->unk_04 = temp;
            temp = temp0->unk_08;
            temp0->unk_08 = temp1->unk_08;
            temp1->unk_08 = temp;
        }
        break;
    }
    case 4:
        func_0024B960(arg0, 0x6A, (void *)0, D_00617320, 0.0f);
        arg0->unk_00 = -1;
        arg0->unk_04 = arg0->unk_08 = 0;
        break;
    }
}
