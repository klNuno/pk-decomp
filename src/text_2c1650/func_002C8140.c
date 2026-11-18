#include "common.h"

extern u8 D_007B7B8C[];
extern f32 D_007B83F0[];
extern f32 D_007B83F4[];
extern f32 D_007B8400[];

void func_002C8140(f32 arg0, f32 arg1) {
    f32 t0;
    f32 t1;

    t0 = D_007B8400[0] + (arg0 - D_007B83F0[0]);
    D_007B7B8C[0] = 1;
    t1 = D_007B8400[1] + (arg1 - D_007B83F4[0]);
    D_007B83F0[0] = arg0;
    D_007B83F4[0] = arg1;
    D_007B8400[0] = t0;
    D_007B8400[1] = t1;
}
