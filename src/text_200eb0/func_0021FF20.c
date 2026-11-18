/* profile: o0_301 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_0021FF20_0;

typedef struct {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_0021FF20_1;

typedef union {
    s8 unk_00;
    unk_0021FF20_0 unk_04;
    unk_0021FF20_1 unk_08;
} unk_0021FF20_2;

typedef struct {
    s32 unk_00;
    u8 pad_04[4];
} unk_0021FF20_3;

extern s32 D_005AB800[];
unk_0021FF20_3 *fn_p_stEvalTree(s32, unk_0021FF20_3 *, unk_0021FF20_2 *);
s8 func_0015B4B0(u8, f32, f32, f32, f32, f32, f32);
s8 func_0015B3B0(s32, u8, f32, f32, f32, f32, f32, f32);
s8 func_0015B310(s32, u8, s8, f32, f32);

void *func_0021FF20(s32 arg0, unk_0021FF20_3 *arg1, unk_0021FF20_1 *arg2) {
    s32 temp = arg1[-1].unk_00;
    s8 temp2 = -1;
    s32 temp3 = D_005AB800[0];
    u8 temp4;
    unk_0021FF20_2 temp5;
    unk_0021FF20_0 temp6;
    unk_0021FF20_0 temp7;
    unk_0021FF20_0 temp8;

    arg1 = fn_p_stEvalTree(arg0, arg1, &temp5);
    temp4 = temp5.unk_00;
    if (temp4 > 15) {
        temp4 = 0;
    }

    switch (temp) {
        case 0x7A:
            arg1 = fn_p_stEvalTree(arg0, arg1, &temp5);
            temp6 = temp5.unk_04;
            arg1 = fn_p_stEvalTree(arg0, arg1, &temp5);
            temp7 = temp5.unk_04;
            arg1 = fn_p_stEvalTree(arg0, arg1, &temp5);
            temp8 = temp5.unk_04;
            temp2 = func_0015B4B0(temp4, temp6.unk_00, temp6.unk_04, temp7.unk_00, temp7.unk_04, temp8.unk_00, temp8.unk_04);
            break;
        case 0x7B:
            arg1 = fn_p_stEvalTree(arg0, arg1, &temp5);
            temp6 = temp5.unk_04;
            arg1 = fn_p_stEvalTree(arg0, arg1, &temp5);
            temp7 = temp5.unk_04;
            arg1 = fn_p_stEvalTree(arg0, arg1, &temp5);
            temp8 = temp5.unk_04;
            temp2 = func_0015B3B0(temp3, temp4, temp6.unk_00, temp6.unk_04, temp7.unk_00, temp7.unk_04, temp8.unk_00, temp8.unk_04);
            break;
        case 0x7C:
            arg1 = fn_p_stEvalTree(arg0, arg1, &temp5);
            temp2 = temp5.unk_00;
            arg1 = fn_p_stEvalTree(arg0, arg1, &temp5);
            temp8 = temp5.unk_04;
            temp2 = func_0015B310(temp3, temp4, temp2, temp8.unk_00, temp8.unk_04);
            break;
    }
    arg2->unk_00 = temp2;
    arg2->unk_0C = 6;
    return arg1;
}
