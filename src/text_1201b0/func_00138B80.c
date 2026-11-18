#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00138B80_0;

typedef struct {
    f32 unk_00;
    unk_func_00138B80_0 unk_04;
} unk_func_00138B80_1;

f32 func_001E60E0(f32);
f32 func_001156B8(f32);

static inline f32 unk_abs(f32 arg0)
{
    return arg0 > 0.0f ? arg0 : -arg0;
}

unk_func_00138B80_1 *func_00138B80(unk_func_00138B80_1 *arg0, const unk_func_00138B80_0 *arg1,
                                     const unk_func_00138B80_0 *arg2)
{
    unk_func_00138B80_0 *temp0;
    f32 temp7;
    f32 temp1;
    f32 temp2;
    f32 temp3;

    arg0->unk_04.unk_00 = arg1->unk_04 * arg2->unk_08 - arg1->unk_08 * arg2->unk_04;
    arg0->unk_04.unk_04 = arg1->unk_08 * arg2->unk_00 - arg1->unk_00 * arg2->unk_08;
    arg0->unk_04.unk_08 = arg1->unk_00 * arg2->unk_04 - arg1->unk_04 * arg2->unk_00;
    temp7 = arg0->unk_04.unk_00;
    temp0 = &arg0->unk_04;
    if (unk_abs(temp7) < 0.00001f &&
        unk_abs(temp0->unk_04) < 0.00001f &&
        unk_abs(temp0->unk_08) < 0.00001f) {
        if (unk_abs(arg1->unk_00 - arg2->unk_00) < 0.00001f &&
            unk_abs(arg1->unk_04 - arg2->unk_04) < 0.00001f &&
            unk_abs(arg1->unk_08 - arg2->unk_08) < 0.00001f) {
            arg0->unk_00 = 0.0f;
            arg0->unk_04.unk_00 = 0.0f;
            arg0->unk_04.unk_04 = 0.0f;
            arg0->unk_04.unk_08 = 0.0f;
        } else {
            arg0->unk_00 = 3.1415927f;
        }
    } else {
        f32 temp4 = temp0->unk_04;
        f32 temp5 = temp7;
        f32 temp6 = temp0->unk_08;
        temp1 = func_001E60E0(temp5 * temp5 + temp4 * temp4 + temp6 * temp6);
        if (0.0f != temp1) {
            temp2 = 1.0f / temp1;
            temp0->unk_00 = temp2 * temp0->unk_00;
            temp0->unk_04 = temp2 * temp0->unk_04;
            temp0->unk_08 = temp2 * temp0->unk_08;
        }
        temp3 = arg1->unk_00 * arg2->unk_00 + arg1->unk_04 * arg2->unk_04 +
                arg1->unk_08 * arg2->unk_08;
        if (temp3 <= -1.0f) {
            arg0->unk_00 = 3.1415927f;
        } else if (temp3 >= 1.0f) {
            arg0->unk_00 = 0.0f;
            arg0->unk_04.unk_00 = 0.0f;
            arg0->unk_04.unk_04 = 0.0f;
            arg0->unk_04.unk_08 = 0.0f;
        } else {
            arg0->unk_00 = func_001156B8(temp3);
        }
    }
    return arg0;
}
