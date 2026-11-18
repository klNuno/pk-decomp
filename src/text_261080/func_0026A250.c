#include "common.h"

typedef struct {
    f32 unk_00, unk_04, unk_08, unk_0C, unk_10, unk_14, unk_18, unk_1C;
    f32 unk_20, unk_24, unk_28, unk_2C, unk_30, unk_34, unk_38, unk_3C;
    f32 unk_40, unk_44;
    f32 unk_48, unk_4C, unk_50;
    f32 unk_54, unk_58, unk_5C, unk_60;
    u32 unk_64;
    f32 unk_68;
    s32 unk_6C;
    f32 unk_70;
} unk_func_0026A250_0;

typedef struct {
    u32 unk_00;
    u8 pad_04[0x34];
    f32 unk_38, unk_3C, unk_40;
    u8 pad_44[0x2C];
    void *unk_70;
    u32 unk_74;
} unk_func_0026A250_1;

extern void *AGO2_MEM_Alloc(u32);
extern unk_func_0026A250_0 *func_00267EB0(void *);
extern void func_0011B418(char *);
extern f32 func_001E60E0(f32);
extern f32 func_00114D70(f32);
extern f32 func_00115110(f32);
extern s32 rand(void);
extern s32 func_00127318(f32);
extern char D_0034EB50[];

