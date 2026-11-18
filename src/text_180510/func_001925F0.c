#include "common.h"

u32 func_00127318(f32);
extern u32 D_0035FC3C;
extern u32 D_0035FC40;

void func_001925F0(s32 arg0) {
    f32 temp;

    temp = (f32)D_0035FC40 / (f32)D_0035FC3C;
    if (temp > 0.99f) {
        temp = 0.99f;
    } else if (temp < 0.01f) {
        temp = 0.01f;
    }
    D_0035FC3C = func_00127318((f32)arg0 / (1.0f - temp));
    D_0035FC40 = D_0035FC3C - arg0;
}
