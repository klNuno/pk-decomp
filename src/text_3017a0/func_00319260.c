/* profile: opt_noprop */
#include "common.h"

typedef struct unk_func_00319260_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00319260_0;

typedef struct unk_func_00319260_1 {
    u8 unk_00;
    u8 pad_01[7];
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[0xC];
    f32 unk_1C;
    u8 unk_20;
} unk_func_00319260_1;

typedef struct unk_func_00319260_2 {
    u8 pad_00[4];
    unk_func_00319260_0 *unk_04;
} unk_func_00319260_2;

f32 func_00310970(f32);
f32 func_001E60E0(f32);
f64 func_001274A8(f32);
f64 func_00125970(f64, f64);
f64 func_00125C18(f64, f64);
f32 int2dB__Fi(f64);

void func_00319260(unk_func_00319260_1 *arg0, unk_func_00319260_2 *arg1, unk_func_00319260_2 *arg2) {
    unk_func_00319260_0 *a;
    unk_func_00319260_0 *b;
    f32 w;
    f32 dx;
    f32 dy;
    f32 dz;
    f32 len;
    f32 k;
    f32 kx;
    f32 ky;
    f32 kz;
    f32 t;

    if (arg0->unk_00 != 0 && arg0->unk_20 != 0) {
        a = &arg2->unk_04[arg0->unk_08];
        b = &arg2->unk_04[arg0->unk_0C];
        dx = a->unk_00 - b->unk_00;
        dy = a->unk_04 - b->unk_04;
        dz = a->unk_08 - b->unk_08;
        len = func_001E60E0(func_00310970(dx) + func_00310970(dy) + func_00310970(dz));
        if (!(len <= arg0->unk_1C)) {
            {
                f64 two;
                f64 d = func_001274A8(len - arg0->unk_1C);
                two = 2.0;
                k = int2dB__Fi(func_00125C18(d, func_00125970(two, func_001274A8(len))));
            }
            kx = k * dx;
            ky = k * dy;
            kz = k * dz;
            if (arg1->unk_04[arg0->unk_08].unk_00) {
                if (arg1->unk_04[arg0->unk_0C].unk_00) {
                    a->unk_00 = a->unk_00 - kx;
                    a->unk_04 = a->unk_04 - ky;
                    a->unk_08 = a->unk_08 - kz;
                    b->unk_00 = b->unk_00 + kx;
                    b->unk_04 = b->unk_04 + ky;
                    b->unk_08 = b->unk_08 + kz;
                } else {
                    w = 2.0f;
                    t = w * kx;
                    a->unk_00 -= t;
                    t = w * ky;
                    a->unk_04 -= t;
                    t = w * kz;
                    a->unk_08 -= t;
                }
            } else if (arg1->unk_04[arg0->unk_0C].unk_00) {
                w = 2.0f;
                t = w * kx;
                b->unk_00 += t;
                t = w * ky;
                b->unk_04 += t;
                t = w * kz;
                b->unk_08 += t;
            }
        }
    }
}
