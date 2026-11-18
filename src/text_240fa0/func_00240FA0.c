/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_00240FA0_0 {
    union {
        s32 unk_00;
        f32 unk_00_f32;
    } unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_00240FA0_0;

s32 *fn_p_stEvalTree(s32, s32 *, unk_func_00240FA0_0 *);
s32 func_0019D550(f32);
void func_0015DBE0(s8, s32, s8);
void func_0015DAC0(s8, s32, f32);
void func_0015DDB0(s8);

#define UNK_FUNC_00240FA0(arg) \
    ((arg).unk_0C == 8 ? func_0019D550((arg).unk_00.unk_00_f32) : (arg).unk_00.unk_00)

s32 *func_00240FA0(s32 arg0, s32 *arg1) {
    unk_func_00240FA0_0 temp;
    f32 temp2;
    volatile s32 temp3;
    u8 temp4;
    s32 temp5;
    u8 temp6;

    temp3 = arg1[-2];
    switch (temp3) {
    case 0x2A9:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp);
        temp4 = UNK_FUNC_00240FA0(temp);
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp);
        temp5 = UNK_FUNC_00240FA0(temp);
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp);
        temp6 = (u8)(u32)(u8)UNK_FUNC_00240FA0(temp);
        func_0015DBE0((s8)temp4, temp5, (s8)temp6);
        return arg1;
    case 0x2AA:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp);
        temp4 = UNK_FUNC_00240FA0(temp);
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp);
        temp5 = UNK_FUNC_00240FA0(temp);
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp);
        temp2 = temp.unk_0C == 8 ? temp.unk_00.unk_00_f32 : (f32)temp.unk_00.unk_00;
        func_0015DAC0((s8)temp4, temp5, temp2);
        return arg1;
    case 0x2AB:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp);
        temp4 = UNK_FUNC_00240FA0(temp);
        func_0015DDB0((s8)temp4);
        return arg1;
    default:
        return arg1;
    }
}
