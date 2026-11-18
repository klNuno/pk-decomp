/* profile: opt_nodf */
#include "common.h"

extern u8 D_007B8488[];
extern f32 D_007B84D0[];
void func_0029D8F0(s32, f32 *);

void func_002A1790(s32 *arg0) {
    f32 t0 = arg0[0] / 2147483648.0f;
    f32 t1 = arg0[1] / 2147483648.0f;
    D_007B84D0[0] = t0;
    D_007B84D0[1] = t1;
    if (D_007B8488[0] == 0) {
        func_0029D8F0(3, D_007B84D0);
    }
}
