#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    s32 unk_0C;
} unk_func_00294970_0;

f32 int2dB(s32);

extern "C" {
extern unk_func_00294970_0 D_007B8450;

void func_00294970(s32 arg0, s32 arg1, s32 arg2) {
    D_007B8450.unk_00 = int2dB(arg0);
    D_007B8450.unk_04 = int2dB(arg1);
    D_007B8450.unk_08 = int2dB(arg2);
    D_007B8450.unk_0C = 0;
}
}
