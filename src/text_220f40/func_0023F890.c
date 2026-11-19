/* profile: o0_301 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_0023F890_0;

typedef struct {
    union {
        unk_func_0023F890_0 unk_00;
        f32 unk_04;
        s32 unk_08;
    } unk_00;
    s32 unk_0C;
    u8 pad_10[8];
} unk_func_0023F890_1;

typedef struct {
    unk_func_0023F890_1 unk_00;
    unk_func_0023F890_0 unk_18;
    u8 pad_24[4];
    unk_func_0023F890_0 unk_28;
    u8 pad_34[4];
    unk_func_0023F890_0 unk_38;
    u8 pad_44[4];
    unk_func_0023F890_0 unk_48;
    f32 unk_54;
    s32 unk_58;
    s32 unk_5C;
    f32 unk_60;
    f32 unk_64;
    f32 unk_68;
    f32 unk_6C;
    f32 unk_70;
    s32 unk_74;
    s32 unk_78;
    s32 unk_7C;
    s32 unk_80;
    s32 unk_84;
} unk_func_0023F890_2;

s32 *fn_p_stEvalTree(s32, s32 *, unk_func_0023F890_1 *);
s32 fn_szGetStringFromTextOrStringParam(unk_func_0023F890_1 *);
void func_002738B0(s32, s32, s32);
s32 func_002738F0(s32, s32, f32);
s32 func_00273C00(s32, unk_func_0023F890_0 *, s32, f32);
void func_00273C70(s32, s32, unk_func_0023F890_0 *, f32, s32, f32, unk_func_0023F890_0 *);
void func_00273CF0(s32, s32, unk_func_0023F890_0 *, s32, f32);
void func_00273D70(s32);
s32 func_00273DC0(s32);
extern s32 D_00605C40[];
extern s32 D_00605C44[];
extern s32 D_00605C48[];
extern f32 D_00605C4C[];
extern s32 D_00605C54[];
extern f32 D_00605C58[];
extern f32 D_00605C5C[];
extern f32 D_00605C60[];
extern f32 D_00605C64[];
extern s32 D_00605C6C[];
extern s32 D_00605D78[];
extern f32 D_00605D7C[];
extern f32 D_00605D80[];
extern f32 D_00605D84[];
extern f32 D_00605D88[];
extern s32 D_00605D90[];
extern s32 D_00605E94[];
extern s32 D_00605E98[];
extern f32 D_00605E9C[];
extern f32 D_00605EA0[];
extern f32 D_00605EA4[];
extern f32 D_00605EA8[];
extern s32 D_00605EB0[];

s32 *func_0023F890(s32 arg0, s32 *arg1)
{
    unk_func_0023F890_2 temp;
    unk_func_0023F890_0 *temp5;
    s32 temp0;
    unk_func_0023F890_0 *temp8;
    s32 temp3;
    unk_func_0023F890_0 *temp6;
    unk_func_0023F890_0 *temp7;
    s32 temp1;
    s32 temp2;
    s32 temp4;

    temp2 = arg1[-2];
    switch (temp2) {
    case 0x2A2:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_58 = temp.unk_00.unk_00.unk_08;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp0 = temp.unk_00.unk_00.unk_08;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp5 = &temp.unk_00.unk_00.unk_00;
        temp.unk_18.unk_00 = temp5->unk_00;
        temp.unk_18.unk_04 = temp5->unk_04;
        temp.unk_18.unk_08 = temp5->unk_08;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp3 = fn_szGetStringFromTextOrStringParam(&temp.unk_00);
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_54 = (temp.unk_00.unk_0C == 8) ? temp.unk_00.unk_00.unk_04 : (f32)temp.unk_00.unk_00.unk_08;
        func_00273CF0(temp.unk_58, temp0, &temp.unk_18, temp3, temp.unk_54);
        return arg1;
    case 0x2A3:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_5C = temp.unk_00.unk_00.unk_08;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp0 = temp.unk_00.unk_00.unk_08;
        if (temp0 < 0 || temp0 > 0x3C) {
            temp0 = 0;
        }
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp5 = &temp.unk_00.unk_00.unk_00;
        temp.unk_18.unk_00 = temp5->unk_00;
        temp.unk_18.unk_04 = temp5->unk_04;
        temp.unk_18.unk_08 = temp5->unk_08;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_60 = (temp.unk_00.unk_0C == 8) ? temp.unk_00.unk_00.unk_04 : (f32)temp.unk_00.unk_00.unk_08;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp3 = fn_szGetStringFromTextOrStringParam(&temp.unk_00);
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_54 = (temp.unk_00.unk_0C == 8) ? temp.unk_00.unk_00.unk_04 : (f32)temp.unk_00.unk_00.unk_08;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp6 = &temp.unk_00.unk_00.unk_00;
        temp.unk_28.unk_00 = temp6->unk_00;
        temp.unk_28.unk_04 = temp6->unk_04;
        temp.unk_28.unk_08 = temp6->unk_08;
        func_00273C70(temp.unk_5C, temp0, &temp.unk_18, temp.unk_60, temp3, temp.unk_54, &temp.unk_28);
        return arg1;
    case 0x2A4:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp1 = temp.unk_00.unk_00.unk_08;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp0 = temp.unk_00.unk_00.unk_08;
        if (temp0 < 0 || temp0 > 0x3C) {
            temp0 = 0;
        }
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp5 = &temp.unk_00.unk_00.unk_00;
        temp.unk_18.unk_00 = temp5->unk_00;
        temp.unk_18.unk_04 = temp5->unk_04;
        temp.unk_18.unk_08 = temp5->unk_08;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp7 = &temp.unk_00.unk_00.unk_00;
        temp.unk_48.unk_00 = temp7->unk_00;
        temp.unk_48.unk_04 = temp7->unk_04;
        temp.unk_48.unk_08 = temp7->unk_08;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_64 = (temp.unk_00.unk_0C == 8) ? temp.unk_00.unk_00.unk_04 : (f32)temp.unk_00.unk_00.unk_08;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp3 = fn_szGetStringFromTextOrStringParam(&temp.unk_00);
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp8 = &temp.unk_00.unk_00.unk_00;
        temp.unk_38.unk_00 = temp8->unk_00;
        temp.unk_38.unk_04 = temp8->unk_04;
        temp.unk_38.unk_08 = temp8->unk_08;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp8 = &temp.unk_00.unk_00.unk_00;
        temp.unk_68 = temp8->unk_00;
        temp.unk_6C = temp8->unk_04;
        temp.unk_54 = temp8->unk_08;
        temp.unk_68 = temp.unk_68 * temp.unk_68;
        temp.unk_6C = temp.unk_6C * temp.unk_6C;
        temp.unk_70 = ((temp.unk_48.unk_08 - temp.unk_18.unk_08) * (temp.unk_48.unk_08 - temp.unk_18.unk_08)) + ((temp.unk_48.unk_00 - temp.unk_18.unk_00) * (temp.unk_48.unk_00 - temp.unk_18.unk_00) + (temp.unk_48.unk_04 - temp.unk_18.unk_04) * (temp.unk_48.unk_04 - temp.unk_18.unk_04));
        if (!(temp.unk_70 < temp.unk_6C)) {
            func_00273C70(temp1, temp0, &temp.unk_18, 1.0f, temp3, 0.0f, &temp.unk_38);
        } else if (temp.unk_70 <= temp.unk_68) {
            func_00273C70(temp1, temp0, &temp.unk_18, temp.unk_64, temp3, temp.unk_54, &temp.unk_38);
        } else {
            temp.unk_70 -= temp.unk_68;
            temp.unk_6C -= temp.unk_68;
            if (temp.unk_6C <= 0.0f) {
                temp.unk_6C = 1.0f;
            }
            temp.unk_70 = temp.unk_70 / temp.unk_6C;
            temp.unk_64 -= (temp.unk_64 - 1.0f) * temp.unk_70;
            temp.unk_54 -= temp.unk_54 * temp.unk_70;
            func_00273C70(temp1, temp0, &temp.unk_18, temp.unk_64, temp3, temp.unk_54, &temp.unk_38);
        }
        return arg1;
    case 0x284:
        D_00605C48[0] = 0;
        D_00605C4C[0] = 0.0f;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        D_00605C54[0] = temp.unk_00.unk_00.unk_08;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp5 = &temp.unk_00.unk_00.unk_00;
        D_00605C58[0] = temp5->unk_00;
        D_00605C5C[0] = temp5->unk_04;
        D_00605C60[0] = temp5->unk_08;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        D_00605C6C[0] = fn_szGetStringFromTextOrStringParam(&temp.unk_00);
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        D_00605C64[0] = (temp.unk_00.unk_0C == 8) ? temp.unk_00.unk_00.unk_04 : (f32)temp.unk_00.unk_00.unk_08;
        return arg1;
    case 0x285:
        D_00605C48[0] = 0;
        D_00605C4C[0] = 0.0f;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        D_00605D78[0] = temp.unk_00.unk_00.unk_08;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp5 = &temp.unk_00.unk_00.unk_00;
        D_00605D7C[0] = temp5->unk_00;
        D_00605D80[0] = temp5->unk_04;
        D_00605D84[0] = temp5->unk_08;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        D_00605D90[0] = fn_szGetStringFromTextOrStringParam(&temp.unk_00);
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        D_00605D88[0] = (temp.unk_00.unk_0C == 8) ? temp.unk_00.unk_00.unk_04 : (f32)temp.unk_00.unk_00.unk_08;
        return arg1;
    case 0x286:
        D_00605C48[0] = 0;
        D_00605C4C[0] = 0.0f;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        D_00605D78[0] = temp.unk_00.unk_00.unk_08;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp5 = &temp.unk_00.unk_00.unk_00;
        D_00605D7C[0] = temp5->unk_00;
        D_00605D80[0] = temp5->unk_04;
        D_00605D84[0] = temp5->unk_08;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        D_00605E94[0] = fn_szGetStringFromTextOrStringParam(&temp.unk_00);
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        D_00605D88[0] = (temp.unk_00.unk_0C == 8) ? temp.unk_00.unk_00.unk_04 : (f32)temp.unk_00.unk_00.unk_08;
        return arg1;
    case 0x287:
        D_00605C48[0] = 0;
        D_00605C4C[0] = 0.0f;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        D_00605E98[0] = temp.unk_00.unk_00.unk_08;
        temp2 = arg0;
        arg1 = fn_p_stEvalTree(temp2, arg1, &temp.unk_00);
        temp5 = &temp.unk_00.unk_00.unk_00;
        D_00605E9C[0] = temp5->unk_00;
        D_00605EA0[0] = temp5->unk_04;
        D_00605EA4[0] = temp5->unk_08;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        D_00605EB0[0] = fn_szGetStringFromTextOrStringParam(&temp.unk_00);
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        D_00605EA8[0] = (temp.unk_00.unk_0C == 8) ? temp.unk_00.unk_00.unk_04 : (f32)temp.unk_00.unk_00.unk_08;
        return arg1;
    case 0x28C:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        D_00605C40[0] = temp.unk_00.unk_00.unk_08;
        return arg1;
    case 0x28D:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        D_00605C44[0] = temp.unk_00.unk_00.unk_08;
        return arg1;
    case 0x28E:
        D_00605C40[0] = 1;
        D_00605C44[0] = 0;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_74 = temp.unk_00.unk_00.unk_08;
        return arg1;
    case 0x28A:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_78 = temp.unk_00.unk_00.unk_08;
        (void)(s32)func_00273DC0(temp.unk_78);
        return arg1;
    case 0x28B:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_7C = temp.unk_00.unk_00.unk_08;
        func_00273D70(temp.unk_7C);
        return arg1;
    case 0x283:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp0 = temp.unk_00.unk_00.unk_08;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp5 = &temp.unk_00.unk_00.unk_00;
        temp.unk_18.unk_00 = temp5->unk_00;
        temp.unk_18.unk_04 = temp5->unk_04;
        temp.unk_18.unk_08 = temp5->unk_08;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp3 = fn_szGetStringFromTextOrStringParam(&temp.unk_00);
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_54 = (temp.unk_00.unk_0C == 8) ? temp.unk_00.unk_00.unk_04 : (f32)temp.unk_00.unk_00.unk_08;
        (void)(s32)func_00273C00(temp0, &temp.unk_18, temp3, temp.unk_54);
        return arg1;
    case 0x288:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp0 = temp.unk_00.unk_00.unk_08;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp4 = temp.unk_00.unk_00.unk_08;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_54 = (temp.unk_00.unk_0C == 8) ? temp.unk_00.unk_00.unk_04 : (f32)temp.unk_00.unk_00.unk_08;
        (void)(s32)func_002738F0(temp0, temp4, temp.unk_54);
        return arg1;
    case 0x289:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp0 = temp.unk_00.unk_00.unk_08;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_80 = temp.unk_00.unk_00.unk_08;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_84 = temp.unk_00.unk_00.unk_08;
        func_002738B0(temp0, temp.unk_80, temp.unk_84);
        return arg1;
    }
    return arg1;
}
