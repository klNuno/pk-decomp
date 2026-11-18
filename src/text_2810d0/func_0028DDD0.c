#include "common.h"

extern f32 D_007B8460[];
extern s32 D_007B8464[];

void func_0028DDD0(s32 arg0, f32 *arg1) {
    D_007B8460[arg0 * 4] = *arg1;
    D_007B8464[arg0 * 4] = 0;
}
