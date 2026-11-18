/* profile: o0_301 */
#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_002119D0_0;

typedef struct {
    f32 unk_00;
    u8 pad_04[0x14];
} unk_func_002119D0_1;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    u8 pad_0C[4];
} unk_func_002119D0_2;

typedef struct {
    u8 pad_00[0x18];
    s32 unk_18;
} unk_func_002119D0_3;

typedef struct {
    unk_func_002119D0_1 unk_00;
    unk_func_002119D0_2 unk_18;
    unk_func_002119D0_2 unk_28;
    s32 unk_38;
    f32 unk_3C;
} unk_func_002119D0_4;

unk_func_002119D0_3 *HIE_fn_hGetSuperObjectObject(s32);
s32 *fn_p_stEvalTree(s32, s32 *, unk_func_002119D0_1 *);
void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
f32 func_00151360(f32);
void func_00155EC0(s32, unk_func_002119D0_2 *);
s32 func_001979A0(s32);
s32 func_001BB6A0(s32);
s32 func_001BB6F0(s32);
s32 func_001BBA90(s32, s32);
f32 func_001E60E0(f32);
void func_001F0CC0(s32, unk_func_002119D0_2 *);
f32 func_001F0D40(s32);
s32 func_00208CC0(s32);

s32 *func_002119D0(s32 arg0, s32 *arg1, unk_func_002119D0_0 *arg2)
{
    s32 temp0;
    s32 temp1;
    s32 temp2;
    s32 temp3;
    s32 temp4;
    s32 temp5;
    unk_func_002119D0_4 temp6;

    temp4 = arg1[-2];
    temp3 = 0;
    fn_vGetUltraOperatorPerso(func_00208CC0(temp4), arg0, &temp6.unk_38);
    arg1 = fn_p_stEvalTree(arg0, arg1, &temp6.unk_00);
    temp6.unk_3C = temp6.unk_00.unk_00;
    temp0 = HIE_fn_hGetSuperObjectObject(temp6.unk_38)->unk_18;
    if (temp0 == 0) {
        arg2->unk_00 = -1;
        arg2->unk_0C = 6;
        return arg1;
    }

    temp5 = func_001BB6A0(temp0);
    temp1 = func_001BB6F0(temp0);
    if (temp1 == 1) {
        temp3 = 1;
        temp2 = func_001BBA90(temp0, 0);
    } else if (temp1 == temp5 - 1) {
        temp3 = 2;
        temp2 = func_001BBA90(temp0, temp1);
    } else {
        arg2->unk_00 = 0;
        arg2->unk_0C = 6;
        return arg1;
    }

    if (0.0f == temp6.unk_3C)
        temp6.unk_3C = func_001F0D40(temp2);
    func_00155EC0(func_001979A0(temp6.unk_38), &temp6.unk_28);
    func_001F0CC0(temp2, &temp6.unk_18);

    if ((temp6.unk_18.unk_00 != temp6.unk_28.unk_00 || temp6.unk_18.unk_04 != temp6.unk_28.unk_04 || temp6.unk_18.unk_08 != temp6.unk_28.unk_08) &&
        func_001E60E0(func_00151360(temp6.unk_18.unk_00 - temp6.unk_28.unk_00) +
                       func_00151360(temp6.unk_18.unk_04 - temp6.unk_28.unk_04) +
                       func_00151360(temp6.unk_18.unk_08 - temp6.unk_28.unk_08)) < temp6.unk_3C) {
        arg2->unk_00 = temp3;
        arg2->unk_0C = 6;
    } else {
        arg2->unk_00 = 0;
        arg2->unk_0C = 6;
    }
    return arg1;
}