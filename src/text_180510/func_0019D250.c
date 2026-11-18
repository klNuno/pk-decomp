/* profile: o0_p */
#include "common.h"

extern s32 D_0035F510;
extern u64 D_0035FEF8;
extern u64 D_0035FF00;
extern f32 D_005AB540[];
extern s32 D_005AB804[];
extern f32 D_005AB850[];

extern f32 func_001001F0(u64);
extern f32 func_00114C68(f32);
extern s64 func_00123F28(f32);
extern s32 func_00127318(f32);
extern s32 func_001273A8(f32);
extern s32 func_0019D550(f32);

s32 func_0019D250(void) {
    u64 i;
    s32 temp0;
    s32 temp1;
    f32 temp2;
    f32 temp3;
    f32 temp4;

    temp3 = 1000.0f * D_005AB850[0];
    temp0 = D_005AB804[0];
    if (D_0035F510 != 0) {
        if (temp0 == 0) {
            temp0 = 30;
        } else if (!((f32)temp0 <= 8.0f * temp3)) {
            temp0 = func_00127318(8.0f * temp3);
        }
        return temp0;
    }
    if ((f32)temp0 < temp3) {
        temp0 = func_0019D550(temp3);
    } else if (func_0019D550(8.0f * temp3) < temp0) {
        temp0 = func_0019D550(8.0f * temp3);
    }

    temp2 = 0.001f * (f32)temp0;
    temp1 = (s32)func_00123F28(func_00114C68(temp2 / D_005AB850[0]));
    (void)temp1;
    D_005AB540[(s32)D_0035FF00] = (f32)temp0;
    ++D_0035FF00;
    ++D_0035FEF8;
    if (D_0035FF00 >= 5) {
        D_0035FF00 = 0;
    }
    if (D_0035FEF8 >= 5) {
        D_0035FEF8 = 5;
        temp4 = 0.0f;
        for (i = 0; i < 5; ++i) {
            temp4 += D_005AB540[(s32)i];
        }
        temp4 /= 5.0f;
    } else {
        temp4 = 0.0f;
        for (i = 0; i <= D_0035FEF8; ++i) {
            temp4 += D_005AB540[(s32)i];
        }
        temp4 /= func_001001F0(D_0035FEF8 + 1);
    }
    return func_001273A8(temp4);
}
