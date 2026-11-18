#include "common.h"

void func_0029D8F0(s32, void *);
extern u8 D_007B8488[];
extern u8 D_007B84D0[];
extern f32 *D_007B84F4[];

void func_002A0F60(s32 *arg0) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;

    temp_f3 = arg0[3] / 2147483648.0f;
    temp_f2 = arg0[2] / 2147483648.0f;
    temp_f1 = arg0[1] / 2147483648.0f;
    temp_f0 = arg0[0] / 2147483648.0f;

    D_007B84F4[0][0] = temp_f0;
    D_007B84F4[0][1] = temp_f1;
    D_007B84F4[0][2] = temp_f2;
    D_007B84F4[0][3] = temp_f3;
    if (D_007B8488[0] == 0) {
        func_0029D8F0(3, D_007B84D0);
    }
}
