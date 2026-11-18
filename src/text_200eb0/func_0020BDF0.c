/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_0020BDF0_0 {
    f32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_0020BDF0_0;

void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
void func_001EDBB0(s32, s32);
s32 func_001F19D0(s32);
s32 func_00208CC0(s32);

void *func_0020BDF0(s32 arg0, void *arg1, unk_func_0020BDF0_0 *arg2) {
    f32 sp38;
    s32 sp3C;
    s32 temp_s0;
    s32 temp_s1;

    sp38 = 0.0f;
    temp_s0 = ((s32 *)arg1)[-2];
    fn_vGetUltraOperatorPerso(func_00208CC0(temp_s0), arg0, &sp3C);
    if ((temp_s1 = func_001F19D0(sp3C)) == 0) {
        return arg1;
    }
    switch (temp_s0) {
    case 0xDE:
        arg2->unk_00 = sp38;
        arg2->unk_0C = 8;
        return arg1;
    case 0xDF:
        arg2->unk_00 = sp38;
        arg2->unk_0C = 8;
        return arg1;
    default:
        func_001EDBB0(0x27, 0);
        return arg1;
    }
}
