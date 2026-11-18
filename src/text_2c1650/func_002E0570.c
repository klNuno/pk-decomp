#include "common.h"

void func_002DE7C0();
s32 func_002DE470();
void func_002DE050(void *, f32);

void func_002E0570(s32 arg0, f32 *arg1) {
    s32 sp20[4];
    f32 f;

    func_002DE7C0(sp20, arg0);
    if (func_002DE470(sp20)) {
        f = *arg1;
        func_002DE050(sp20, f < 0.0f ? -f : f);
    }
}
