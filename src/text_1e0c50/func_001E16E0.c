/* profile: opt_300 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_001E16E0_0;

s32 func_001E19F0(unk_001E16E0_0 *, unk_001E16E0_0 *, unk_001E16E0_0 *, f32);
s16 func_001E39A0(f32 *, f32 *, f32, f32, f32);

s32 func_001E16E0(unk_001E16E0_0 *arg0, unk_001E16E0_0 *arg1,
                  unk_001E16E0_0 *arg2, f32 *arg3, unk_001E16E0_0 *arg4,
                  unk_001E16E0_0 *arg5, f32 arg6) {
    f32 temp0;
    f32 temp1;
    f32 temp2;
    f32 temp3;
    f32 temp4;
    f32 temp5;
    f32 temp6;
    f32 temp7;
    f32 temp8;
    f32 temp11;
    f32 temp12;
    f32 temp13;

    if (!func_001E19F0(arg0, arg1, arg2, arg6)) {
        return 0;
    }

    temp2 = arg0->unk_00 - arg2->unk_00;
    temp3 = arg0->unk_04 - arg2->unk_04;
    temp4 = arg0->unk_08 - arg2->unk_08;
    temp11 = arg1->unk_04;
    temp12 = arg1->unk_00;
    temp13 = arg1->unk_08;
    temp5 = temp12 * temp2 + temp11 * temp3 + temp13 * temp4;
    temp6 = temp12 * temp12 + temp11 * temp11 + temp13 * temp13;
    temp7 = (temp4 * temp4 + (temp2 * temp2 + temp3 * temp3)) - arg6 * arg6;

    temp5 += temp5;
    switch (func_001E39A0(&temp0, &temp1, temp6, temp5, temp7)) {
    case 2:
        temp8 = temp0 < temp1 ? temp0 : temp1;
        if (!(temp8 < 0.0f) && temp8 <= 1.0f) {
            f32 temp9 = 1.0f / arg6;
            *arg3 = temp8;
            arg4->unk_00 = arg0->unk_00 + temp8 * arg1->unk_00;
            arg4->unk_04 = arg0->unk_04 + temp8 * arg1->unk_04;
            arg4->unk_08 = arg0->unk_08 + temp8 * arg1->unk_08;
            arg5->unk_00 = arg4->unk_00 - arg2->unk_00;
            arg5->unk_04 = arg4->unk_04 - arg2->unk_04;
            arg5->unk_08 = arg4->unk_08 - arg2->unk_08;
            arg5->unk_00 = temp9 * arg5->unk_00;
            arg5->unk_04 = temp9 * arg5->unk_04;
            arg5->unk_08 = temp9 * arg5->unk_08;
            return 1;
        }
        return 0;
    case 1:
        if (!(temp0 < 0.0f) && temp0 <= 1.0f) {
            f32 temp10;
            *arg3 = temp0;
            temp10 = 1.0f / arg6;
            arg4->unk_00 = arg0->unk_00 + temp0 * arg1->unk_00;
            arg4->unk_04 = arg0->unk_04 + temp0 * arg1->unk_04;
            arg4->unk_08 = arg0->unk_08 + temp0 * arg1->unk_08;
            arg5->unk_00 = arg4->unk_00 - arg2->unk_00;
            arg5->unk_04 = arg4->unk_04 - arg2->unk_04;
            arg5->unk_08 = arg4->unk_08 - arg2->unk_08;
            arg5->unk_00 = temp10 * arg5->unk_00;
            arg5->unk_04 = temp10 * arg5->unk_04;
            arg5->unk_08 = temp10 * arg5->unk_08;
            return 1;
        }
        break;
    }
    return 0;
}
