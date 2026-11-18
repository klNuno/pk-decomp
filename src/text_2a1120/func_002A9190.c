/* profile: opt_nodf */
#include "common.h"

void func_0029D8F0();
extern u8 D_007B8488[];
extern f32 D_007B8490[];

void func_002A9190(s16 *arg0) {
    f32 a;
    f32 b;
    f32 c;

    c = arg0[2] / 32767.0f;
    b = arg0[1] / 32767.0f;
    a = arg0[0] / 32767.0f;
    D_007B8490[3] = 1.0f;
    D_007B8490[2] = c;
    D_007B8490[1] = b;
    D_007B8490[0] = a;
    if (D_007B8488[0] == 0) {
        func_0029D8F0(0, D_007B8490);
    }
}
