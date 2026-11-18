#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} __attribute__((aligned(16))) unk_func_002BC2E0_0;

typedef struct {
    s64 unk_00;
    s64 unk_08;
    s64 unk_10;
    s64 unk_18;
} unk_func_002BC2E0_1;

f32 int2dB__Fi();
void func_002BC1D0();
extern unk_func_002BC2E0_0 D_007B0800;

void func_002BC2E0(s32 arg0, s32 arg1, unk_func_002BC2E0_1 *arg2) {
    unk_func_002BC2E0_0 temp;

    temp = D_007B0800;
    temp.unk_00 = int2dB__Fi(arg2->unk_00);
    temp.unk_04 = int2dB__Fi(arg2->unk_08);
    temp.unk_08 = int2dB__Fi(arg2->unk_10);
    temp.unk_0C = int2dB__Fi(arg2->unk_18);
    func_002BC1D0(arg0, arg1, &temp);
}
