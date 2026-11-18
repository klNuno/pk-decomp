/* profile: opt_nodf */
#include "common.h"

extern f32 D_007B84D0[];
extern u8 D_007B8488[];
void func_0029D8F0();

void func_002A1AA0(s16 *arg0) {
    D_007B84D0[0] = *arg0 / 32767.0f;
    if (D_007B8488[0] == 0) {
        func_0029D8F0(3, D_007B84D0);
    }
}
