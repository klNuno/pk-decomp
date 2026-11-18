/* profile: o0_301_p */
#include "common.h"

void func_0010E2E0();
s32 func_0010E418();
s32 func_001273A8(f32);
u32 func_0012ABC0();
void func_0012ABD0();
void func_0027B9D0();
extern u8 D_00360394;

s32 func_0027D260(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    s32 count;

    count = 99;
    D_00360394 = 0;
    func_0027B9D0();
    for (; count != 0 && !(D_00360394 = func_0010E418(arg0, arg1, &sp44, arg2, &sp48) ? 0 : 1);) {
        if (--count != 0) {
            func_0012ABD0(func_001273A8(func_0012ABC0() / 1000.0f));
        }
    }
    if (D_00360394) {
        func_0010E2E0(0, 0, &sp4C);
        if (sp44 != 2) {
            return 0;
        }
        if (sp4C < -9) {
            return 0;
        }
        if (sp4C == -2) {
            return 3;
        }
        if (sp4C == -1) {
            return 2;
        }
        if (sp4C == 0) {
            return sp48 ? 2 : 3;
        }
    }
    func_0010E2E0(0, 0, &sp4C);
    return 0;
}
