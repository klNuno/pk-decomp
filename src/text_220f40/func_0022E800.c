/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[8];
    u32 unk_08;
    u32 unk_0C;
    u8 pad_10[0x14];
    f32 unk_24;
    f32 unk_28;
    f32 unk_2C;
    f32 unk_30;
    f32 unk_34;
    f32 unk_38;
    f32 unk_3C;
    f32 unk_40;
    f32 unk_44;
    f32 unk_48;
    f32 unk_4C;
    f32 unk_50;
} unk_func_0022E800_0;

typedef struct {
    f32 unk_00;
    u8 pad_04[12];
} unk_func_0022E800_1;

typedef struct {
    unk_func_0022E800_1 unk_00;
    s32 unk_10;
    f32 unk_14;
    f32 unk_18;
    f32 unk_1C;
} unk_func_0022E800_2;

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
} unk_func_0022E800_3;

unk_func_0022E800_3 *HIE_fn_hGetSuperObjectObject(s32);
s32 *fn_p_stEvalTree(s32, s32 *, unk_func_0022E800_1 *);
s32 fn_ucGetProcedureUltraOperator(s32);
void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
unk_func_0022E800_0 *func_00138800(unk_func_0022E800_0 *);
unk_func_0022E800_0 *func_001388A0(unk_func_0022E800_0 *);
unk_func_0022E800_0 *func_001B84B0(s32);

