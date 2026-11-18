/* profile: opt_nodf */
#include "common.h"

void func_0029D8F0(s32, f32 *);
extern u8 D_007B8488[];
extern f32 D_007B8490[];

void func_002A9430(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    D_007B8490[0] = (f32)arg0 / 65535.0f;
    D_007B8490[1] = (f32)arg1 / 65535.0f;
    D_007B8490[2] = (f32)arg2 / 65535.0f;
    D_007B8490[3] = (f32)arg3 / 65535.0f;
    if (D_007B8488[0] == 0) {
        func_0029D8F0(0, D_007B8490);
    }
}
