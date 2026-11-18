#include "common.h"

float int2dB(int);

extern "C" {
typedef struct {
    f32 unk_00;
    u8 pad_04[0xC];
} unk_func_0028DCD0_0;

extern unk_func_0028DCD0_0 D_007B8460[];
extern unk_func_0028DCD0_0 D_007B8464[];

void func_0028DCD0(s32 arg0, s32 arg1, s32 arg2) {
    D_007B8460[arg0].unk_00 = int2dB(arg1);
    D_007B8464[arg0].unk_00 = int2dB(arg2);
}
}
