#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_002588A0_0;

typedef struct {
    unk_func_002588A0_0 unk_00[100];
    f32 unk_4B0[100];
    u32 unk_640;
    s32 unk_644;
    f32 unk_648;
} unk_func_002588A0_1;

extern unk_func_002588A0_1 D_00618AE0[];

void func_002588A0(u32 arg0, const unk_func_002588A0_0 *arg1, s32 arg2, f32 arg3, f32 arg4) {
    unk_func_002588A0_1 *temp0;
    u32 i;
    unk_func_002588A0_0 *temp1;
    unk_func_002588A0_0 *temp2;
    unk_func_002588A0_0 *temp4;
    unk_func_002588A0_0 *temp5;
    u32 temp3;

    if (arg0 >= 51) {
        return;
    }
    temp0 = &D_00618AE0[arg0];
    temp0->unk_644 = arg2;
    temp3 = temp0->unk_640;
    if (temp3 != 0) {
        u32 temp6 = temp3 * 12;
        temp6 += (u32)temp0;
        temp1 = (unk_func_002588A0_0 *)temp6;
        {
            const f32 temp7 = arg1->unk_00;
            const f32 temp8 = temp1[-1].unk_00;
            if (temp7 == temp8 &&
                arg1->unk_04 == temp1[-1].unk_04 &&
                arg1->unk_08 == temp1[-1].unk_08) {
                return;
            }
        }
    }
    if (temp3 < 100) {
        temp2 = &temp0->unk_00[temp3];
        temp0->unk_4B0[temp3] = arg3;
        temp0->unk_640++;
    } else {
        for (i = 0; i < 99; i++) {
            temp5 = &temp0->unk_00[i];
            temp4 = &temp0->unk_00[i + 1];
            temp5->unk_00 = temp4->unk_00;
            temp5->unk_04 = temp4->unk_04;
            temp5->unk_08 = temp4->unk_08;
            temp0->unk_4B0[i] = temp0->unk_4B0[i + 1];
        }
        temp2 = &temp0->unk_00[99];
        temp0->unk_4B0[99] = arg3;
    }
    temp0->unk_648 = arg4;
    temp2->unk_00 = arg1->unk_00;
    temp2->unk_04 = arg1->unk_04;
    temp2->unk_08 = arg1->unk_08;
}
