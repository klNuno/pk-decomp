/* profile: opt_nodf */
#include "common.h"

void func_0029D8F0(s32, f32 *);
extern u8 D_007B8488[];
extern f32 D_007B8490[];

void func_002A8E50(u16 *arg0) {
    f32 t0;
    f32 t1;
    f32 t2;

    t2 = arg0[2] / 65535.0f;
    t1 = arg0[1] / 65535.0f;
    t0 = arg0[0] / 65535.0f;
    D_007B8490[0] = t0;
    D_007B8490[1] = t1;
    D_007B8490[2] = t2;
    D_007B8490[3] = 1.0f;
    if (D_007B8488[0] == 0) {
        func_0029D8F0(0, D_007B8490);
    }
}
