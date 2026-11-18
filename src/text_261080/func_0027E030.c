/* profile: o0_301_p */
#include "common.h"

void func_0027B9D0();
s32 func_0010DD78(s32, s32, u32);
u32 func_0012ABC0();
s32 func_001273A8(f32);
void func_0012ABD0(s32);
void func_0010E2E0(s32, s32, s32 *);
extern u8 D_00360394;

s32 func_0027E030(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp4C;
    s32 retries;

    retries = 3;
    D_00360394 = 0;
    func_0027B9D0();
    while (retries != 0 && !(D_00360394 = func_0010DD78(arg0, arg1, arg2) ? 0 : 1)) {
        if (--retries != 0) {
            func_0012ABD0(func_001273A8(func_0012ABC0() / 1000.0f));
        }
    }
    if (D_00360394) {
        func_0010E2E0(0, 0, &sp4C);
        return sp4C ? 0 : 1;
    }
    return 0;
}
