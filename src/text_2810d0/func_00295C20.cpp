#include "common.h"

typedef struct unk_func_00295C20_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_00295C20_0;

f32 int2dB(int);

extern "C" {
extern unk_func_00295C20_0 D_007B8420[];

void func_00295C20(s32 arg0, int arg1, int arg2, int arg3, int arg4) {
    D_007B8420[arg0].unk_00 = int2dB(arg1);
    D_007B8420[arg0].unk_04 = int2dB(arg2);
    D_007B8420[arg0].unk_08 = int2dB(arg3);
    D_007B8420[arg0].unk_0C = int2dB(arg4);
}
}
