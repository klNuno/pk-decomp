#include "common.h"

f32 func_00116338(f32);
extern f32 D_0035F630;

void func_0029D130(f32 *arg0, f32 *arg1) {
    f32 temp_0;
    f32 temp_1;
    f32 temp_2;
    f32 temp_f5;

    temp_0 = 0.5f * (arg1[1] - (temp_f5 = arg1[0]));
    temp_1 = 0.5f * (arg1[3] - arg1[2]);
    temp_2 = 0.5f * (arg1[5] - arg1[4]);

    arg0[0] = temp_f5 + temp_0;
    arg0[1] = arg1[2] + temp_1;
    arg0[2] = arg1[4] + temp_2;
    arg0[3] = func_00116338(D_0035F630 * (temp_0 * temp_0 + temp_1 * temp_1 + temp_2 * temp_2));
}
