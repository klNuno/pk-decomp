/* profile: o0_301 */
#include "common.h"

s32 *fn_p_stEvalTree(s32, s32 *, s32 *);
u8 func_0015A7C0(s32);
u8 func_0015A7F0(s32);
u8 func_0015A750(s32);
u8 func_0015A780(s32);
u8 func_0015C100(u8, u8);
u8 func_0015C190(u8, u8);
u8 func_0015BF60(u8, u8);
u8 func_0015BFF0(u8, u8);

typedef union {
    s32 unk_00[4];
    s8 unk_00_s8[16];
} unk_func_00204370_0;

s32 *func_00204370(s32 arg0, s32 *arg1, s32 *arg2)
{
    unk_func_00204370_0 temp0;
    s32 temp1;
    u8 temp2;
    u8 temp3;

    s32 temp4;

    temp4 = arg1[-2];
    switch (temp4) {
    case 0x2C:
        arg1 = fn_p_stEvalTree(arg0, arg1, temp0.unk_00);
        temp1 = temp0.unk_00[0];
        *arg2 = func_0015A7C0(temp1);
        return arg1;
    case 0x2D:
        arg1 = fn_p_stEvalTree(arg0, arg1, temp0.unk_00);
        temp1 = temp0.unk_00[0];
        *arg2 = func_0015A7F0(temp1);
        return arg1;
    case 0x2E:
        arg1 = fn_p_stEvalTree(arg0, arg1, temp0.unk_00);
        temp1 = temp0.unk_00[0];
        *arg2 = func_0015A750(temp1);
        return arg1;
    case 0x2F:
        arg1 = fn_p_stEvalTree(arg0, arg1, temp0.unk_00);
        temp1 = temp0.unk_00[0];
        *arg2 = func_0015A780(temp1);
        return arg1;
    case 0x8F:
        arg1 = fn_p_stEvalTree(arg0, arg1, temp0.unk_00);
        temp2 = temp0.unk_00_s8[0];
        if (temp2 > 0xF) {
            temp2 = 0;
        }
        arg1 = fn_p_stEvalTree(arg0, arg1, temp0.unk_00);
        temp3 = temp0.unk_00_s8[0];
        if (temp3 > 0xF) {
            temp3 = 0;
        }
        *arg2 = func_0015C100(temp2, temp3);
        return arg1;
    case 0x90:
        arg1 = fn_p_stEvalTree(arg0, arg1, temp0.unk_00);
        temp2 = temp0.unk_00_s8[0];
        if (temp2 > 0xF) {
            temp2 = 0;
        }
        arg1 = fn_p_stEvalTree(arg0, arg1, temp0.unk_00);
        temp3 = temp0.unk_00_s8[0];
        if (temp3 > 0xF) {
            temp3 = 0;
        }
        *arg2 = func_0015C190(temp2, temp3);
        return arg1;
    case 0x91:
        arg1 = fn_p_stEvalTree(arg0, arg1, temp0.unk_00);
        temp2 = temp0.unk_00_s8[0];
        if (temp2 > 0xF) {
            temp2 = 0;
        }
        arg1 = fn_p_stEvalTree(arg0, arg1, temp0.unk_00);
        temp3 = temp0.unk_00_s8[0];
        if (temp3 > 0xF) {
            temp3 = 0;
        }
        *arg2 = func_0015BF60(temp2, temp3);
        return arg1;
    case 0x92:
        arg1 = fn_p_stEvalTree(arg0, arg1, temp0.unk_00);
        temp2 = temp0.unk_00_s8[0];
        if (temp2 > 0xF) {
            temp2 = 0;
        }
        arg1 = fn_p_stEvalTree(arg0, arg1, temp0.unk_00);
        temp3 = temp0.unk_00_s8[0];
        if (temp3 > 0xF) {
            temp3 = 0;
        }
        *arg2 = func_0015BFF0(temp2, temp3);
        return arg1;
    default:
        *arg2 = 0;
        return arg1;
    }
}
