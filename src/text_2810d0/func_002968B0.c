/* profile: opt_nodf */
#include "common.h"

extern f32 D_007B8420[];

static inline void set4(f32 r, f32 g, f32 b, f32 a) {
    D_007B8420[0] = r;
    D_007B8420[1] = g;
    D_007B8420[2] = b;
    D_007B8420[3] = a;
}

void func_002968B0(u16 *arg0) {
    set4(arg0[0] / 65535.0f, arg0[1] / 65535.0f, arg0[2] / 65535.0f, 1.0f);
}
