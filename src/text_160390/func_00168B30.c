#include "common.h"

typedef struct unk_func_00168B30_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00168B30_0;

extern s8 D_0035FB30;
extern s8 D_0035FB34;
extern f32 D_0035FB38;
extern s8 D_0035FB3C;
extern s8 D_0035FB40;
extern f32 D_0035FB44;
extern unk_func_00168B30_0 D_0036A170;
extern unk_func_00168B30_0 D_0036A180;
extern s32 D_0036A190[];
extern f32 D_0036A1A0[];
extern s32 D_0036A1B0[];
extern f32 D_0036A1C0[];
extern unk_func_00168B30_0 D_0036A1D0;
extern unk_func_00168B30_0 D_0036A1E0;
extern s32 D_0036A1F0[];
extern f32 D_0036A200[];
extern s32 D_0036A210[];
extern f32 D_0036A220[];

void func_00168B30(void) {
    s32 i;

    for (i = 0; i < 3; i++) {
        D_0036A1C0[i] = D_0036A220[i];
        D_0036A1B0[i] = D_0036A210[i];
        D_0036A1A0[i] = D_0036A200[i];
        D_0036A190[i] = D_0036A1F0[i];
    }
    D_0036A180 = D_0036A1E0;
    D_0036A170 = D_0036A1D0;
    D_0035FB38 = D_0035FB44;
    D_0035FB34 = D_0035FB40;
    D_0035FB30 = D_0035FB3C;
}
