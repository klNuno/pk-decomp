#include "common.h"

typedef struct {
    f32 unk_00, unk_04, unk_08, unk_0C, unk_10, unk_14, unk_18, unk_1C;
    f32 unk_20, unk_24, unk_28, unk_2C, unk_30, unk_34, unk_38, unk_3C;
    f32 unk_40, unk_44;
    u8 pad_48[0xC];
    f32 unk_54, unk_58, unk_5C, unk_60, unk_64, unk_68;
    s32 unk_6C;
    f32 unk_70;
} unk_func_002691C0_0;

typedef struct {
    u32 unk_00;
    u8 pad_04[0x34];
    f32 unk_38, unk_3C, unk_40;
    u8 pad_44[0x2C];
    void *unk_70;
    u32 unk_74;
} unk_func_002691C0_1;

extern void *AGO2_MEM_Alloc(u32);
extern unk_func_002691C0_0 *func_00267EB0(void *);
extern void func_0011B418(char *);
extern f32 func_001E60E0(f32);
extern f32 func_00114D70(f32);
extern f32 func_00115110(f32);
extern s32 rand(void);
extern char D_0034EB50[];

s32 func_002691C0(s32 arg0, unk_func_002691C0_1 *arg1, s32 arg2, f32 *arg3,
                 f32 arg4, f32 arg5, f32 arg6, f32 arg7,
                 s32 arg8, s32 arg9, s32 arg10, s32 arg11, s32 arg12,
                 s32 arg13, s32 arg14,
                 volatile u32 arg15) {
    u32 j, i;
    unk_func_002691C0_0 *temp, *ret;
    f32 limit, step, inc;
    f32 e, f, next, g, h, a, b, c, d, angle;

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
    limit = arg3[2];
    temp = ret;
    step = 0.02f * (25.0f - limit);
    i = 0;
    if (step < 0.1f) {
        step = 0.1f;
    }
    inc = 6.2831855f / limit;
    for (a = -0.9f; a < 0.8f; a += step) {
        b = a + step;
        angle = 0.0f;
        c = func_001E60E0(1.0f - a * a);
        d = func_001E60E0(1.0f - b * b);
        for (j = 0; (f32)j < limit; j++, angle += inc) {
            if (i < arg1->unk_74) {
                e = func_00114D70(angle);
                f = func_00115110(angle);
                next = angle + inc;
                g = func_00114D70(next);
                h = func_00115110(next);
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
                temp->unk_54 = 0.5f * (1.0f + e);
                temp->unk_58 = 0.5f * (1.0f + a);
                temp->unk_5C = 0.5f * (1.0f + g);
                temp->unk_60 = 0.5f * (1.0f + b);
                temp->unk_3C = -30.0f + 60.0f * (f32)rand() / 2147483648.0f;
                temp->unk_40 = -30.0f + 60.0f * (f32)rand() / 2147483648.0f;
                temp->unk_44 = -30.0f + 60.0f * (f32)rand() / 2147483648.0f;
                i++;
                temp->unk_64 = arg5;
                temp->unk_68 = arg6;
                temp->unk_6C = 0;
                temp->unk_70 = arg7;
                temp++;
            }
        }
    }
    arg1->unk_74 = i;
    return 1;
}
