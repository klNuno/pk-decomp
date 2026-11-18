#include "common.h"

extern f32 D_007B8460[];
extern f32 D_007B8464[];

void func_0028DB50(s32 arg0, f32 *arg1) {
    f32 temp0 = arg1[0];
    f32 temp1 = arg1[1];

    D_007B8460[arg0 * 4] = temp0;
    D_007B8464[arg0 * 4] = temp1;
}
