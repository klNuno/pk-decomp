#include "common.h"

f32 int2dB__Fi();
extern f32 D_007B8420[][4];

void func_00295040(s32 arg0, s64 *arg1) {
    f32 c;
    f32 b;
    f32 a;

    a = int2dB__Fi(arg1[3]);
    b = int2dB__Fi(arg1[2]);
    c = int2dB__Fi(arg1[1]);
    D_007B8420[arg0][0] = int2dB__Fi(arg1[0]);
    D_007B8420[arg0][1] = c;
    D_007B8420[arg0][2] = b;
    D_007B8420[arg0][3] = a;
}
