#include "common.h"

s32 func_0016D000(void);
s32 func_0019C120(void);
extern f32 D_0035FB2C;
extern s32 D_0036A1F0[];
extern s32 D_0036A1F4[];
extern s32 D_0036A1F8[];
extern f32 D_0036A200[];
extern f32 D_0036A204[];
extern f32 D_0036A208[];
extern s32 D_0036A210[];
extern s32 D_0036A214[];
extern s32 D_0036A218[];
extern f32 D_0036A220[];
extern f32 D_0036A224[];
extern f32 D_0036A228[];

void func_00168DE0(u32 arg0) {
    f32 t;

    if (func_0019C120() == 0 && func_0016D000() == 0) {
        t = 0.0128f * (f32)arg0;
        D_0035FB2C = t;
        D_0036A220[0] += (f32)D_0036A210[0] * t;
        D_0036A224[0] += (f32)D_0036A214[0] * t;
        D_0036A228[0] += (f32)D_0036A218[0] * t;
        D_0036A200[0] += (f32)D_0036A1F0[0] * t;
        D_0036A204[0] += (f32)D_0036A1F4[0] * t;
        D_0036A208[0] += (f32)D_0036A1F8[0] * t;
    }
}
