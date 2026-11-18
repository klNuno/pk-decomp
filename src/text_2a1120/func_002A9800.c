/* profile: opt_nodf */
#include "common.h"

void func_0029D8F0(s32, f32 *);
extern u8 D_007B8488[];
extern f32 D_007B8490[];

void func_002A9800(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    D_007B8490[0] = arg0 / 32767.0f;
    D_007B8490[1] = arg1 / 32767.0f;
    D_007B8490[2] = arg2 / 32767.0f;
    D_007B8490[3] = arg3 / 32767.0f;
    if (D_007B8488[0] == 0) {
        func_0029D8F0(0, D_007B8490);
    }
}
