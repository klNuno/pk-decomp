#include "common.h"

f32 int2dB__Fi(s32);
void func_002AD610();

void func_002AD950(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    f32 sp40[4];

    sp40[0] = int2dB__Fi(arg0);
    sp40[1] = int2dB__Fi(arg1);
    sp40[2] = int2dB__Fi(arg2);
    sp40[3] = int2dB__Fi(arg3);
    func_002AD610(sp40);
}
