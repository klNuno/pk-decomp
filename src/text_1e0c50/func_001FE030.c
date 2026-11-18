/* profile: o0_301_p */
#include "common.h"

typedef struct {
    f32 unk_00, unk_04, unk_08;
} unk_func_001FE030_0;

extern f32 func_001156B8(f32);
extern f32 func_00151360(f32);
extern f32 func_001E60E0(f32);

f32 func_001FE030(unk_func_001FE030_0 *arg0, unk_func_001FE030_0 *arg1, unk_func_001FE030_0 *arg2)
{
    unk_func_001FE030_0 sp20 __attribute__((aligned(16)));
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp3C;

    if ((0.0f == arg1->unk_00 && 0.0f == arg1->unk_04 && 0.0f == arg1->unk_08) ||
        (0.0f == arg0->unk_00 && 0.0f == arg0->unk_04 && 0.0f == arg0->unk_08)) {
        return 0.0f;
    }
    sp34 = (func_00151360(arg1->unk_08) + (func_00151360(arg1->unk_00) + func_00151360(arg1->unk_04))) *
           (func_00151360(arg0->unk_08) + (func_00151360(arg0->unk_00) + func_00151360(arg0->unk_04)));
    sp38 = arg1->unk_08 * arg0->unk_08 +
           (arg1->unk_00 * arg0->unk_00 + arg1->unk_04 * arg0->unk_04);
    sp30 = sp38 / func_001E60E0(sp34);
    if (arg2 != NULL) {
        if (arg2 == arg1 || arg2 == arg0) {
            sp20.unk_00 = arg1->unk_04 * arg0->unk_08 - arg1->unk_08 * arg0->unk_04;
            sp20.unk_04 = arg1->unk_08 * arg0->unk_00 - arg1->unk_00 * arg0->unk_08;
            sp20.unk_08 = arg1->unk_00 * arg0->unk_04 - arg1->unk_04 * arg0->unk_00;
            ((u32 *)arg2)[0] = ((u32 *)&sp20)[0];
            ((u32 *)arg2)[1] = ((u32 *)&sp20)[1];
            ((u32 *)arg2)[2] = ((u32 *)&sp20)[2];
        } else {
            arg2->unk_00 = arg1->unk_04 * arg0->unk_08 - arg1->unk_08 * arg0->unk_04;
            arg2->unk_04 = arg1->unk_08 * arg0->unk_00 - arg1->unk_00 * arg0->unk_08;
            arg2->unk_08 = arg1->unk_00 * arg0->unk_04 - arg1->unk_04 * arg0->unk_00;
        }
        if (0.0f != arg2->unk_00 || 0.0f != arg2->unk_04 || 0.0f != arg2->unk_08) {
            sp3C = func_001E60E0(func_00151360(arg2->unk_08) + (func_00151360(arg2->unk_00) + func_00151360(arg2->unk_04)));
            if (0.0f != sp3C) {
                sp3C = 1.0f / sp3C;
                arg2->unk_00 = sp3C * arg2->unk_00;
                arg2->unk_04 = sp3C * arg2->unk_04;
                arg2->unk_08 = sp3C * arg2->unk_08;
            } else {
                *arg2 = *arg2;
            }
        }
    }
    if (sp30 < -1.0f) {
        sp30 = -1.0f;
    } else if (sp30 > 1.0f) {
        sp30 = 1.0f;
    }
    return func_001156B8(sp30);
}
