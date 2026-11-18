#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_00179E70_0;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    u32 unk_0C;
} unk_00179E70_1;

extern s32 D_0035FC98;
extern u8 *D_0035FCC4;
extern u32 (*D_0035FCE0)[4];
extern unk_00179E70_0 *D_0035FCF0;
extern unk_00179E70_1 *D_0035FCD0;
extern f32 D_0036EE20[], D_0036EE24[], D_0036EE28[];
extern f32 D_0036EE30[], D_0036EE34[], D_0036EE38[];

void func_001559E0(unk_00179E70_0 *, void *, unk_00179E70_0 *);

void func_00179E70(unk_00179E70_0 *arg0, unk_00179E70_0 *arg1) {
    u32 (*temp0)[4] = D_0035FCE0;
    unk_00179E70_0 *temp1 = D_0035FCF0;
    unk_00179E70_1 *temp2 = D_0035FCD0;
    f32 temp3 = arg1->unk_0C;

    if (D_0035FC98 != 0) {
        unk_00179E70_0 sp70, sp80;
        f32 temp;

        sp70.unk_00 = arg0->unk_00;
        sp70.unk_04 = arg0->unk_04;
        sp70.unk_08 = arg0->unk_08;
        func_001559E0(&sp80, D_0035FCC4 + 0x10, &sp70);
        temp = sp80.unk_08 * sp80.unk_08;
        if (temp <= 9.0f) {
            temp3 = 0.0f;
        } else if (temp < 25.0f) {
            temp3 *= (temp - 9.0f) / 16.0f;
        }
    }

    temp1[0].unk_00 = arg1->unk_00;
    temp1[0].unk_04 = arg1->unk_04;
    temp1[0].unk_08 = arg1->unk_08;
    temp1[0].unk_0C = temp3;

    temp1[1].unk_00 = arg1->unk_00;
    temp1[1].unk_04 = arg1->unk_04;
    temp1[1].unk_08 = arg1->unk_08;
    temp1[1].unk_0C = temp3;

    temp1[2].unk_00 = arg1->unk_00;
    temp1[2].unk_04 = arg1->unk_04;
    temp1[2].unk_08 = arg1->unk_08;
    temp1[2].unk_0C = temp3;

    temp1[3].unk_00 = arg1->unk_00;
    temp1[3].unk_04 = arg1->unk_04;
    temp1[3].unk_08 = arg1->unk_08;
    temp1[3].unk_0C = temp3;

    temp1[4].unk_00 = arg1->unk_00;
    temp1[4].unk_04 = arg1->unk_04;
    temp1[4].unk_08 = arg1->unk_08;
    temp1[4].unk_0C = temp3;

    temp1[5].unk_00 = arg1->unk_00;
    temp1[5].unk_04 = arg1->unk_04;
    temp1[5].unk_08 = arg1->unk_08;
    temp1[5].unk_0C = temp3;

    temp0[0][0] = 0;
    temp0[0][1] = 0;
    temp0[1][0] = 0x3F800000;
    temp0[1][1] = 0;
    temp0[2][0] = 0x3F800000;
    temp0[2][1] = 0x3F800000;
    temp0[3][0] = 0;
    temp0[3][1] = 0;
    temp0[4][0] = 0x3F800000;
    temp0[4][1] = 0x3F800000;
    temp0[5][0] = 0;
    temp0[5][1] = 0x3F800000;

    temp2[0].unk_00 = (arg0->unk_00 - D_0036EE30[0]) - D_0036EE20[0];
    temp2[0].unk_04 = (arg0->unk_04 - D_0036EE34[0]) - D_0036EE24[0];
    temp2[0].unk_08 = (arg0->unk_08 - D_0036EE38[0]) - D_0036EE28[0];
    temp2[0].unk_0C = 0x3F800000;

    temp2[1].unk_00 = (arg0->unk_00 + D_0036EE30[0]) - D_0036EE20[0];
    temp2[1].unk_04 = (arg0->unk_04 + D_0036EE34[0]) - D_0036EE24[0];
    temp2[1].unk_08 = (arg0->unk_08 + D_0036EE38[0]) - D_0036EE28[0];
    temp2[1].unk_0C = 0x3F800000;

    temp2[2].unk_00 = D_0036EE20[0] + (arg0->unk_00 + D_0036EE30[0]);
    temp2[2].unk_04 = D_0036EE24[0] + (arg0->unk_04 + D_0036EE34[0]);
    temp2[2].unk_08 = D_0036EE28[0] + (arg0->unk_08 + D_0036EE38[0]);
    temp2[2].unk_0C = 0x3F800000;

    temp2[3].unk_00 = (arg0->unk_00 - D_0036EE30[0]) - D_0036EE20[0];
    temp2[3].unk_04 = (arg0->unk_04 - D_0036EE34[0]) - D_0036EE24[0];
    temp2[3].unk_08 = (arg0->unk_08 - D_0036EE38[0]) - D_0036EE28[0];
    temp2[3].unk_0C = 0x3F800000;

    temp2[4].unk_00 = D_0036EE20[0] + (arg0->unk_00 + D_0036EE30[0]);
    temp2[4].unk_04 = D_0036EE24[0] + (arg0->unk_04 + D_0036EE34[0]);
    temp2[4].unk_08 = D_0036EE28[0] + (arg0->unk_08 + D_0036EE38[0]);
    temp2[4].unk_0C = 0x3F800000;

    temp2[5].unk_00 = D_0036EE20[0] + (arg0->unk_00 - D_0036EE30[0]);
    temp2[5].unk_04 = D_0036EE24[0] + (arg0->unk_04 - D_0036EE34[0]);
    temp2[5].unk_08 = D_0036EE28[0] + (arg0->unk_08 - D_0036EE38[0]);
    temp2[5].unk_0C = 0x3F800000;
    D_0035FCE0 = temp0 + 6;
    D_0035FCF0 = temp1 + 6;
    D_0035FCD0 = temp2 + 6;
}