s32 func_0026A250(s32 arg0, unk_func_0026A250_1 *arg1, s32 arg2, f32 *arg3,
                 f32 arg4, f32 arg5, f32 arg6, f32 arg7,
                 const f32 *arg8, s32 arg9, s32 arg10, s32 arg11, s32 arg12,
                 s32 arg13, s32 arg14,
                 volatile u32 arg15) {
    u32 j, i;
    unk_func_0026A250_0 *temp, *ret;
    f32 temp4, temp5, temp6;
    f32 e, f, temp12, g, h, a, b, c, d, temp7;

    arg1->unk_74 = arg15;
    arg1->unk_70 = AGO2_MEM_Alloc(arg15 * sizeof(*temp));
    if (!arg1->unk_70) {
        arg1->unk_74 = 0;
        arg1->unk_00 |= 1;
        return 0;
    }
    ret = func_00267EB0(arg1->unk_70);
    if (!ret) {
        func_0011B418(D_0034EB50);
        return 0;
    }
    temp4 = arg3[2];
    temp = ret;
    temp5 = 0.02f * (25.0f - temp4);
    i = 0;
    if (temp5 < 0.1f) {
        temp5 = 0.1f;
    }
    temp6 = 6.2831855f / temp4;
    for (a = -0.9f; a < 0.8f; a += temp5) {
        b = a + temp5;
        temp7 = 0.0f;
        c = func_001E60E0(1.0f - a * a);
        d = func_001E60E0(1.0f - b * b);
        for (j = 0; (f32)j < temp4; j++, temp7 += temp6) {
            if (10.0f * (f32)rand() / 2147483648.0f < 3.0f && i < arg1->unk_74) {
                e = func_00114D70(temp7);
                f = func_00115110(temp7);
                temp12 = temp7 + temp6;
                g = func_00114D70(temp12);
                h = func_00115110(temp12);
                temp->unk_0C = arg1->unk_38 + arg4 * (e * c);
                temp->unk_10 = arg1->unk_3C + arg4 * (f * c);
                temp->unk_14 = arg1->unk_40 + a * arg4;
                temp->unk_18 = arg1->unk_38 + arg4 * (g * c);
                temp->unk_1C = arg1->unk_3C + arg4 * (h * c);
                temp->unk_20 = arg1->unk_40 + a * arg4;
                temp->unk_24 = arg1->unk_38 + arg4 * (g * d);
                temp->unk_28 = arg1->unk_3C + arg4 * (h * d);
                temp->unk_2C = arg1->unk_40 + b * arg4;
                temp->unk_30 = arg1->unk_38 + arg4 * (e * d);
                temp->unk_34 = arg1->unk_3C + arg4 * (f * d);
                temp->unk_38 = arg1->unk_40 + b * arg4;
                temp->unk_00 = 0.5f * (temp->unk_0C + temp->unk_18);
                temp->unk_04 = 0.5f * (temp->unk_10 + temp->unk_1C);
                temp->unk_08 = 0.5f * (temp->unk_14 + temp->unk_2C);
                {
                    s32 k, temp11;
                    for (k = 0, temp11 = 0; k < 4; k++, temp11 += 12) {
                        unk_func_0026A250_0 *temp2 = (unk_func_0026A250_0 *)((u8 *)temp + temp11);
                        temp2->unk_0C = temp->unk_00 + arg3[1] * (temp2->unk_0C - temp->unk_00);
                        temp2->unk_10 = temp->unk_04 + arg3[1] * (temp2->unk_10 - temp->unk_04);
                        temp2->unk_14 = temp->unk_08 + arg3[1] * (temp2->unk_14 - temp->unk_08);
                    }
                }
                if (0.0f == arg5) {
                    temp->unk_54 = 0.9f * (f32)rand() / 2147483648.0f;
                    temp->unk_58 = 0.9f * (f32)rand() / 2147483648.0f;
                    temp->unk_5C = 0.1f + temp->unk_54;
                    temp->unk_60 = 0.1f + temp->unk_58;
                } else if (1.0f == arg5) {
                    temp->unk_54 = 0.0f;
                    temp->unk_58 = 0.0f;
                    temp->unk_5C = 1.0f;
                    temp->unk_60 = 1.0f;
                } else if (2.0f == arg5) {
                    s32 k = func_00127318(2.0f * (f32)rand() / 2147483648.0f);
                    s32 l = func_00127318(2.0f * (f32)rand() / 2147483648.0f);
                    f32 u = 0.5f * (f32)k;
                    f32 v = 0.5f * (f32)l;
                    temp->unk_54 = u;
                    temp->unk_58 = v;
                    temp->unk_5C = 0.5f + u;
                    temp->unk_60 = 0.5f + v;
                } else if (3.0f == arg5) {
                    s32 k = func_00127318(4.0f * (f32)rand() / 2147483648.0f);
                    s32 l = func_00127318(4.0f * (f32)rand() / 2147483648.0f);
                    f32 u = 0.25f * (f32)k;
                    f32 v = 0.25f * (f32)l;
                    temp->unk_54 = u;
                    temp->unk_58 = v;
                    temp->unk_5C = 0.25f + u;
                    temp->unk_60 = 0.25f + v;
                }
                temp->unk_3C = -arg7 + (arg7 + arg7) * (f32)rand() / 2147483648.0f;
                temp->unk_40 = -arg7 + (arg7 + arg7) * (f32)rand() / 2147483648.0f;
                temp->unk_44 = -arg7 + (arg7 + arg7) * (f32)rand() / 2147483648.0f;
                {
                    f32 temp8 = arg6 * (0.5f + 2.5f * (f32)rand() / 2147483648.0f);
                    f32 temp9, x, y, z;
                    temp->unk_48 = temp->unk_00 - arg1->unk_38;
                    temp->unk_4C = temp->unk_04 - arg1->unk_3C;
                    temp->unk_50 = temp->unk_08 - arg1->unk_40;
                    y = temp->unk_4C;
                    x = temp->unk_48;
                    z = temp->unk_50;
                    temp9 = func_001E60E0(x * x + y * y + z * z);
                    if (0.0f != temp9) {
                        f32 temp10 = 1.0f / temp9;
                        temp->unk_48 = temp10 * temp->unk_48;
                        temp->unk_4C = temp10 * temp->unk_4C;
                        temp->unk_50 = temp10 * temp->unk_50;
                    }
                    temp->unk_48 = temp8 * temp->unk_48;
                    temp->unk_4C = temp8 * temp->unk_4C;
                    temp->unk_50 = temp8 * temp->unk_50;
                }
                temp->unk_64 = 0x437F0000;
                temp->unk_68 = *arg8;
                temp->unk_6C = 0;
                temp->unk_70 = 0.5f + 1.5f * (f32)rand() / 2147483648.0f;
                i++;
                temp++;
            }
        }
    }
    arg1->unk_74 = i;
    return 1;
}
