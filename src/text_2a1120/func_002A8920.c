/* profile: opt_nodf */
#include "common.h"

void func_0029D8F0();
extern u8 D_007B8488[];
extern f32 D_007B8490[];

void func_002A8920(u32 *arg0) {
    f32 a, b, c, d;
    d = (f32)arg0[3] / 4294967296.0f;
    c = (f32)arg0[2] / 4294967296.0f;
    b = (f32)arg0[1] / 4294967296.0f;
    a = (f32)arg0[0] / 4294967296.0f;
    D_007B8490[0] = a;
    D_007B8490[1] = b;
    D_007B8490[2] = c;
    D_007B8490[3] = d;
    if (D_007B8488[0] == 0) {
        func_0029D8F0(0, D_007B8490);
    }
}
