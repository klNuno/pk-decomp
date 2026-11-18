/* profile: o0_301_p */
#include "common.h"

typedef union unk_func_001FC690_0 {
    f32 unk_00[3];
    s32 unk_00_words[3];
} unk_func_001FC690_0;

typedef struct unk_func_001FC690_1 {
    u8 pad_00[0x20];
    unk_func_001FC690_0 unk_20;
    u8 pad_2C[0x24];
    unk_func_001FC690_0 unk_50;
    u8 pad_5C[0x78];
} unk_func_001FC690_1;

typedef struct unk_func_001FC690_2 {
    u8 pad_00[0x18];
    f32 unk_18;
    f32 unk_1C;
    u8 pad_20[0x48];
    s32 unk_68;
    u8 pad_6C[6];
    u16 unk_72;
} unk_func_001FC690_2;

typedef struct unk_func_001FC690_5 {
    u8 pad_00[0x72];
    u16 unk_72;
} unk_func_001FC690_5;

typedef struct unk_func_001FC690_3 {
    u8 pad_00[4];
    unk_func_001FC690_5 *unk_04;
    unk_func_001FC690_5 *unk_08;
    unk_func_001FC690_2 *unk_0C;
    u8 pad_10[0x24];
    unk_func_001FC690_0 unk_34;
} unk_func_001FC690_3;

typedef struct unk_func_001FC690_4 {
    u8 pad_00[0x10];
    unk_func_001FC690_3 *unk_10;
    u8 pad_14[4];
    s32 unk_18;
} unk_func_001FC690_4;

unk_func_001FC690_4 *HIE_fn_hGetSuperObjectObject(s32);
s32 fn_ucGetProcedureUltraOperator(s32);
void fn_vGetUltraOperatorPerso(s32, s32, void **);
f32 func_00151360(f32);
void func_00155EC0(s32, unk_func_001FC690_0 *);
s32 func_001979A0(s32);
s32 func_001B4D70(unk_func_001FC690_3 *);
s32 func_001BB6A0(s32);
s32 func_001BB6F0(s32);
void func_001BB970(s32, s32);
s32 func_001BBA90(s32, s32);
f32 func_001E60E0(f32);
void func_001F0CC0(s32, unk_func_001FC690_0 *);
f32 func_001F0D40(s32);
void func_001F49F0(unk_func_001FC690_1 *);
void func_001FD710(unk_func_001FC690_3 *, u16 *, u16 *, u16 *, s32, s32, u16);
s32 func_001FE560(unk_func_001FC690_0 *, unk_func_001FC690_0 *, f32);
f32 func_001FEAF0(unk_func_001FC690_0 *, unk_func_001FC690_0 *, unk_func_001FC690_0 *);
void func_001FEE40(unk_func_001FC690_1 *, unk_func_001FC690_0 *, unk_func_001FC690_0 *, unk_func_001FC690_0 *, f32);
void func_001FF6A0(s32, unk_func_001FC690_1 *);

extern s32 D_0035F58C;

#define COPY(dst, src) \
    (*(s32 (*)[3])&(dst))[0] = (*(const s32 (*)[3])&(src))[0]; \
    (*(s32 (*)[3])&(dst))[1] = (*(const s32 (*)[3])&(src))[1]; \
    (*(s32 (*)[3])&(dst))[2] = (*(const s32 (*)[3])&(src))[2]

