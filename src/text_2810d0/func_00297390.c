/* profile: opt_nodf */
#include "common.h"

extern f32 D_007B8420[];

void func_00297390(u32 arg0, u32 arg1, u32 arg2) {
    D_007B8420[0] = (f32)arg0 / 4294967296.0f;
    D_007B8420[1] = (f32)arg1 / 4294967296.0f;
    D_007B8420[2] = (f32)arg2 / 4294967296.0f;
    D_007B8420[3] = 1.0f;
}
