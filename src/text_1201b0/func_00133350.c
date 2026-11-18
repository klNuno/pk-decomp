#include "common.h"

extern u32 D_0035F910;
extern u32 D_00364F50[];
extern u32 D_00364F54[];
extern f32 D_00365024[];
extern u32 *D_00365028[];

f32 func_00133350(s32 arg0, f32 arg1, f32 arg2) {
    f32 temp;

    temp = arg1 + D_00365024[0] * ((arg2 - arg1) * (f32)D_00365028[0][D_00364F54[arg0]]);
    D_00364F54[arg0]++;
    D_00364F54[arg0] += D_0035F910 % 255;
    if (D_00364F54[arg0] >= D_00364F50[0]) {
        D_00364F54[arg0] = 0;
    }
    return temp;
}
