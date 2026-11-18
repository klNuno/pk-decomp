#include "common.h"

f32 func_00115200(f32);
void func_0016BDB0(f32, f32, f32, f32, f32, f32);
void func_0016BED0();
void func_00285AC0(s32);
void func_00285B00();
void func_002C8330(f32, f32, f32, f32, f32, f32);
extern s32 D_0035F488;
extern f32 D_0035F494;
extern f32 D_0035F498;
extern f32 D_0035F4BC;
extern f32 D_0035F4C0;
extern s32 D_0035FB7C;
extern s32 D_0035FB88;

void func_0016BAB0(void) {
    f32 c;
    f32 a;
    f32 b;
    f32 g;
    f32 d;
    f32 e;
    f32 f;

    if (D_0035FB88 != 1) {
        a = D_0035F494;
        D_0035F488 = 1;
        b = D_0035F498;
        func_00285AC0(0x1701);
        func_00285B00();
        c = 1.0f + (1.3333334f / a - 1.0f);
        c *= b;
        if (D_0035FB7C != 0) {
            d = D_0035F4C0;
            g = D_0035F4BC;
            e = g * func_00115200(0.008726646f * c);
            f = -e;
            a = 1.3f * a;
            func_0016BDB0(f * a, e * a, f, e, g, d);
            func_002C8330(c, a, g, d, 0.0f, 0.0f);
        } else {
            d = D_0035F4C0;
            b = D_0035F4BC;
            e = b * func_00115200(0.008726646f * c);
            f = -e;
            func_0016BDB0(f * a, e * a, f, e, b, d);
            func_002C8330(c, a, b, d, 0.0f, 0.0f);
        }
        func_0016BED0();
        D_0035FB88 = 1;
    }
}
