/* profile: o0_301_p */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    u8 pad_0C[4];
} unk_001FEAF0_0;

f32 func_00151360(f32);
f32 func_001E60E0(f32);

f32 func_001FEAF0(unk_001FEAF0_0 *arg0, unk_001FEAF0_0 *arg1, unk_001FEAF0_0 *arg2)
{
    unk_001FEAF0_0 temp0;
    unk_001FEAF0_0 temp1;
    unk_001FEAF0_0 temp2;
    f32 temp3[3];
    f32 temp4;
    f32 temp5;
    f32 temp6;
    f32 temp7;
    f32 temp8;

    temp1.unk_00 = arg0->unk_00 - arg1->unk_00;
    temp1.unk_04 = arg0->unk_04 - arg1->unk_04;
    temp1.unk_08 = arg0->unk_08 - arg1->unk_08;
    temp0.unk_00 = arg2->unk_00 - arg1->unk_00;
    temp0.unk_04 = arg2->unk_04 - arg1->unk_04;
    temp0.unk_08 = arg2->unk_08 - arg1->unk_08;
    temp6 = func_00151360(temp0.unk_00) + func_00151360(temp0.unk_04) + func_00151360(temp0.unk_08);
    if (0.0f == temp6) {
        return 3.402822e38f;
    }
    temp5 = temp0.unk_00 * temp1.unk_00 + temp0.unk_04 * temp1.unk_04 + temp0.unk_08 * temp1.unk_08;
    temp4 = temp5 / temp6;
    if (temp4 < 0.0f) {
        temp7 = func_001E60E0(func_00151360(arg1->unk_00 - arg0->unk_00)
            + func_00151360(arg1->unk_04 - arg0->unk_04)
            + func_00151360(arg1->unk_08 - arg0->unk_08));
        temp8 = func_001E60E0(func_00151360(arg2->unk_00 - arg0->unk_00)
            + func_00151360(arg2->unk_04 - arg0->unk_04)
            + func_00151360(arg2->unk_08 - arg0->unk_08));
        if (!(temp7 <= temp8)) {
            return temp8;
        } else {
            return temp7;
        }
    }
    temp2.unk_00 = temp4 * temp0.unk_00;
    temp2.unk_04 = temp4 * temp0.unk_04;
    temp2.unk_08 = temp4 * temp0.unk_08;
    temp3[0] = temp2.unk_00 + arg1->unk_00;
    temp3[1] = temp2.unk_04 + arg1->unk_04;
    temp3[2] = temp2.unk_08 + arg1->unk_08;
    return func_001E60E0(func_00151360(temp3[0] - arg0->unk_00)
        + func_00151360(temp3[1] - arg0->unk_04)
        + func_00151360(temp3[2] - arg0->unk_08));
}
