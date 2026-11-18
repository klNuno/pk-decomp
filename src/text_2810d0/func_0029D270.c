/* profile: opt_nodf */
#include "common.h"

extern f32 D_0035F630;
f32 func_00116338(f32);

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_0029D270_0;

void func_0029D270(unk_func_0029D270_0 *arg0, const unk_func_0029D270_0 *arg1, s32 arg2,
    f32 *arg3, s32 arg4)
{
    f32 a, b, c, d, e, f;
    f32 x, y, z;

    if (!arg4) {
        s32 i = 1;
        b = arg1->unk_00;
        d = arg1->unk_04;
        f = arg1->unk_08;
        a = b;
        c = d;
        e = f;
        arg1++;
        if (arg2 > 1) {
            do {
                f32 temp = arg1->unk_00;
                if (temp < a) a = temp;
                else if (!(temp <= b)) b = temp;
                temp = arg1->unk_04;
                if (temp < c) c = temp;
                else if (!(temp <= d)) d = temp;
                temp = arg1->unk_08;
                if (temp < e) e = temp;
                else if (!(temp <= f)) f = temp;
                i++;
                arg1++;
            } while (i < arg2);
        }
    } else {
        s32 i = 1;
        f32 temp = 1.0f / arg1->unk_0C;
        b = arg1->unk_00 * temp;
        d = arg1->unk_04 * temp;
        f = arg1->unk_08 * temp;
        a = b;
        c = d;
        e = f;
        arg1++;
        if (arg2 > 1) {
            do {
                f32 scale = 1.0f / arg1->unk_0C;
                f32 temp = arg1->unk_00 * scale;
                if (temp < a) a = temp;
                else if (!(temp <= b)) b = temp;
                temp = arg1->unk_04 * scale;
                if (temp < c) c = temp;
                else if (!(temp <= d)) d = temp;
                temp = arg1->unk_08 * scale;
                if (temp < e) e = temp;
                else if (!(temp <= f)) f = temp;
                i++;
                arg1++;
            } while (i < arg2);
        }
    }
    x = 0.5f * (b - a);
    y = 0.5f * (d - c);
    z = 0.5f * (f - e);
    if (arg3) {
        arg3[0] = a;
        arg3[1] = b;
        arg3[2] = c;
        arg3[3] = d;
        arg3[4] = e;
        arg3[5] = f;
    }
    arg0->unk_00 = a + x;
    arg0->unk_04 = c + y;
    arg0->unk_08 = e + z;
    arg0->unk_0C = func_00116338(D_0035F630 * (x*x + y*y + z*z));
}
