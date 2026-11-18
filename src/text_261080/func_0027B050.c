/* profile: opt_nodf */
#include "common.h"

void func_00164B50(u32 *);
void func_002D8B60();
extern u32 D_00360374;
extern f32 D_00360378;
extern s32 D_0036037C;
extern s32 D_00360380;

static inline f32 func_0027B050_dt(void) {
    u32 now;
    f32 dt;

    func_00164B50(&now);
    dt = (u32)(now - D_00360374) / 294912000.0f;
    D_00360374 = now;
    return dt;
}

s32 func_0027B050(void) {
    f32 dt;

    dt = func_0027B050_dt();
    D_0036037C += 2;
    D_00360378 += dt;
    if (D_00360380 >= 3) {
        D_00360378 += func_0027B050_dt();
    }
    if (D_00360380 < 2) {
        D_00360380++;
    } else if (D_00360380 == 2) {
        func_002D8B60();
        func_00164B50(&D_00360374);
        D_00360378 = 0.0f;
        D_00360380++;
    }
    return 0;
}
