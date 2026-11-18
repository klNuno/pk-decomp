/* profile: o0_301_p */
#include "common.h"

void func_0010E2E0(s32, s32, s32 *);
s32 func_0010E8D0(s32, s32);
s32 func_001273A8(f32);
u32 func_0012ABC0();
void func_0012ABD0(s32);
void func_0027B9D0();
extern u8 D_00360394;

s32 func_0027BD30(s32 arg0, s32 arg1) {
    s32 n;
    s32 sp3C;

    n = 3;
    D_00360394 = 0;
    func_0027B9D0();
    while (n != 0 && !(D_00360394 = func_0010E8D0(arg0, arg1) ? 0 : 1)) {
        if (--n != 0) {
            func_0012ABD0(func_001273A8(func_0012ABC0() / 1000.0f));
        }
    }
    if (D_00360394) {
        func_0010E2E0(0, 0, &sp3C);
        if (sp3C) {
            return 0;
        }
        return 1;
    }
    return 0;
}
