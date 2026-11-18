#include "common.h"

f64 func_00125970(f64, f64);
f64 func_00125908(f64, f64);
f64 func_001258B0(f64, f64);
f64 func_00125C18(f64, f64);
f32 int2dB__Fi(f64);
void func_00101928(s32, s32, f32 *);
extern s32 D_007B83E4[];
extern u8 D_007B7B8C[];

void func_002C85F0(f64 arg0, f64 arg1, f64 arg2, f64 arg3, f64 arg4, f64 arg5) {
    f32 m[4][4];
    f64 w;
    f64 n2;
    f64 h;
    f64 d;
    f64 t;

    n2 = func_00125970(2.0, arg4);
    m[0][0] = int2dB__Fi(func_00125C18(n2, w = func_00125908(arg1, arg0)));
    m[1][0] = 0;
    m[2][0] = int2dB__Fi(func_00125C18(func_001258B0(arg1, arg0), w));
    m[3][0] = 0;
    m[0][1] = 0;
    m[1][1] = int2dB__Fi(func_00125C18(n2, h = func_00125908(arg3, arg2)));
    m[2][1] = int2dB__Fi(func_00125C18(func_001258B0(arg3, arg2), h));
    m[3][1] = 0;
    m[0][2] = 0;
    m[1][2] = 0;
    t = -func_001258B0(arg5, arg4);
    m[2][2] = int2dB__Fi(func_00125C18(t, d = func_00125908(arg5, arg4)));
    m[3][2] = int2dB__Fi(func_00125C18(-func_00125970(func_00125970(2.0, arg5), arg4), d));
    m[2][3] = -1.0f;
    m[0][3] = 0;
    m[1][3] = 0;
    m[3][3] = 0;
    func_00101928(D_007B83E4[0], D_007B83E4[0], &m[0][0]);
    D_007B7B8C[0] = 1;
}
