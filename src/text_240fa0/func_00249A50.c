/* profile: o0_301_p */
#include "common.h"

typedef struct {
    f32 unk_00, unk_04, unk_08;
} unk_func_00249A50_0;

typedef struct {
    unk_func_00249A50_0 unk_00, unk_0C, unk_18;
    u8 pad_24[0x10];
} unk_func_00249A50_1;

typedef struct {
    u8 pad_00[0x1C];
    u8 unk_1C, unk_1D;
    u8 pad_1E[0xE];
    f32 unk_2C;
    u8 pad_30[4];
    unk_func_00249A50_1 unk_34[];
} unk_func_00249A50_2;

typedef struct {
    f32 unk_00;
    unk_func_00249A50_0 unk_04;
} unk_func_00249A50_3;

extern f32 D_00605FB8[], D_00605FBC[], D_00605FC0[];
extern f32 D_00605FC8[], D_00605FCC[], D_00605FD0[];
extern u32 D_00617310[];

unk_func_00249A50_3 *func_002494A0(unk_func_00249A50_2 *, u16, u16);
void func_002471B0(unk_func_00249A50_2 *, u8, u8);
void func_0025CD20(s32, unk_func_00249A50_0 *, unk_func_00249A50_0 *, void *, f32);

s32 func_00249A50(unk_func_00249A50_2 *arg0) {
    u16 temp0;
    s16 temp1;
    unk_func_00249A50_3 *temp2;
    s32 temp3;
    u16 temp4;

    temp3 = 0;
    temp4 = arg0->unk_1C;
    temp2 = NULL;
    temp0 = 0;
    if (3 < temp4) {
        temp1 = -1;
        while (temp3 == 0 && temp1 < temp4 - 2) {
            temp1 += 1;
            for (temp0 = 0; temp0 < temp4 - 2; temp0++) {
                if (temp1 != temp0 && temp1 != temp0 - 1 && temp1 != temp0 + 1 &&
                    !((temp2 = func_002494A0(arg0, (u16)temp1, temp0))->unk_00 < 0.0f) &&
                    temp2->unk_00 < arg0->unk_2C) {
                    temp3 = 1;
                    break;
                }
            }
        }
        if (temp3) {
            if (temp0 < temp1) {
                u16 temp5 = (u16)temp1;
                temp1 = (s16)temp0;
                temp0 = temp5;
            }

            D_00605FC8[0] = arg0->unk_34[temp1 + 1].unk_00.unk_00 - arg0->unk_34[temp1].unk_00.unk_00;
            D_00605FCC[0] = arg0->unk_34[temp1 + 1].unk_00.unk_04 - arg0->unk_34[temp1].unk_00.unk_04;
            D_00605FD0[0] = arg0->unk_34[temp1 + 1].unk_00.unk_08 - arg0->unk_34[temp1].unk_00.unk_08;
            D_00605FB8[0] = arg0->unk_34[temp0].unk_00.unk_00 - arg0->unk_34[temp0 + 1].unk_00.unk_00;
            D_00605FBC[0] = arg0->unk_34[temp0].unk_00.unk_04 - arg0->unk_34[temp0 + 1].unk_00.unk_04;
            D_00605FC0[0] = arg0->unk_34[temp0].unk_00.unk_08 - arg0->unk_34[temp0 + 1].unk_00.unk_08;

            ((u32 *)&arg0->unk_34[temp1 + 1].unk_00)[0] = ((u32 *)&temp2->unk_04)[0];
            ((u32 *)&arg0->unk_34[temp1 + 1].unk_00)[1] = ((u32 *)&temp2->unk_04)[1];
            ((u32 *)&arg0->unk_34[temp1 + 1].unk_00)[2] = ((u32 *)&temp2->unk_04)[2];

            arg0->unk_34[temp1 + 1].unk_18.unk_00 = arg0->unk_34[temp1 + 1].unk_18.unk_00 + arg0->unk_34[temp0].unk_18.unk_00;
            arg0->unk_34[temp1 + 1].unk_18.unk_04 = arg0->unk_34[temp1 + 1].unk_18.unk_04 + arg0->unk_34[temp0].unk_18.unk_04;
            arg0->unk_34[temp1 + 1].unk_18.unk_08 = arg0->unk_34[temp1 + 1].unk_18.unk_08 + arg0->unk_34[temp0].unk_18.unk_08;
            arg0->unk_34[temp1 + 1].unk_18.unk_00 = 0.5f * arg0->unk_34[temp1 + 1].unk_18.unk_00;
            arg0->unk_34[temp1 + 1].unk_18.unk_04 = 0.5f * arg0->unk_34[temp1 + 1].unk_18.unk_04;
            arg0->unk_34[temp1 + 1].unk_18.unk_08 = 0.5f * arg0->unk_34[temp1 + 1].unk_18.unk_08;
            arg0->unk_34[temp1 + 1].unk_0C.unk_00 = 0.3f * arg0->unk_34[temp1 + 1].unk_18.unk_00;
            arg0->unk_34[temp1 + 1].unk_0C.unk_04 = 0.3f * arg0->unk_34[temp1 + 1].unk_18.unk_04;
            arg0->unk_34[temp1 + 1].unk_0C.unk_08 = 0.3f * arg0->unk_34[temp1 + 1].unk_18.unk_08;
            func_002471B0(arg0, (u8)(temp1 + 2), (u8)temp0);
            func_0025CD20(0x2D, &temp2->unk_04, &temp2->unk_04, (void *)D_00617310[arg0->unk_1D], 4.0f);
        }
    }
    return temp3;
}
