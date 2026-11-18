#include "common.h"

extern f32 D_007B8460[];
extern f32 D_007B8464[];
extern f32 D_007B8468[];

void func_0028D7D0(s32 arg0, f32 *arg1) {
    f32 a;
    f32 b;
    f32 c;

    c = arg1[2];
    b = arg1[1];
    a = arg1[0];
    D_007B8460[arg0 * 4] = a;
    D_007B8464[arg0 * 4] = b;
    D_007B8468[arg0 * 4] = c;
}
