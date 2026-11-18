#include "common.h"

typedef struct unk_func_002A1720_0 {
    f64 unk_00;
    f64 unk_08;
} unk_func_002A1720_0;

extern f32 D_007B84D0[];
extern u8 D_007B8488[];

f32 int2dB__Fi(f64);
void func_0029D8F0(s32, f32 *);

void func_002A1720(unk_func_002A1720_0 *arg0) {
    f32 temp = int2dB__Fi(arg0->unk_08);

    D_007B84D0[0] = int2dB__Fi(arg0->unk_00);
    D_007B84D0[1] = temp;
    if (D_007B8488[0] == 0) {
        func_0029D8F0(3, D_007B84D0);
    }
}
