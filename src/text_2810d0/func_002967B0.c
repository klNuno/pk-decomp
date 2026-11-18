#include "common.h"

typedef struct {
    f64 unk_00;
    f64 unk_08;
    f64 unk_10;
    f64 unk_18;
} unk_func_002967B0_0;

f32 int2dB__Fi(f64);
extern f32 D_007B8420[];

void func_002967B0(unk_func_002967B0_0 *arg0) {
    f32 temp_f20;
    f32 temp_f21;
    f32 temp_f22;

    temp_f22 = int2dB__Fi(arg0->unk_18);
    temp_f21 = int2dB__Fi(arg0->unk_10);
    temp_f20 = int2dB__Fi(arg0->unk_08);
    D_007B8420[0] = int2dB__Fi(arg0->unk_00);
    D_007B8420[1] = temp_f20;
    D_007B8420[2] = temp_f21;
    D_007B8420[3] = temp_f22;
}
