/* profile: o0_p */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001AFC20_0;

typedef struct {
    u8 pad_00[0x60];
} unk_func_001AFC20_1;

f32 func_00114D70(f32);
f32 func_00115110(f32);
void func_0014F6B0(unk_func_001AFC20_1 *, unk_func_001AFC20_0 *, unk_func_001AFC20_0 *, unk_func_001AFC20_0 *);
void func_00153920(s32, s32, unk_func_001AFC20_1 *);
void func_00155C70(unk_func_001AFC20_1 *);

void func_001AFC20(s32 arg0, f32 arg1) {
    unk_func_001AFC20_1 m;
    unk_func_001AFC20_0 x;
    unk_func_001AFC20_0 y;
    unk_func_001AFC20_0 z;
    f32 c;
    f32 s;

    func_00155C70(&m);
    c = func_00114D70(arg1);
    s = func_00115110(arg1);
    if ((c > 0.0f ? c : -c) < 0.0001f) {
        c = 0.0f;
    }
    if ((s > 0.0f ? s : -s) < 0.0001f) {
        s = 0.0f;
    }
    x.unk_00 = 1.0f;
    x.unk_08 = x.unk_04 = 0.0f;
    y.unk_00 = 0.0f;
    y.unk_04 = c;
    y.unk_08 = s;
    z.unk_00 = 0.0f;
    z.unk_04 = -s;
    z.unk_08 = c;
    func_0014F6B0(&m, &x, &y, &z);
    func_00153920(arg0, arg0, &m);
}
