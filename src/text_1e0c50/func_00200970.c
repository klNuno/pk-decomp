/* profile: o0_301_p */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_00200970_0;

typedef struct {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
} unk_00200970_2;

typedef struct {
    f32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0C;
} unk_00200970_1;

f32 func_00151360(f32);
f32 func_001E60E0(f32);
s32 func_002002F0(s32, unk_00200970_0 *, unk_00200970_0 *, s32);
void func_001388F0(unk_00200970_1 *, unk_00200970_0 *, unk_00200970_0 *);

s32 func_00200970(s32 arg0, unk_00200970_0 *arg1, unk_00200970_0 *arg2,
                  f32 arg3, f32 arg4, s32 arg5, s32 arg6)
{
    unk_00200970_1 temp0;
    unk_00200970_0 temp1;
    unk_00200970_0 temp2;
    unk_00200970_0 temp3;
    unk_00200970_0 temp4;
    unk_00200970_0 temp5;
    unk_00200970_0 temp6;
    unk_00200970_0 temp7;
    f32 temp8;
    f32 temp9;
    s32 temp10;

    if (arg5 == 1) {
        return func_002002F0(arg0, arg1, arg2, arg6);
    }

    temp1.unk_00 = arg2->unk_00 - arg1->unk_00;
    temp1.unk_04 = arg2->unk_04 - arg1->unk_04;
    temp1.unk_08 = arg2->unk_08 - arg1->unk_08;
    temp8 = func_001E60E0(func_00151360(temp1.unk_08) +
                         (func_00151360(temp1.unk_00) + func_00151360(temp1.unk_04)));
    if (0.0f != temp8) {
        temp8 = 1.0f / temp8;
        temp1.unk_00 = temp8 * temp1.unk_00;
        temp1.unk_04 = temp8 * temp1.unk_04;
        temp1.unk_08 = temp8 * temp1.unk_08;
    } else {
        temp1 = temp1;
    }

    temp6.unk_04 = temp6.unk_00 = 0.0f;
    temp6.unk_08 = 1.0f;
    temp7.unk_00 = temp1.unk_04 * temp6.unk_08 - temp1.unk_08 * temp6.unk_04;
    temp7.unk_04 = temp1.unk_08 * temp6.unk_00 - temp1.unk_00 * temp6.unk_08;
    temp7.unk_08 = temp1.unk_00 * temp6.unk_04 - temp1.unk_04 * temp6.unk_00;
    if (0.0f == temp7.unk_00 && 0.0f == temp7.unk_04 && 0.0f == temp7.unk_08) {
        temp6.unk_00 = 1.0f;
        temp6.unk_08 = temp6.unk_04 = 0.0f;
        temp7.unk_00 = temp1.unk_04 * temp6.unk_08 - temp1.unk_08 * temp6.unk_04;
        temp7.unk_04 = temp1.unk_08 * temp6.unk_00 - temp1.unk_00 * temp6.unk_08;
        temp7.unk_08 = temp1.unk_00 * temp6.unk_04 - temp1.unk_04 * temp6.unk_00;
    }

    temp9 = func_001E60E0(func_00151360(temp7.unk_08) +
                         (func_00151360(temp7.unk_00) + func_00151360(temp7.unk_04)));
    if (0.0f != temp9) {
        temp9 = 1.0f / temp9;
        temp7.unk_00 = temp9 * temp7.unk_00;
        temp7.unk_04 = temp9 * temp7.unk_04;
        temp7.unk_08 = temp9 * temp7.unk_08;
    } else {
        temp7 = temp7;
    }
    temp7.unk_00 = arg3 * temp7.unk_00;
    temp7.unk_04 = arg3 * temp7.unk_04;
    temp7.unk_08 = arg3 * temp7.unk_08;

    ((unk_00200970_2 *)(void *)&temp0.unk_04)->unk_00 = ((unk_00200970_2 *)(void *)&temp1)->unk_00;
    ((unk_00200970_2 *)(void *)&temp0.unk_04)->unk_04 = ((unk_00200970_2 *)(void *)&temp1)->unk_04;
    ((unk_00200970_2 *)(void *)&temp0.unk_04)->unk_08 = ((unk_00200970_2 *)(void *)&temp1)->unk_08;
    temp0.unk_00 = 6.2831855f / (f32)arg5;
    for (temp10 = 0; temp10 < arg5; temp10++) {
        temp2.unk_00 = arg3 * temp7.unk_00;
        temp2.unk_04 = arg3 * temp7.unk_04;
        temp2.unk_08 = arg3 * temp7.unk_08;
        temp3.unk_00 = temp2.unk_00 + arg1->unk_00;
        temp3.unk_04 = temp2.unk_04 + arg1->unk_04;
        temp3.unk_08 = temp2.unk_08 + arg1->unk_08;
        temp4.unk_00 = arg4 * temp7.unk_00;
        temp4.unk_04 = arg4 * temp7.unk_04;
        temp4.unk_08 = arg4 * temp7.unk_08;
        temp5.unk_00 = temp4.unk_00 + arg2->unk_00;
        temp5.unk_04 = temp4.unk_04 + arg2->unk_04;
        temp5.unk_08 = temp4.unk_08 + arg2->unk_08;
        if (func_002002F0(arg0, &temp3, &temp5, arg6) != 0) {
            return 1;
        }
        func_001388F0(&temp0, &temp7, &temp7);
    }
    return 0;
}
