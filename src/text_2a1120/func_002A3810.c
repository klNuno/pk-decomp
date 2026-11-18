#include "common.h"

typedef struct {
    f64 unk_00;
    f64 unk_08;
    f64 unk_10;
} unk_func_002A3810_0;

void func_0029D8F0(s32, f32 *);
f32 int2dB__Fi(f64);
extern u8 D_007B8488[];
extern f32 D_007B84C0[];

void func_002A3810(unk_func_002A3810_0 *arg0) {
    f32 temp_f20;
    f32 temp_f21;

    temp_f21 = int2dB__Fi(arg0->unk_10);
    temp_f20 = int2dB__Fi(arg0->unk_08);
    D_007B84C0[0] = int2dB__Fi(arg0->unk_00);
    D_007B84C0[1] = temp_f20;
    D_007B84C0[2] = temp_f21;
    D_007B84C0[3] = 0.0f;
    if (D_007B8488[0] == 0) {
        func_0029D8F0(2, D_007B84C0);
    }
}
