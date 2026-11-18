#include "common.h"

f32 func_001E60E0(f32);

void func_00157390(f32 *arg0, f32 *arg1, f32 *arg2, f32 *arg3, f32 *arg4)
{
    f32 a = arg0[0];
    f32 b = arg0[5];
    f32 c = arg0[10];
    f32 sum = c + (a + b);
    f32 scale;

    if (sum > 0.0f) {
        f32 root = func_001E60E0(1.0f + sum);
        *arg4 = 0.5f * root;
        scale = 0.5f / root;
        *arg1 = scale * (arg0[9] - arg0[6]);
        *arg2 = scale * (arg0[2] - arg0[8]);
        *arg3 = scale * (arg0[4] - arg0[1]);
    } else {
        f32 x = a;
        f32 y = b;
        f32 z = c;
        f32 root;
        if (b > a) {
            x = b;
            y = c;
            z = a;
        }
        if (c > x) {
            x = c;
            y = a;
            z = b;
        }
        root = func_001E60E0((1.0f + x) - (y + z));
        if (x == arg0[0]) {
            *arg1 = 0.5f * root;
            scale = 0.5f / root;
            *arg2 = scale * (arg0[1] + arg0[4]);
            *arg3 = scale * (arg0[2] + arg0[8]);
            *arg4 = scale * (arg0[9] - arg0[6]);
        } else if (x == arg0[5]) {
            *arg2 = 0.5f * root;
            scale = 0.5f / root;
            *arg3 = scale * (arg0[6] + arg0[9]);
            *arg1 = scale * (arg0[4] + arg0[1]);
            *arg4 = scale * (arg0[2] - arg0[8]);
        } else {
            *arg3 = 0.5f * root;
            scale = 0.5f / root;
            *arg1 = scale * (arg0[8] + arg0[2]);
            *arg2 = scale * (arg0[9] + arg0[6]);
            *arg4 = scale * (arg0[4] - arg0[1]);
        }
    }
}
