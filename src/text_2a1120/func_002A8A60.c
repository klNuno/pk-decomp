/* profile: opt_nodf */
#include "common.h"

extern f32 D_007B8490[];
extern u8 D_007B8488[];
void func_0029D8F0();

void func_002A8A60(u8 *arg0) {
    f32 r;
    f32 g;
    f32 b;
    f32 a;

    a = arg0[3] / 255.0f;
    b = arg0[2] / 255.0f;
    g = arg0[1] / 255.0f;
    r = arg0[0] / 255.0f;
    D_007B8490[0] = r;
    D_007B8490[1] = g;
    D_007B8490[2] = b;
    D_007B8490[3] = a;
    if (D_007B8488[0] == 0) {
        func_0029D8F0(0, D_007B8490);
    }
}
