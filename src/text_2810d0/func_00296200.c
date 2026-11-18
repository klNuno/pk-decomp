#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_00296200_0;

f32 int2dB__Fi(s32);
extern unk_func_00296200_0 D_007B8420[];

void func_00296200(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    D_007B8420[arg0].unk_00 = int2dB__Fi(arg1);
    D_007B8420[arg0].unk_04 = int2dB__Fi(arg2);
    D_007B8420[arg0].unk_08 = int2dB__Fi(arg3);
    D_007B8420[arg0].unk_0C = 1.0f;
}
