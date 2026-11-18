/* profile: opt_300 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001E2850_0;

extern "C" {
u8 func_001E2CD0(unk_func_001E2850_0 *, unk_func_001E2850_0 *, unk_func_001E2850_0 *,
                 unk_func_001E2850_0 *, f32, s32);
s32 func_001E3660(unk_func_001E2850_0 *, unk_func_001E2850_0 *, unk_func_001E2850_0 *);

s32 func_001E2850(unk_func_001E2850_0 *arg0, unk_func_001E2850_0 *arg1,
                  unk_func_001E2850_0 *arg2, unk_func_001E2850_0 *arg3, f32 *arg4)
{
    unk_func_001E2850_0 temp0;
    f32 temp1;
    bool temp2;
    s32 temp4;
    f32 *temp3;
    s32 temp5;
    s32 temp6;
    s32 temp7;

    if (arg4 == NULL) {
        temp2 = false;
        temp3 = &temp1;
    } else {
        temp3 = arg4;
        temp2 = true;
    }
    temp4 = func_001E3660(arg0, arg2, arg3);
    if (temp4 == 0) {
        *temp3 = 0.0f;
        return 1;
    }
    temp0.unk_00 = arg0->unk_00 + arg1->unk_00;
    temp0.unk_04 = arg0->unk_04 + arg1->unk_04;
    temp0.unk_08 = arg0->unk_08 + arg1->unk_08;
    temp5 = func_001E3660(&temp0, arg2, arg3);
    if (temp5 == 0) {
        *temp3 = 1.0f;
        return 1;
    }
    if (temp4 & temp5) {
        return 0;
    }
    temp6 = temp4 | temp5;
    if (!(temp6 & 0xF)) {
        if (!temp2) {
            return 1;
        }
        if (temp4 & 0x10) {
            *temp3 = arg2->unk_08 - arg0->unk_08;
        } else {
            *temp3 = arg3->unk_08 - arg0->unk_08;
        }
        *temp3 /= arg1->unk_08;
        return 1;
    }
    if (!(temp6 & 0x33)) {
        if (!temp2) {
            return 1;
        }
        if (temp4 & 4) {
            *temp3 = arg2->unk_04 - arg0->unk_04;
        } else {
            *temp3 = arg3->unk_04 - arg0->unk_04;
        }
        *temp3 /= arg1->unk_04;
        return 1;
    }
    if (!(temp6 & 0x3C)) {
        if (!temp2) {
            return 1;
        }
        if (temp4 & 1) {
            *temp3 = arg2->unk_00 - arg0->unk_00;
        } else {
            *temp3 = arg3->unk_00 - arg0->unk_00;
        }
        *temp3 /= arg1->unk_00;
        return 1;
    }
    if (temp4 & 1) {
        *temp3 = arg2->unk_00 - arg0->unk_00;
        *temp3 /= arg1->unk_00;
        temp7 = func_001E2CD0(arg0, arg1, arg2, arg3, *temp3, 'X');
        if (temp7 < 2) {
            return temp7;
        }
    }
    if (temp4 & 2) {
        *temp3 = arg3->unk_00 - arg0->unk_00;
        *temp3 /= arg1->unk_00;
        temp7 = func_001E2CD0(arg0, arg1, arg2, arg3, *temp3, 'X');
        if (temp7 < 2) {
            return temp7;
        }
    }
    if (temp4 & 4) {
        *temp3 = arg2->unk_04 - arg0->unk_04;
        *temp3 /= arg1->unk_04;
        temp7 = func_001E2CD0(arg0, arg1, arg2, arg3, *temp3, 'Y');
        if (temp7 < 2) {
            return temp7;
        }
    }
    if (temp4 & 8) {
        *temp3 = arg3->unk_04 - arg0->unk_04;
        *temp3 /= arg1->unk_04;
        temp7 = func_001E2CD0(arg0, arg1, arg2, arg3, *temp3, 'Y');
        if (temp7 < 2) {
            return temp7;
        }
    }
    if (temp4 & 0x10) {
        *temp3 = arg2->unk_08 - arg0->unk_08;
        *temp3 /= arg1->unk_08;
        temp7 = func_001E2CD0(arg0, arg1, arg2, arg3, *temp3, 'Z');
        if (temp7 < 2) {
            return temp7;
        }
    }
    if (temp4 & 0x20) {
        *temp3 = arg3->unk_08 - arg0->unk_08;
        *temp3 /= arg1->unk_08;
        temp7 = func_001E2CD0(arg0, arg1, arg2, arg3, *temp3, 'Z');
        if (temp7 < 2) {
            return temp7;
        }
    }
    return 0;
}
}
