#include "common.h"

extern u8 D_007B8488[];
extern f32 D_007B84C0[];
void func_0029D8F0(s32, f32 *);

void func_002A37B0(f32 *arg0) {
    D_007B84C0[0] = arg0[0];
    D_007B84C0[1] = arg0[1];
    D_007B84C0[2] = arg0[2];
    D_007B84C0[3] = 0.0f;
    if (D_007B8488[0] == 0) {
        func_0029D8F0(2, D_007B84C0);
    }
}
