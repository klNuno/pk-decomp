/* profile: o0_301_p */
#include "common.h"

s32 func_0010E418();
void func_0010E2E0();
s32 func_001273A8(f32);
u32 func_0012ABC0();
void func_0012ABD0();
extern s32 D_00360398;
extern s32 D_0036039C;
extern s32 D_003603A0;

void func_0027B9D0(void) {
    s32 retries;
    s32 ok;
    s32 state;
    s32 id;

    retries = 5;
    ok = 0;
    state = 0;
    while (retries != 0 && !(ok = func_0010E418(0, 0, &state, 0, 0) ? 0 : 1)) {
        if (--retries != 0) {
            func_0012ABD0(func_001273A8(5.0f * (f32)func_0012ABC0() / 1000.0f));
        }
    }
    if (ok) {
        func_0010E2E0(0, 0, (void *)&id);
        if (id != D_00360398 && (state == 2 || state == 0)) {
            D_0036039C = 1;
            D_003603A0 = 0;
            D_00360398 = id;
        }
    }
}
