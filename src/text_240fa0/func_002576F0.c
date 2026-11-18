/* profile: o0_301 */
#include "common.h"

typedef struct {
    f32 unk_00, unk_04, unk_08;
} unk_func_002576F0_0;

extern f32 func_001156B8(f32);
extern f32 func_00151360(f32);
extern f32 func_001E60E0(f32);

f32 func_002576F0(const unk_func_002576F0_0 *arg0, const unk_func_002576F0_0 *arg1)
{
    unk_func_002576F0_0 temp0, temp1;
    f32 temp2, temp3, temp4, temp5, temp6;

    temp0.unk_00 = arg0->unk_00;
    temp0.unk_04 = arg0->unk_04;
    temp0.unk_08 = temp1.unk_08 = 0.0f;
    temp1.unk_00 = arg1->unk_00;
    temp1.unk_04 = arg1->unk_04;

    if ((temp0.unk_00 == 0.0f && temp0.unk_04 == 0.0f && temp0.unk_08 == 0.0f)
        || (temp1.unk_00 == 0.0f && temp1.unk_04 == 0.0f && temp1.unk_08 == 0.0f)) {
        temp3 = 0.0f;
    } else {
        temp5 = func_001E60E0(func_00151360(temp0.unk_00) + func_00151360(temp0.unk_04) + func_00151360(temp0.unk_08));
        if (temp5 != 0.0f) {
            temp5 = 1.0f / temp5;
            temp0.unk_00 = temp5 * temp0.unk_00;
            temp0.unk_04 = temp5 * temp0.unk_04;
            temp0.unk_08 = temp5 * temp0.unk_08;
        } else {
            temp0 = temp0;
        }

        temp6 = func_001E60E0(func_00151360(temp1.unk_00) + func_00151360(temp1.unk_04) + func_00151360(temp1.unk_08));
        if (temp6 != 0.0f) {
            temp6 = 1.0f / temp6;
            temp1.unk_00 = temp6 * temp1.unk_00;
            temp1.unk_04 = temp6 * temp1.unk_04;
            temp1.unk_08 = temp6 * temp1.unk_08;
        } else {
            temp1 = temp1;
        }

        temp2 = temp0.unk_00 * temp1.unk_00 + temp0.unk_04 * temp1.unk_04 + temp0.unk_08 * temp1.unk_08;
        if (temp2 > 1.0f) {
            temp2 = 1.0f;
        } else if (temp2 < -1.0f) {
            temp2 = -1.0f;
        }
        temp3 = func_001156B8(temp2);
        temp4 = temp0.unk_00 * temp1.unk_04 - temp0.unk_04 * temp1.unk_00;
        if (temp4 < 0.0f) {
            temp3 = -temp3;
        }
    }
    return temp3;
}