void *func_001FC690(s32 arg0, s32 *arg1)
{
    unk_func_001FC690_0 temp_188;
    unk_func_001FC690_0 temp_198;
    unk_func_001FC690_0 temp_1A8;
    unk_func_001FC690_0 temp_1B8;
    unk_func_001FC690_0 temp_1C8;
    unk_func_001FC690_0 temp_1D8;
    void *temp_1E4;
    s32 temp_1E8;
    f32 temp_1EC;
    f32 temp_1F0;
    f32 temp_1F4;
    f32 temp_1F8;
    f32 temp_1FC;
    f32 temp_200;
    f32 temp_204;
    s32 temp_208;
    f32 temp_20C;
    unk_func_001FC690_1 temp_B0;
    unk_func_001FC690_3 *temp;
    s32 temp2;
    s32 temp3;
    s32 temp4;
    s32 temp5;
    s32 temp6;
    s32 temp7;
    s8 temp8;
    u8 temp9;

    temp7 = 0;
    (void)temp7;
    temp3 = 0;
    temp6 = 0;
    temp_1F8 = 0.0f;
    temp8 = 0;
    temp9 = 0;
    temp_208 = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp_208), arg0, &temp_1E4);
    temp = (unk_func_001FC690_3 *)HIE_fn_hGetSuperObjectObject((s32)temp_1E4)->unk_10;
    temp2 = HIE_fn_hGetSuperObjectObject((s32)temp_1E4)->unk_18;
    if (temp2 == 0) {
        return arg1;
    }

    (void)func_001B4D70(temp);
    func_001FF6A0((s32)temp_1E4, &temp_B0);
    temp_1EC = temp->unk_0C->unk_18;
    temp_1F0 = temp->unk_0C->unk_1C;
    if (temp_1EC == temp_1F0) {
        temp8 = (s8)1;
    }
    func_00155EC0(func_001979A0((s32)temp->unk_0C->unk_68), &temp_188);
    temp_1F4 = func_001E60E0(func_00151360(temp_B0.unk_20.unk_00[2] - temp_188.unk_00[2]) +
        (func_00151360(temp_B0.unk_20.unk_00[0] - temp_188.unk_00[0]) +
         func_00151360(temp_B0.unk_20.unk_00[1] - temp_188.unk_00[1])));
    if (temp8) {
        if ((temp_1EC - temp_1F4) > 0.0f) {
            temp_20C = temp_1EC - temp_1F4;
        } else {
            temp_20C = -(temp_1EC - temp_1F4);
        }
        if (!(temp_20C < 0.1f)) {
            temp_1F8 = temp_1EC;
        } else {
            COPY(temp_1D8, temp_B0.unk_20);
            temp9 = (u8)1;
        }
    } else if (temp_1F4 < temp_1EC) {
        temp_1F8 = temp_1EC;
    } else if (!(temp_1F4 <= temp_1F0)) {
        temp_1F8 = temp_1F0;
    } else {
        COPY(temp_1D8, temp_B0.unk_20);
        temp_1F8 = temp_1F0;
        temp9 = (u8)1;
    }

    COPY(temp_1D8, temp_B0.unk_20);
    if (!temp9) {
        func_001F49F0(&temp_B0);
        temp5 = func_001BB6F0(temp2);
        temp4 = func_001BBA90(temp2, temp5);
        temp_1E8 = func_001BB6A0(temp2);
        func_001F0CC0(temp4, &temp_198);
        if (func_001FE560(&temp_198, &temp_B0.unk_20, func_001F0D40(temp4)) != 0) {
            temp3 = func_001BBA90(temp2, temp5 - 1);
            if (temp3 != 0) {
                func_001F0CC0(temp3, &temp_1B8);
            } else {
                COPY(temp_1B8, temp_198);
            }
            temp4 = func_001BBA90(temp2, temp5 + 1);
            COPY(temp_1A8, temp_198);
            if (temp4 != 0) {
                func_001F0CC0(temp4, &temp_198);
            }
            temp_1FC = func_001FEAF0(&temp_B0.unk_50, &temp_1A8, &temp_1B8);
            temp_200 = func_001FEAF0(&temp_B0.unk_50, &temp_1A8, &temp_198);
            if (temp_1FC <= temp_200) {
                D_0035F58C = -1;
                func_001BB970(temp2, -1);
                func_001FEE40(&temp_B0, &temp_1D8, &temp_1A8, &temp_1B8, temp_1F8);
            } else {
                D_0035F58C = 1;
                func_001BB970(temp2, 1);
                func_001FEE40(&temp_B0, &temp_1D8, &temp_198, &temp_1A8, temp_1F8);
            }
        } else {
            temp3 = func_001BBA90(temp2, temp5 - D_0035F58C);
            if (temp3 != 0) {
                func_001F0CC0(temp3, &temp_1A8);
            } else {
                temp3 = temp4;
                COPY(temp_1A8, temp_198);
            }
            temp_1FC = func_001FEAF0(&temp_B0.unk_50, &temp_1A8, &temp_198);
            temp6 = func_001BBA90(temp2, temp5 - 2 * D_0035F58C);
            if (temp6 != 0) {
                func_001F0CC0(temp6, &temp_1B8);
            } else {
                temp6 = temp3;
                COPY(temp_1B8, temp_1A8);
            }
            temp_200 = func_001FEAF0(&temp_B0.unk_50, &temp_1A8, &temp_1B8);
            temp7 = func_001BBA90(temp2, temp5 + D_0035F58C);
            if (temp7 != 0) {
                func_001F0CC0(temp7, &temp_1C8);
            } else {
                temp7 = temp4;
                COPY(temp_1C8, temp_198);
            }
            temp_204 = func_001FEAF0(&temp_B0.unk_50, &temp_1C8, &temp_198);
            if (temp_204 <= temp_1FC) {
                if (temp_204 <= temp_200) {
                    COPY(temp_1D8, temp_198);
                } else if (temp_1FC <= temp_200) {
                    func_001FEE40(&temp_B0, &temp_1D8, &temp_198, &temp_1A8, temp_1F8);
                } else if (func_001FE560(&temp_1A8, &temp_B0.unk_20, func_001F0D40(temp3)) != 0) {
                    func_001FEE40(&temp_B0, &temp_1D8, &temp_1A8, &temp_1B8, temp_1F8);
                    D_0035F58C = -D_0035F58C;
                    func_001BB970(temp2, D_0035F58C);
                } else {
                    COPY(temp_1D8, temp_1A8);
                }
            } else if (temp_1FC <= temp_200) {
                func_001FEE40(&temp_B0, &temp_1D8, &temp_198, &temp_1A8, temp_1F8);
            } else if (func_001FE560(&temp_1A8, &temp_B0.unk_20, func_001F0D40(temp3)) != 0) {
                D_0035F58C = -D_0035F58C;
                func_001BB970(temp2, D_0035F58C);
                func_001FEE40(&temp_B0, &temp_1D8, &temp_1A8, &temp_1B8, temp_1F8);
            } else {
                COPY(temp_1D8, temp_1A8);
            }
        }
    }
    COPY(temp->unk_34, temp_1D8);
    func_001FD710(temp, &temp->unk_04->unk_72, &temp->unk_08->unk_72, &temp->unk_0C->unk_72, 1, 1, 0x2000);
    return (void *)arg1;
}
