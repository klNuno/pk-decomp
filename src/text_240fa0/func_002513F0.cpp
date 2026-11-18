/* profile: o0 */
#include "common.h"

typedef struct unk_func_002513F0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_002513F0_0;

typedef struct unk_func_002513F0_2 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_002513F0_2;

typedef struct unk_func_002513F0_1 {
    u8 pad_00[0x104];
    s32 unk_104;
    u8 pad_108[0x140];
    f32 unk_248;
} unk_func_002513F0_1;

extern "C" {
f32 func_00151360(f32);
f32 func_001E60E0(f32);
void func_002574D0(...);

void func_002513F0(unk_func_002513F0_1 *arg0, unk_func_002513F0_0 *arg1, unk_func_002513F0_0 *arg2, s32 arg3) {
    unk_func_002513F0_0 sp20;
    f32 sp2C;

    *(unk_func_002513F0_2 *)arg1 = *(unk_func_002513F0_2 *)arg2;
    if ((sp2C = func_001E60E0(func_00151360(arg1->unk_00) + func_00151360(arg1->unk_04) + func_00151360(arg1->unk_08))) != 0.0f) {
        sp2C = arg0->unk_248 / sp2C;
        arg1->unk_00 = sp2C * arg1->unk_00;
        arg1->unk_04 = sp2C * arg1->unk_04;
        arg1->unk_08 = sp2C * arg1->unk_08;
    } else {
        func_002574D0(&sp20, arg0->unk_104);
        arg1->unk_00 = arg0->unk_248 * sp20.unk_00;
        arg1->unk_04 = arg0->unk_248 * sp20.unk_04;
        arg1->unk_08 = arg0->unk_248 * sp20.unk_08;
    }
}
}
