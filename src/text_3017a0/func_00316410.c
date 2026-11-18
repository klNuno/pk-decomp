#include "common.h"

f32 func_001E60E0(f32);
extern s32 D_00342078[];

void func_00316410(f32 *arg0, f32 (*arg1)[3]) {
    f32 t[3][3];
    f32 tr;
    f32 s;
    s32 i;
    s32 j;
    s32 k;

    tr = arg1[0][0] + arg1[1][1] + arg1[2][2];
    if (tr > 0.0f) {
        s = func_001E60E0(tr + 1.0f);
        arg0[3] = 0.5f * s;
        s = 0.5f / s;
        arg0[0] = s * (arg1[1][2] - arg1[2][1]);
        arg0[1] = s * (arg1[2][0] - arg1[0][2]);
        arg0[2] = s * (arg1[0][1] - arg1[1][0]);
    } else {
        t[0][0] = arg1[0][0];
        t[0][1] = arg1[1][0];
        t[0][2] = arg1[2][0];
        t[1][0] = arg1[0][1];
        t[1][1] = arg1[1][1];
        t[1][2] = arg1[2][1];
        t[2][0] = arg1[0][2];
        t[2][1] = arg1[1][2];
        t[2][2] = arg1[2][2];
        i = 0;
        if (t[1][1] > t[0][0]) {
            i = 1;
        }
        if (t[2][2] > t[i][i]) {
            i = 2;
        }
        j = D_00342078[i];
        k = D_00342078[j];
        s = func_001E60E0(t[i][i] - t[j][j] - t[k][k] + 1.0f);
        arg0[i] = 0.5f * s;
        s = 0.5f / s;
        arg0[3] = s * (t[k][j] - t[j][k]);
        arg0[j] = s * (t[j][i] + t[i][j]);
        arg0[k] = s * (t[k][i] + t[i][k]);
    }
}
