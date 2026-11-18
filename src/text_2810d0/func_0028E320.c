#include "common.h"

extern f32 D_007B8460[];
extern f32 D_007B8464[];
extern f32 D_007B8468[];
f32 int2dB__Fi();

void func_0028E320(s64 *arg0) {
    f32 temp1;
    f32 temp2;

    temp2 = int2dB__Fi(arg0[2]);
    temp1 = int2dB__Fi(arg0[1]);
    D_007B8460[0] = int2dB__Fi(arg0[0]);
    D_007B8464[0] = temp1;
    D_007B8468[0] = temp2;
}
