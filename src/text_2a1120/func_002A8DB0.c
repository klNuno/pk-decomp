/* profile: opt_nodf */
#include "common.h"

void func_0029D8F0(s32, f32 *);
extern u8 D_007B8488[];
extern f32 D_007B8490[];

void func_002A8DB0(s8 *arg0) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;

    temp_f3 = arg0[3] / 127.0f;
    temp_f2 = arg0[2] / 127.0f;
    temp_f1 = arg0[1] / 127.0f;
    temp_f0 = arg0[0] / 127.0f;
    D_007B8490[0] = temp_f0;
    D_007B8490[1] = temp_f1;
    D_007B8490[2] = temp_f2;
    D_007B8490[3] = temp_f3;
    if (D_007B8488[0] == 0) {
        func_0029D8F0(0, D_007B8490);
    }
}
