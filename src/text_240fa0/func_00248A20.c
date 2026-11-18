/* profile: o0_301_p */
#include "common.h"

void func_002473A0(u8 *, u16);

void func_00248A20(u8 *arg0) {
    u16 n = arg0[0x1C];
    u16 i;

    for (i = 0; i < n - 1; i++) {
        func_002473A0(arg0, i);
    }
}
