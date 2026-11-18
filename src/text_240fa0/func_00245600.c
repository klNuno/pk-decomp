/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_00245600_0 {
    s32 unk_00;
    u8 pad_04[0x8];
    s32 unk_0C;
} unk_func_00245600_0;

void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
s32 func_00208CC0(s32);
s32 func_00246280(s32);
void func_00246630(s32, s32, s32);

s32 *func_00245600(s32 arg0, s32 *arg1, unk_func_00245600_0 *arg2) {
    s32 sp3C;
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = arg1[-2];
    fn_vGetUltraOperatorPerso(func_00208CC0(temp_s1), arg0, &sp3C);
    temp_s0 = func_00246280(sp3C);
    if (temp_s0 != 0) {
        func_00246630(temp_s0, 4, 1);
        arg2->unk_00 = 1;
        arg2->unk_0C = 6;
        return arg1;
    }
    arg2->unk_00 = 0;
    arg2->unk_0C = 6;
    return arg1;
}
