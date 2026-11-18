#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    s32 unk_0C;
    s32 unk_10;
} unk_Q_0;

f32 func_00114D70(f32);
f32 func_00115110(f32);
s32 func_00127318(f32);
void func_0017D3D0(f32 *, s32, s32, s32, f32, f32, f32, f32, f32, f32);
extern f32 D_00360238;
extern f32 D_00337110[];
extern f32 D_00337150[];

void func_002582E0(s32 arg0, unk_Q_0 *arg1) {
    f32 v[3];
    f32 c;
    f32 t;
    f32 u;
    f32 w;
    s32 i;
    s32 k;
    s32 row;
    f32 r;
    f32 a;

    for (i = 0; i < arg1->unk_0C; i++) {
        r = 1.0f;
        a = 5.0f * D_00360238;
        t = func_00114D70(a + D_00337110[i]);
        c = func_00115110(a + D_00337110[i]);
        v[0] = arg1->unk_00 + t * r;
        v[1] = arg1->unk_04 + c * r;
        v[2] = 0.5f + arg1->unk_08;
        t = D_00360238 + 0.234f * i;
        t = t - func_00127318(t);
        k = func_00127318(16.0f * t);
        if (k == 16) {
            k = 0;
        }
        row = k >> 2;
        u = 0.25f * (k - (row << 2));
        w = 0.25f * row;
        func_0017D3D0(v, arg1->unk_10, arg0, 1, D_00337150[i], D_00337150[i], u, w, 0.25f + u, 0.25f + w);
    }
}