s32 *func_0022E800(s32 arg0, s32 *arg1)
{
    unk_func_0022E800_2 temp;
    unk_func_0022E800_0 *temp0;
    s32 temp1;
    s32 temp2;

    temp2 = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp2), arg0, &temp.unk_10);
    temp.unk_14 = 0.0f;
    temp.unk_18 = 0.0f;
    temp.unk_1C = 0.0f;
    temp1 = HIE_fn_hGetSuperObjectObject(temp.unk_10)->unk_08;
    if (temp1 == 0) {
        return arg1;
    }
    temp0 = func_001B84B0(temp1);
    switch (temp2) {
    case 0xCA:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_14 = temp.unk_00.unk_00;
        temp0->unk_08 = (temp0->unk_08 &= ~0x4000);
        temp0->unk_08 = (temp0->unk_08 |= 0x20000);
        temp0->unk_24 = temp.unk_14;
        break;
    case 0xCB:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_18 = temp.unk_00.unk_00;
        temp0->unk_08 = (temp0->unk_08 &= ~0x4000);
        temp0->unk_08 = (temp0->unk_08 |= 0x40000);
        temp0->unk_28 = temp.unk_18;
        break;
    case 0xCC:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_1C = temp.unk_00.unk_00;
        temp0->unk_08 = (temp0->unk_08 &= ~0x4000);
        temp0->unk_08 = (temp0->unk_08 |= 0x80000);
        temp0->unk_2C = temp.unk_1C;
        break;
    case 0xCD:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_14 = temp.unk_00.unk_00;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_18 = temp.unk_00.unk_00;
        temp0->unk_08 = (temp0->unk_08 &= ~0x4000);
        temp0->unk_08 = (temp0->unk_08 |= 0x20000);
        temp0->unk_08 = (temp0->unk_08 |= 0x40000);
        temp0->unk_24 = temp.unk_14;
        temp0->unk_28 = temp.unk_18;
        break;
    case 0xCE:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_14 = temp.unk_00.unk_00;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_18 = temp.unk_00.unk_00;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_1C = temp.unk_00.unk_00;
        temp0->unk_08 = (temp0->unk_08 &= ~0x4000);
        temp0->unk_08 = (temp0->unk_08 |= 0x20000);
        temp0->unk_08 = (temp0->unk_08 |= 0x40000);
        temp0->unk_08 = (temp0->unk_08 |= 0x80000);
        temp0->unk_24 = temp.unk_14;
        temp0->unk_28 = temp.unk_18;
        temp0->unk_2C = temp.unk_1C;
        break;
    case 0xD6:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_14 = temp.unk_00.unk_00;
        temp0->unk_08 = (temp0->unk_08 &= 0xFFFF7FFF);
        temp0->unk_08 = (temp0->unk_08 |= 0x100000);
        temp0->unk_30 = temp.unk_14;
        break;
    case 0xD7:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_18 = temp.unk_00.unk_00;
        temp0->unk_08 = (temp0->unk_08 &= 0xFFFF7FFF);
        temp0->unk_08 = (temp0->unk_08 |= 0x200000);
        temp0->unk_34 = temp.unk_18;
        break;
    case 0xD8:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_1C = temp.unk_00.unk_00;
        temp0->unk_08 = (temp0->unk_08 &= 0xFFFF7FFF);
        temp0->unk_08 = (temp0->unk_08 |= 0x400000);
        temp0->unk_38 = temp.unk_1C;
        break;
    case 0xD9:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_14 = temp.unk_00.unk_00;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_18 = temp.unk_00.unk_00;
        temp0->unk_08 = (temp0->unk_08 &= 0xFFFF7FFF);
        temp0->unk_08 = (temp0->unk_08 |= 0x100000);
        temp0->unk_08 = (temp0->unk_08 |= 0x200000);
        temp0->unk_30 = temp.unk_14;
        temp0->unk_34 = temp.unk_18;
        break;
    case 0xDA:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_14 = temp.unk_00.unk_00;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_18 = temp.unk_00.unk_00;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_1C = temp.unk_00.unk_00;
        temp0->unk_08 = (temp0->unk_08 &= 0xFFFF7FFF);
        temp0->unk_08 = (temp0->unk_08 |= 0x100000);
        temp0->unk_08 = (temp0->unk_08 |= 0x200000);
        temp0->unk_08 = (temp0->unk_08 |= 0x400000);
        temp0->unk_30 = temp.unk_14;
        temp0->unk_34 = temp.unk_18;
        temp0->unk_38 = temp.unk_1C;
        break;
    case 0xD0:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_14 = temp.unk_00.unk_00;
        temp0->unk_08 = (temp0->unk_08 |= 0x4000);
        temp0->unk_08 = (temp0->unk_08 |= 0x20000);
        temp0->unk_24 = temp.unk_14;
        break;
    case 0xD1:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_18 = temp.unk_00.unk_00;
        temp0->unk_08 = (temp0->unk_08 |= 0x4000);
        temp0->unk_08 = (temp0->unk_08 |= 0x40000);
        temp0->unk_28 = temp.unk_18;
        break;
    case 0xD2:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_1C = temp.unk_00.unk_00;
        temp0->unk_08 = (temp0->unk_08 |= 0x4000);
        temp0->unk_08 = (temp0->unk_08 |= 0x80000);
        temp0->unk_2C = temp.unk_1C;
        break;
    case 0xD3:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_14 = temp.unk_00.unk_00;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_18 = temp.unk_00.unk_00;
        temp0->unk_08 = (temp0->unk_08 |= 0x4000);
        temp0->unk_08 = (temp0->unk_08 |= 0x20000);
        temp0->unk_08 = (temp0->unk_08 |= 0x40000);
        temp0->unk_24 = temp.unk_14;
        temp0->unk_28 = temp.unk_18;
        break;
    case 0xD4:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_14 = temp.unk_00.unk_00;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_18 = temp.unk_00.unk_00;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_1C = temp.unk_00.unk_00;
        temp0->unk_08 = (temp0->unk_08 |= 0x4000);
        temp0->unk_08 = (temp0->unk_08 |= 0x20000);
        temp0->unk_08 = (temp0->unk_08 |= 0x40000);
        temp0->unk_08 = (temp0->unk_08 |= 0x80000);
        temp0->unk_24 = temp.unk_14;
        temp0->unk_28 = temp.unk_18;
        temp0->unk_2C = temp.unk_1C;
        break;
    case 0xDC:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_14 = temp.unk_00.unk_00;
        temp0->unk_08 = (temp0->unk_08 |= 0x8000);
        temp0->unk_08 = (temp0->unk_08 |= 0x100000);
        temp0->unk_30 = temp.unk_14;
        break;
    case 0xDD:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_18 = temp.unk_00.unk_00;
        temp0->unk_08 = (temp0->unk_08 |= 0x8000);
        temp0->unk_08 = (temp0->unk_08 |= 0x200000);
        temp0->unk_34 = temp.unk_18;
        break;
    case 0xDE:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_1C = temp.unk_00.unk_00;
        temp0->unk_08 = (temp0->unk_08 |= 0x8000);
        temp0->unk_08 = (temp0->unk_08 |= 0x400000);
        temp0->unk_38 = temp.unk_1C;
        break;
    case 0xDF:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_14 = temp.unk_00.unk_00;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_18 = temp.unk_00.unk_00;
        temp0->unk_08 = (temp0->unk_08 |= 0x8000);
        temp0->unk_08 = (temp0->unk_08 |= 0x100000);
        temp0->unk_08 = (temp0->unk_08 |= 0x200000);
        temp0->unk_30 = temp.unk_14;
        temp0->unk_34 = temp.unk_18;
        break;
    case 0xE0:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_14 = temp.unk_00.unk_00;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_18 = temp.unk_00.unk_00;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_1C = temp.unk_00.unk_00;
        temp0->unk_08 = (temp0->unk_08 |= 0x8000);
        temp0->unk_08 = (temp0->unk_08 |= 0x100000);
        temp0->unk_08 = (temp0->unk_08 |= 0x200000);
        temp0->unk_08 = (temp0->unk_08 |= 0x400000);
        temp0->unk_30 = temp.unk_14;
        temp0->unk_34 = temp.unk_18;
        temp0->unk_38 = temp.unk_1C;
        break;
    case 0xE3:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_14 = temp.unk_00.unk_00;
        temp0->unk_08 = (temp0->unk_08 &= 0xFFFEFFFF);
        temp0->unk_08 = (func_001388A0(temp0)->unk_08 |= 0x800000);
        func_00138800(temp0)->unk_3C = temp.unk_14;
        break;
    case 0xE4:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_18 = temp.unk_00.unk_00;
        temp0->unk_08 = (temp0->unk_08 &= 0xFFFEFFFF);
        temp0->unk_08 = (func_001388A0(temp0)->unk_08 |= 0x01000000);
        func_00138800(temp0)->unk_40 = temp.unk_18;
        break;
    case 0xE5:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_1C = temp.unk_00.unk_00;
        temp0->unk_08 = (temp0->unk_08 &= 0xFFFEFFFF);
        temp0->unk_08 = (func_001388A0(temp0)->unk_08 |= 0x02000000);
        func_00138800(temp0)->unk_44 = temp.unk_1C;
        break;
    case 0xE6:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_14 = temp.unk_00.unk_00;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_18 = temp.unk_00.unk_00;
        temp0->unk_08 = (temp0->unk_08 &= 0xFFFEFFFF);
        temp0->unk_08 = (func_001388A0(temp0)->unk_08 |= 0x800000);
        temp0->unk_08 = (func_001388A0(temp0)->unk_08 |= 0x01000000);
        func_00138800(temp0)->unk_3C = temp.unk_14;
        func_00138800(temp0)->unk_40 = temp.unk_18;
        break;
    case 0xE7:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_14 = temp.unk_00.unk_00;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_18 = temp.unk_00.unk_00;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_1C = temp.unk_00.unk_00;
        temp0->unk_08 = (temp0->unk_08 &= 0xFFFEFFFF);
        temp0->unk_08 = (func_001388A0(temp0)->unk_08 |= 0x800000);
        temp0->unk_08 = (func_001388A0(temp0)->unk_08 |= 0x01000000);
        temp0->unk_08 = (func_001388A0(temp0)->unk_08 |= 0x02000000);
        func_00138800(temp0)->unk_3C = temp.unk_14;
        func_00138800(temp0)->unk_40 = temp.unk_18;
        func_00138800(temp0)->unk_44 = temp.unk_1C;
        break;
    case 0xE9:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_14 = temp.unk_00.unk_00;
        temp0->unk_08 = (temp0->unk_08 |= 0x10000);
        temp0->unk_08 = (func_001388A0(temp0)->unk_08 |= 0x800000);
        temp0->unk_24 = temp.unk_14;
        break;
    case 0xEA:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_18 = temp.unk_00.unk_00;
        temp0->unk_08 = (temp0->unk_08 |= 0x10000);
        temp0->unk_08 = (func_001388A0(temp0)->unk_08 |= 0x01000000);
        temp0->unk_28 = temp.unk_18;
        break;
    case 0xEB:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_1C = temp.unk_00.unk_00;
        temp0->unk_08 = (temp0->unk_08 |= 0x10000);
        temp0->unk_08 = (func_001388A0(temp0)->unk_08 |= 0x02000000);
        temp0->unk_2C = temp.unk_1C;
        break;
    case 0xEC:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_14 = temp.unk_00.unk_00;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_18 = temp.unk_00.unk_00;
        temp0->unk_08 = (temp0->unk_08 |= 0x10000);
        temp0->unk_08 = (func_001388A0(temp0)->unk_08 |= 0x800000);
        temp0->unk_08 = (func_001388A0(temp0)->unk_08 |= 0x01000000);
        temp0->unk_24 = temp.unk_14;
        temp0->unk_28 = temp.unk_18;
        break;
    case 0xED:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_14 = temp.unk_00.unk_00;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_18 = temp.unk_00.unk_00;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_1C = temp.unk_00.unk_00;
        temp0->unk_08 = (temp0->unk_08 |= 0x10000);
        temp0->unk_08 = (func_001388A0(temp0)->unk_08 |= 0x800000);
        temp0->unk_08 = (func_001388A0(temp0)->unk_08 |= 0x01000000);
        temp0->unk_08 = (func_001388A0(temp0)->unk_08 |= 0x02000000);
        temp0->unk_24 = temp.unk_14;
        temp0->unk_28 = temp.unk_18;
        temp0->unk_2C = temp.unk_1C;
        break;
    case 0x13A:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_14 = temp.unk_00.unk_00;
        temp0->unk_08 = (func_001388A0(temp0)->unk_08 |= 0x04000000);
        func_00138800(temp0)->unk_48 = temp.unk_14;
        break;
    case 0x13B:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_18 = temp.unk_00.unk_00;
        temp0->unk_08 = (func_001388A0(temp0)->unk_08 |= 0x08000000);
        func_00138800(temp0)->unk_4C = temp.unk_18;
        break;
    case 0x13D:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_14 = temp.unk_00.unk_00;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_18 = temp.unk_00.unk_00;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_1C = temp.unk_00.unk_00;
        temp0->unk_08 = (func_001388A0(temp0)->unk_08 |= 0x04000000);
        temp0->unk_08 = (func_001388A0(temp0)->unk_08 |= 0x08000000);
        temp0->unk_08 = (func_001388A0(temp0)->unk_08 |= 0x10000000);
        func_00138800(temp0)->unk_48 = temp.unk_14;
        func_00138800(temp0)->unk_4C = temp.unk_18;
        func_00138800(temp0)->unk_50 = temp.unk_1C;
        break;
    case 0x13C:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp.unk_00);
        temp.unk_1C = temp.unk_00.unk_00;
        temp0->unk_08 = (func_001388A0(temp0)->unk_08 |= 0x10000000);
        func_00138800(temp0)->unk_50 = temp.unk_1C;
        break;
    case 0x13E:
        temp0->unk_08 = (temp0->unk_08 &= 0xFBFFFFFF);
        break;
    case 0x13F:
        temp0->unk_08 = (temp0->unk_08 &= 0xF7FFFFFF);
        break;
    case 0x140:
        temp0->unk_08 = (temp0->unk_08 &= 0xEFFFFFFF);
        break;
    case 0x141:
        temp0->unk_08 = (temp0->unk_08 &= 0xFBFFFFFF);
        temp0->unk_08 = (temp0->unk_08 &= 0xF7FFFFFF);
        temp0->unk_08 = (temp0->unk_08 &= 0xEFFFFFFF);
        break;
    case 0x14B:
        temp0->unk_0C = (temp0->unk_0C &= 0xFFBFFFFF);
        break;
    }
    return arg1;
}
