/* profile: opt_nodf */
#include "common.h"

f32 func_00115110(f32);
f32 func_00114D70(f32);
f32 func_00116338(f32);
void *memcpy(void *, const void *, u32);
extern f32 D_00341680[];

void func_002C91D0(f32 *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    f32 temp0;
    f32 temp1;
    f32 temp2;
    f32 temp3;
    f32 temp4;
    f32 temp5;
    f32 temp6;
    f32 temp7;
    f32 temp8;
    f32 temp9;
    f32 temp10;

    temp2 = 0.017453292f * arg1;
    temp1 = func_00115110(temp2);
    temp0 = func_00114D70(temp2);
    temp3 = func_00116338(arg2 * arg2 + arg3 * arg3 + arg4 * arg4);

    if (temp3 == 0.0f) {
        memcpy(arg0, D_00341680, 0x40);
        return;
    }
    arg2 /= temp3;
    arg3 /= temp3;
    arg4 /= temp3;
    temp8 = 1.0f - temp0;
    arg0[0] = temp0 + temp8 * (arg2 * arg2);
    temp9 = temp8 * (arg2 * arg3);
    temp7 = arg4 * temp1;
    temp10 = temp8 * (arg4 * arg2);
    temp5 = arg3 * temp1;
    arg0[4] = temp9 - temp7;
    arg0[8] = temp5 + temp10;
    arg0[12] = 0.0f;
    arg0[1] = temp7 + temp9;
    arg0[5] = temp0 + temp8 * (arg3 * arg3);
    temp4 = temp8 * (arg3 * arg4);
    temp6 = arg2 * temp1;
    arg0[9] = temp4 - temp6;
    arg0[13] = 0.0f;
    arg0[2] = temp10 - temp5;
    arg0[6] = temp6 + temp4;
    arg0[10] = temp0 + temp8 * (arg4 * arg4);
    arg0[14] = 0.0f;
    arg0[3] = 0.0f;
    arg0[7] = 0.0f;
    arg0[11] = 0.0f;
    arg0[15] = 1.0f;
}
