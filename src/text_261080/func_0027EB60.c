/* profile: o0_301_p */
#include "common.h"

extern u8 D_00360394;
void func_0010E2E0();
s32 func_0010E5A0();
s32 func_001273A8(f32);
u32 func_0012ABC0(void);
void func_0012ABD0(s32);
void func_0027B9D0(void);

s32 func_0027EB60(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 r;
    s32 n;

    r = -1;
    n = 3;
    D_00360394 = 0;
    func_0027B9D0();
    while (n != 0 && !(D_00360394 = (func_0010E5A0(arg0, arg1, (void *)arg2, (void *)arg3, 0x63, arg4) != 0 ? 0 : 1))) {
        if (--n != 0) {
            func_0012ABD0(func_001273A8(func_0012ABC0() / 1000.0f));
        }
    }
    if (D_00360394) {
        func_0010E2E0(0, 0, &r);
        return r;
    }
    return -1;
}
