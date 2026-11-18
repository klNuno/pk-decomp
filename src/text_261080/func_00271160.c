#include "common.h"

f32 func_00114D70(f32);
void func_00267E70();
extern s32 D_003602C0;
extern f32 D_0076AE30[];

void func_00271160(void) {
    f32 f;
    s32 i;

    D_003602C0 = 0;
    func_00267E70();
    f = 0.0f;
    for (i = 0; i < 0x200; i++) {
        D_0076AE30[i] = func_00114D70(f);
        f += 0.012271847f;
    }
}
