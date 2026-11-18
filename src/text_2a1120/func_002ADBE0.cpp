#include "common.h"

float int2dB(int);

extern "C" {
void func_002AD610(f32 *);

void func_002ADBE0(s32 arg0, s32 arg1, s32 arg2) {
    f32 sp[4];
    sp[0] = int2dB(arg0);
    sp[1] = int2dB(arg1);
    sp[2] = int2dB(arg2);
    sp[3] = 1.0f;
    func_002AD610(sp);
}
}
