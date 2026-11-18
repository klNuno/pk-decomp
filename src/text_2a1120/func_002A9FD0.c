/* profile: opt_nodf */
#include "common.h"

void func_0029D8F0(s32, f32 *);
extern u8 D_007B8488[];
extern f32 D_007B8490[];

void func_002A9FD0(s32 arg0, s32 arg1, s32 arg2) {
    D_007B8490[0] = (f32)arg0 / 127.0f;
    D_007B8490[1] = (f32)arg1 / 127.0f;
    D_007B8490[2] = (f32)arg2 / 127.0f;
    D_007B8490[3] = 1.0f;
    if (D_007B8488[0] == 0) {
        func_0029D8F0(0, D_007B8490);
    }
}
