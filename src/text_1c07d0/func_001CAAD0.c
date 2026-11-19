/* profile: o0_p */
#include "common.h"

f32 func_00115110(f32);
s32 func_0019D550(f32);
extern s16 D_005E0370[];

void func_001CAAD0(void) {
    s32 i;

    for (i = 0; i < 0x1000L; i++) {
        D_005E0370[i] = func_0019D550(32767.0f * func_00115110((6.2831855f * (f32)i) / 8192.0f) + 0.5f);
    }
    for (i = 0x1000; i < 0x2000L; i++) {
        D_005E0370[i] = func_0019D550(32767.0f * func_00115110((6.2831855f * (f32)i) / 8192.0f) - 0.5f);
    }
}
