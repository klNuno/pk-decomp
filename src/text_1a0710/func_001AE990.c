/* profile: o0_p */
#include "common.h"

extern f32 D_005AD0C0[];

void func_001AE990(f32 arg0) {
    s32 i;

    for (i = 0; i < 0x100; i++) {
        D_005AD0C0[i] = arg0;
    }
}
