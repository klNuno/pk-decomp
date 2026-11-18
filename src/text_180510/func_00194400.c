#include "common.h"

typedef struct {
    s16 unk_00;
    s16 unk_02;
    s16 unk_04;
} unk_func_00194400_0;

typedef struct {
    u8 pad_00[4];
    s16 unk_04;
    u8 pad_06[6];
    unk_func_00194400_0 *unk_0C;
    u8 pad_10[0x14];
    s16 *unk_24;
    s16 unk_28;
} unk_func_00194400_1;

typedef struct {
    u8 pad_00[0xC];
    s16 *unk_0C;
    unk_func_00194400_1 **unk_10;
    u8 pad_14[0xC];
    s16 unk_20;
    s16 unk_22;
} unk_func_00194400_2;

void *HMU_fn_p_vMalloc(u32, s32);
void *memset(void *, s32, u32);

void func_00194400(unk_func_00194400_2 *arg0)
{
    unk_func_00194400_1 *temp8;
    u8 temp0[0x280];
    s16 temp1;
    s16 temp2;
    s16 temp3;
    s32 temp5;
    s32 temp4;
    u8 *temp7;
    u32 temp6;
    u8 *temp10;
    u32 temp9;

    for (temp1 = 0; temp1 < arg0->unk_22; ++temp1) {
        if (arg0->unk_0C[temp1] == 1) {
            temp8 = arg0->unk_10[temp1];
            memset(temp0, 0, (arg0->unk_20 + 7) >> 3);
            for (temp2 = 0; temp2 < temp8->unk_04; ++temp2) {
                temp3 = temp8->unk_0C[temp2].unk_00;
                temp0[(u32)temp3 >> 3] |= (u8)(1 << (temp3 & 7));
                temp3 = temp8->unk_0C[temp2].unk_02;
                temp0[(u32)temp3 >> 3] |= (u8)(1 << (temp3 & 7));
                temp3 = temp8->unk_0C[temp2].unk_04;
                temp0[(u32)temp3 >> 3] |= (u8)(1 << (temp3 & 7));
            }
            temp8->unk_28 = 0;
            for (temp6 = 0; temp6 < (u32)(arg0->unk_20 + 7) >> 3; ++temp6) {
                temp7 = &temp0[temp6];
                if (*temp7 & 1) {
                    ++temp8->unk_28;
                }
                if (*temp7 & 2) {
                    ++temp8->unk_28;
                }
                if (*temp7 & 4) {
                    ++temp8->unk_28;
                }
                if (*temp7 & 8) {
                    ++temp8->unk_28;
                }
                if (*temp7 & 0x10) {
                    ++temp8->unk_28;
                }
                if (*temp7 & 0x20) {
                    ++temp8->unk_28;
                }
                if (*temp7 & 0x40) {
                    ++temp8->unk_28;
                }
                if (*temp7 & 0x80) {
                    ++temp8->unk_28;
                }
            }
            temp8->unk_24 = HMU_fn_p_vMalloc(temp8->unk_28 * 2, 0);
            temp5 = 0;
            for (temp9 = 0, temp4 = 0; temp9 < (u32)(arg0->unk_20 + 7) >> 3; temp4 += 8, ++temp9) {
                temp10 = &temp0[temp9];
                if (*temp10 & 1) {
                    temp8->unk_24[temp5++] = temp4;
                }
                if (*temp10 & 2) {
                    temp8->unk_24[temp5++] = temp4 + 1;
                }
                if (*temp10 & 4) {
                    temp8->unk_24[temp5++] = temp4 + 2;
                }
                if (*temp10 & 8) {
                    temp8->unk_24[temp5++] = temp4 + 3;
                }
                if (*temp10 & 0x10) {
                    temp8->unk_24[temp5++] = temp4 + 4;
                }
                if (*temp10 & 0x20) {
                    temp8->unk_24[temp5++] = temp4 + 5;
                }
                if (*temp10 & 0x40) {
                    temp8->unk_24[temp5++] = temp4 + 6;
                }
                if (*temp10 & 0x80) {
                    temp8->unk_24[temp5++] = temp4 + 7;
                }
            }
        }
    }
}
