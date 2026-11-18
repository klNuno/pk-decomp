#include "common.h"

void func_00164B50(u32 *);
u32 func_00129F70(void);
s32 func_00127318(f32);
extern s32 D_00360380;
extern u32 D_00360374;
extern f32 D_00360378;
extern s32 D_0036037C;

s32 func_0027AF30(void) {
    u32 sp1C;
    s32 temp;

    if (D_00360380 < 3) {
        return 0;
    }
    func_00164B50(&sp1C);
    D_00360378 += (f32)(sp1C - D_00360374) / 294912000.0f;
    D_00360374 = sp1C;
    temp = D_0036037C - func_00127318(D_00360378 * (f32)(func_00129F70() + 1) / 100.0f);
    if (temp > 2) {
        return temp;
    }
    if (temp < -2) {
        return temp;
    }
    return 0;
}
