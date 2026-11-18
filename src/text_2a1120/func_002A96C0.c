/* profile: opt_nodf */
#include "common.h"

void func_0029D8F0();
extern f32 D_007B8490[];
extern u8 D_007B8488[];

void func_002A96C0(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    D_007B8490[0] = arg0 / 255.0f;
    D_007B8490[1] = arg1 / 255.0f;
    D_007B8490[2] = arg2 / 255.0f;
    D_007B8490[3] = arg3 / 255.0f;
    if (D_007B8488[0] == 0) {
        func_0029D8F0(0, D_007B8490);
    }
}
