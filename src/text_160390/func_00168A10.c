#include "common.h"

typedef struct unk_func_00168A10_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00168A10_0;

typedef struct unk_func_00168A10_1 {
    s32 unk_00[4];
    f32 unk_10[4];
    s32 unk_20[4];
    f32 unk_30[4];
} unk_func_00168A10_1;

extern s8 D_0035FB30;
extern s8 D_0035FB34;
extern f32 D_0035FB38;
extern s8 D_0035FB3C;
extern s8 D_0035FB40;
extern f32 D_0035FB44;
extern unk_func_00168A10_0 D_0036A170;
extern unk_func_00168A10_0 D_0036A180;
extern unk_func_00168A10_1 D_0036A190;
extern unk_func_00168A10_0 D_0036A1D0;
extern unk_func_00168A10_0 D_0036A1E0;
extern unk_func_00168A10_1 D_0036A1F0;

void func_00168A10(void) {
    D_0036A1F0.unk_30[0] = D_0036A190.unk_30[0];
    D_0036A1F0.unk_20[0] = D_0036A190.unk_20[0];
    D_0036A1F0.unk_10[0] = D_0036A190.unk_10[0];
    D_0036A1F0.unk_00[0] = D_0036A190.unk_00[0];
    D_0036A1F0.unk_30[1] = D_0036A190.unk_30[1];
    D_0036A1F0.unk_20[1] = D_0036A190.unk_20[1];
    D_0036A1F0.unk_10[1] = D_0036A190.unk_10[1];
    D_0036A1F0.unk_00[1] = D_0036A190.unk_00[1];
    D_0036A1F0.unk_30[2] = D_0036A190.unk_30[2];
    D_0036A1F0.unk_20[2] = D_0036A190.unk_20[2];
    D_0036A1F0.unk_10[2] = D_0036A190.unk_10[2];
    D_0036A1F0.unk_00[2] = D_0036A190.unk_00[2];
    D_0036A1E0 = D_0036A180;
    D_0036A1D0 = D_0036A170;
    D_0035FB44 = D_0035FB38;
    D_0035FB40 = D_0035FB34;
    D_0035FB3C = D_0035FB30;
}
