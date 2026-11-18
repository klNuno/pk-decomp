#include "common.h"

void func_0029D8F0();
extern f32 *D_007B84F4[];
extern u8 D_007B8488[];
extern f32 D_007B84D0[];

void func_002A1000(s16 *arg0) {
    f32 temp2;
    f32 temp3;
    f32 temp0;
    f32 temp1;

    temp3 = arg0[3] / 32767.0f;
    temp2 = arg0[2] / 32767.0f;
    temp0 = arg0[0] / 32767.0f;
    temp1 = arg0[1] / 32767.0f;
    D_007B84F4[0][0] = temp0;
    D_007B84F4[0][1] = temp1;
    D_007B84F4[0][2] = temp2;
    D_007B84F4[0][3] = temp3;
    if (D_007B8488[0] == 0) {
        func_0029D8F0(3, D_007B84D0);
    }
}
