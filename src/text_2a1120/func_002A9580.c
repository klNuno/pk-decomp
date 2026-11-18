/* profile: opt_nodf */
#include "common.h"

extern f32 D_007B8490[];
extern u8 D_007B8488[];
void func_0029D8F0();

void func_002A9580(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    D_007B8490[0] = arg0 / 4294967296.0f;
    D_007B8490[1] = arg1 / 4294967296.0f;
    D_007B8490[2] = arg2 / 4294967296.0f;
    D_007B8490[3] = arg3 / 4294967296.0f;
    if (D_007B8488[0] == 0) {
        func_0029D8F0(0, D_007B8490);
    }
}
