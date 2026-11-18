#include "common.h"

f32 int2dB__Fi();
extern f32 D_007B8460[];
extern s32 D_007B8464[];

void func_0028E750(s64 *arg0) {
    D_007B8460[0] = int2dB__Fi(*arg0);
    D_007B8464[0] = 0;
}
