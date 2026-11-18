/* profile: opt_nodf */
#include "common.h"

void func_0029D8F0(s32, f32 *);
extern u8 D_007B8488[];
extern f32 D_007B84D0[];

void func_002A1A50(s32 *arg0) {
    D_007B84D0[0] = *arg0 / 2147483648.0f;
    if (D_007B8488[0] == 0) {
        func_0029D8F0(3, D_007B84D0);
    }
}
