/* profile: o0_301 */
#include "common.h"

typedef struct { s32 unk_00; u8 pad_04[4]; } unk_func_002236D0_0;
typedef struct {
    union { s32 unk_00; f32 unk_00_f32; s8 unk_00_s8; } unk_00;
    u8 pad_04[8];
    s32 unk_0C;
    u8 pad_10[0xC];
} unk_func_002236D0_1;
typedef struct {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
    u8 pad_10[4];
    s32 unk_14;
} unk_func_002236D0_2;

unk_func_002236D0_2 *HIE_fn_hGetSuperObjectObject(s32);
unk_func_002236D0_0 *fn_p_stEvalTree(s32, unk_func_002236D0_0 *, unk_func_002236D0_1 *);
u8 fn_ucGetProcedureUltraOperator(s32);
void fn_vGetUltraOperatorPerso(u8, s32, s32 *);
void func_00199600(s32, u8);
s32 func_0019D550(f32);
void func_001B36D0(s32, u8);
void func_001B3700(s32, u32);
void func_001B6D10(void *, u8);
void func_001D46A0(s32, s32);

unk_func_002236D0_0 *func_002236D0(s32 arg0, unk_func_002236D0_0 *arg1) {
    unk_func_002236D0_1 temp;
    s32 unk_6C;
    s32 unk_00 = arg1[-1].unk_00;

    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(unk_00), arg0, &unk_6C);
    switch (unk_00) {
    case 0x68: {
        s32 unk_01;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp);
        if (temp.unk_0C == 8) {
            unk_01 = func_0019D550(temp.unk_00.unk_00_f32);
        } else {
            unk_01 = temp.unk_00.unk_00;
        }
        func_001B6D10((void *)HIE_fn_hGetSuperObjectObject(unk_6C)->unk_14, (u8)unk_01);
        return arg1;
    }
    case 0x10B:
        func_001B3700(HIE_fn_hGetSuperObjectObject(unk_6C)->unk_0C, 0xCDCDCDCD);
        return arg1;
    case 0x67: {
        s32 unk_02;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp);
        if (temp.unk_0C == 8) {
            unk_02 = func_0019D550(temp.unk_00.unk_00_f32);
        } else {
            unk_02 = temp.unk_00.unk_00;
        }
        func_001D46A0(HIE_fn_hGetSuperObjectObject(unk_6C)->unk_00, unk_02);
        return arg1;
    }
    case 0x10A: {
        u8 unk_03;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp);
        unk_03 = (u8)temp.unk_00.unk_00_s8;
        func_001B36D0(HIE_fn_hGetSuperObjectObject(unk_6C)->unk_0C, unk_03);
        return arg1;
    }
    case 0x6A:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp);
        func_00199600(unk_6C, (u8)temp.unk_00.unk_00);
        return arg1;
    default:
        return arg1;
    }
}
