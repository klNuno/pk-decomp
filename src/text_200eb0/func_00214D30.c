/* profile: o0_301_p */
#include "common.h"

typedef struct {
    union {
        s32 unk_00;
        s16 unk_02;
        f32 unk_04;
    } unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_00214D30_0;

typedef struct {
    s16 unk_00;
    s16 unk_02;
    s32 unk_04[3];
} unk_00214D30_1;

typedef struct {
    u32 pad_00[0x34 / 4];
} unk_00214D30_2;

typedef struct {
    u8 pad_00[0xC];
    void *unk_0C;
} unk_00214D30_3;

unk_00214D30_3 *HIE_fn_hGetSuperObjectObject(s32);
s32 fn_p_stBrainGetMind(void *);
s32 *fn_p_stEvalTree(s32, s32 *, unk_00214D30_0 *);
s8 *fn_szGetStringFromTextOrStringParam(unk_00214D30_0 *);
u32 func_0011D3F8(const s8 *);
u8 func_0015B4E0(void);
s32 func_0015BA80(s32);
s32 func_0019D550(f32);
s32 func_001AC830(unk_00214D30_2 *, s32, s8 *, s32, s32, f32, unk_00214D30_1 *, u16);
s32 func_001EA0D0(u8, u8, s32, unk_00214D30_0 *);

s32 *func_00214D30(s32 arg0, s32 *arg1, unk_00214D30_0 *arg2) {
    unk_00214D30_2 temp;
    s32 temp2;
    s32 temp3;
    f32 temp4;
    s8 *temp5;
    u8 temp6;
    s8 *temp7;
    u8 temp8;
    s16 temp9;
    unk_00214D30_1 *temp10;
    s16 temp11;
    u8 temp12;
    u8 temp13;
    u8 temp14;

    temp2 = arg1[-2];
    switch (temp2) {
    case 0x126:
        arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
        temp3 = arg2->unk_00.unk_00;
        arg2->unk_00.unk_00 = func_0015BA80(temp3);
        arg2->unk_0C = 9;
        return arg1;
    case 0x125:
        arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
        temp5 = fn_szGetStringFromTextOrStringParam(arg2);
        arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
        temp4 = arg2->unk_0C == 8 ? arg2->unk_00.unk_04 : (f32)arg2->unk_00.unk_00;
        temp12 = *(s8 *)arg1;
        arg1 += 2;
        temp13 = *(s8 *)arg1;
        arg1 += 2;
        temp14 = *(s8 *)arg1;
        arg1 += 2;
        arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
        temp6 = arg2->unk_0C == 8 ? func_0019D550(arg2->unk_00.unk_04) : arg2->unk_00.unk_00;
        temp10 = __alloca(temp6 * sizeof(*temp10));
        temp6 = temp8 = (u8)func_001AC830(&temp, arg0, temp5, 0, -1, temp4, temp10, temp6);
        while (temp8--) {
            arg2->unk_00.unk_00 = temp10[temp8].unk_00;
            arg2->unk_0C = 6;
            if (!(u8)func_001EA0D0(temp12, temp8, fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(arg0)->unk_0C), arg2)) {
                break;
            }
            arg2->unk_00.unk_00 = temp10[temp8].unk_02;
            arg2->unk_0C = 6;
            if (!(u8)func_001EA0D0(temp13, temp8, fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(arg0)->unk_0C), arg2)) {
                break;
            }
            arg2->unk_00.unk_00 = ((s32 *)((u8 *)&temp10[temp8] + 4))[0];
            arg2->unk_04 = ((s32 *)((u8 *)&temp10[temp8] + 4))[1];
            arg2->unk_08 = ((s32 *)((u8 *)&temp10[temp8] + 4))[2];
            arg2->unk_0C = 0x15;
            if (!(u8)func_001EA0D0(temp14, temp8, fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(arg0)->unk_0C), arg2)) {
                break;
            }
        }
        arg2->unk_00.unk_00 = temp6;
        arg2->unk_0C = 6;
        return arg1;
    case 0x124:
        arg2->unk_00.unk_00 = func_0015B4E0();
        arg2->unk_0C = 6;
        return arg1;
    case 0x123:
        temp9 = 0;
        temp11 = 0;
        temp7 = NULL;
        arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
        temp7 = fn_szGetStringFromTextOrStringParam(arg2);
        arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
        temp11 = arg2->unk_00.unk_02;
        while (temp7[temp9++] == '/') {
            while (temp7[temp9++] != ':') {
            }
        }
        temp11 = temp11 + temp9 - 1;
        if (temp11 >= 0 && temp11 < (s16)func_0011D3F8(temp7)) {
            arg2->unk_00.unk_00 = temp7[temp11];
            arg2->unk_0C = 6;
        } else {
            arg2->unk_00.unk_00 = 0;
            arg2->unk_0C = 6;
        }
        return arg1;
    default:
        return arg1;
    }
}
