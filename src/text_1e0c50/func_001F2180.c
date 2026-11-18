/* profile: o0_301 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_001F2180_0;

extern s32 D_005AB800[];

f32 func_00151360(f32);
u32 func_0019D250(void);
f32 func_001E60E0(f32);
s32 func_001E6A60(s32, s32);

void func_001F2180(s32 arg0, unk_001F2180_0 *arg1, unk_001F2180_0 *arg2,
                  unk_001F2180_0 *arg3, s32 arg4, s32 arg5) {
    unk_001F2180_0 temp;
    f32 temp0, temp1, temp2, temp3, temp4;
    s32 temp5;

    temp.unk_00 = arg2->unk_00 - arg1->unk_00;
    temp.unk_04 = arg2->unk_04 - arg1->unk_04;
    temp.unk_08 = arg2->unk_08 - arg1->unk_08;
    temp0 = func_001E60E0(func_00151360(temp.unk_00) + func_00151360(temp.unk_04)
                          + func_00151360(temp.unk_08));
    temp.unk_00 = arg3->unk_00 - arg1->unk_00;
    temp.unk_04 = arg3->unk_04 - arg1->unk_04;
    temp.unk_08 = arg3->unk_08 - arg1->unk_08;
    temp1 = func_001E60E0(func_00151360(temp.unk_00) + func_00151360(temp.unk_04)
                          + func_00151360(temp.unk_08));
    temp2 = temp0 / (f32)arg4;
    temp5 = D_005AB800[0] - func_001E6A60(5, arg0);
    if (temp5 < arg5) {
        temp2 = (f32)temp5 * (temp2 / (f32)arg5);
    }
    if (arg4 - arg5 < temp5) {
        temp3 = (f32)temp5 * -(temp2 / (f32)arg5);
        temp2 = temp3 + (f32)arg4 * temp2 / (f32)arg5;
    }

    temp.unk_00 = arg2->unk_00 - arg1->unk_00;
    temp.unk_04 = arg2->unk_04 - arg1->unk_04;
    temp.unk_08 = arg2->unk_08 - arg1->unk_08;
    temp4 = func_001E60E0(func_00151360(temp.unk_00) + func_00151360(temp.unk_04)
                          + func_00151360(temp.unk_08));
    if (temp4 != 0.0f) {
        temp4 = 1.0f / temp4;
        temp.unk_00 = temp4 * temp.unk_00;
        temp.unk_04 = temp4 * temp.unk_04;
        temp.unk_08 = temp4 * temp.unk_08;
    } else {
        temp = temp;
    }
    temp2 *= (f32)func_0019D250();
    temp.unk_00 = temp2 * temp.unk_00;
    temp.unk_04 = temp2 * temp.unk_04;
    temp.unk_08 = temp2 * temp.unk_08;
    arg2->unk_00 = temp.unk_00 + arg3->unk_00;
    arg2->unk_04 = temp.unk_04 + arg3->unk_04;
    arg2->unk_08 = temp.unk_08 + arg3->unk_08;
}
