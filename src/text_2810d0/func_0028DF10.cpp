#include "common.h"

typedef struct {
    f32 unk_00;
    u8 pad_04[0xC];
} unk_func_0028DF10_0;

f32 int2dB(int);

extern "C" {
extern unk_func_0028DF10_0 D_007B8460[];
extern unk_func_0028DF10_0 D_007B8464[];

void func_0028DF10(s32 arg0, s32 arg1);
}

void func_0028DF10(s32 arg0, s32 arg1) {
    D_007B8460[arg0].unk_00 = int2dB(arg1);
    D_007B8464[arg0].unk_00 = 0.0f;
}
