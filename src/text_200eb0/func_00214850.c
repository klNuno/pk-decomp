/* profile: o0_301 */
#include "common.h"

typedef struct {
    f32 unk_00, unk_04, unk_08;
} unk_func_00214850_0;

typedef union {
    s8 unk_00;
    s32 unk_04;
    unk_func_00214850_0 unk_08;
    u32 unk_0C[3];
} unk_func_00214850_4;

typedef struct {
    unk_func_00214850_4 unk_00;
    s32 unk_0C;
} unk_func_00214850_1;

typedef struct {
    s32 unk_00;
    u8 pad_04[4];
    s32 unk_08;
} unk_func_00214850_2;

typedef struct {
    u8 pad_00[8];
    u32 unk_08;
} unk_func_00214850_3;

extern unk_func_00214850_2 *HIE_fn_hGetSuperObjectObject(s32);
extern s32 *fn_p_stEvalTree(s32, s32 *, unk_func_00214850_1 *);
extern void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
extern void func_0012DAE0(s32);
extern void func_0014FEA0(s32, unk_func_00214850_0 *);
extern void func_0014FFA0(s32, unk_func_00214850_0 *);
extern void func_00150060(s32, unk_func_00214850_0 *, unk_func_00214850_0 *, unk_func_00214850_0 *);
extern void func_00155EC0(s32, unk_func_00214850_0 *);
extern void func_001562B0(s32, unk_func_00214850_0 *);
extern s32 func_001979A0(s32);
extern s32 func_001979C0(s32);
extern s32 func_0019C730(s32);
extern s32 func_001ACF40(s32, s32);
extern unk_func_00214850_3 *func_001B84B0(s32);
extern s32 *func_001EB720(s32 *);
extern void func_001EDBB0(s32, s32);
extern s32 func_00208CC0(s32);

s32 *func_00214850(s32 arg0, s32 *arg1, unk_func_00214850_1 *arg2) {
    s32 temp0, temp1, temp2;
    u8 temp3;
    s32 temp4;
    unk_func_00214850_4 temp5;
    unk_func_00214850_0 temp6, temp7, temp8, temp9;
    s32 temp10;

    temp1 = arg1[-2];
    temp2 = 1;
    fn_vGetUltraOperatorPerso(func_00208CC0(temp1), arg0, &temp10);
    temp5.unk_08.unk_08 = temp5.unk_08.unk_04 = temp5.unk_08.unk_00 = 0.0f;
    switch (temp1) {
    case 0xE0:
        temp2 = 0;
        break;
    case 0x11A:
    case 0x11B:
        temp2 = 0;
    case 0x119:
    case 0x11C:
    case 0x11D:
    case 0x11E:
        arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
        temp3 = arg2->unk_00.unk_00;
        if (temp3 == 0xFF) {
            arg2->unk_00.unk_0C[0] = ((u32 (*)[3])&temp5.unk_0C)[0][0];
            arg2->unk_00.unk_0C[1] = ((u32 (*)[3])&temp5.unk_0C)[0][1];
            arg2->unk_00.unk_0C[2] = ((u32 (*)[3])&temp5.unk_0C)[0][2];
            arg2->unk_0C = 0x15;
            return func_001EB720(arg1);
        }
        temp4 = func_001ACF40(func_0019C730(HIE_fn_hGetSuperObjectObject(temp10)->unk_00), temp3);
        if (temp4 != 0) {
            temp10 = temp4;
        }
        if (temp1 == 0x11C || temp1 == 0x11D || temp1 == 0x11E) {
            arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
            temp2 = arg2->unk_00.unk_04;
        }
        break;
    default:
        func_001EDBB0(0x27, 0);
        return arg1;
    case 0xE3:
    case 0xE2:
        break;
    }

    func_0012DAE0(temp10);
    temp0 = temp2 ? func_001979C0(temp10) : func_001979A0(temp10);
    switch (temp1) {
    case 0xE3: {
        s32 temp11;
        unk_func_00214850_3 *temp12;

        if ((temp11 = HIE_fn_hGetSuperObjectObject(temp10)->unk_08) != 0 &&
            (temp12 = func_001B84B0(temp11)) != NULL &&
            ((temp12->unk_08 & 8) ? 1 : 0) != 0) {
            temp5.unk_08.unk_00 = 0.0f;
            temp5.unk_08.unk_04 = 0.0f;
            temp5.unk_08.unk_08 = 1.0f;
        } else {
            func_00150060(temp0, &temp6, &temp7, &temp5.unk_08);
        }
        break;
    }
    case 0xE2:
        func_0014FFA0(temp0, &temp5.unk_08);
        break;
    case 0x11E:
        func_00150060(temp0, &temp8, &temp9, &temp5.unk_08);
        break;
    case 0x11D:
        func_0014FFA0(temp0, &temp5.unk_08);
        break;
    case 0x11C:
        func_0014FEA0(temp0, &temp5.unk_08);
        temp5.unk_08.unk_00 = -temp5.unk_08.unk_00;
        temp5.unk_08.unk_04 = -temp5.unk_08.unk_04;
        temp5.unk_08.unk_08 = -temp5.unk_08.unk_08;
        break;
    case 0x11B:
    case 0xE0:
        func_001562B0(temp0, &temp5.unk_08);
        break;
    case 0x11A:
    case 0x119:
        func_00155EC0(temp0, &temp5.unk_08);
        break;
    }
    arg2->unk_00.unk_0C[0] = ((u32 (*)[3])&temp5.unk_0C)[0][0];
    arg2->unk_00.unk_0C[1] = ((u32 (*)[3])&temp5.unk_0C)[0][1];
    arg2->unk_00.unk_0C[2] = ((u32 (*)[3])&temp5.unk_0C)[0][2];
    arg2->unk_0C = 0x15;
    return arg1;
}
