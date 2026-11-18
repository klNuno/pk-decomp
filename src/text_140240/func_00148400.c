#include "common.h"

typedef struct unk_func_00148400_0 {
    u8 pad_00[0x8];
    s32 unk_08;
    s32 unk_0C;
} unk_func_00148400_0;

typedef struct unk_func_00148400_1 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    u8 pad_0C[0x8];
    f32 unk_14;
    f32 unk_18;
    f32 unk_1C;
    f32 unk_20;
} unk_func_00148400_1;

unk_func_00148400_1 *func_00138800(unk_func_00148400_0 *);
void func_00148630(unk_func_00148400_0 *, s32, s32, f32, f32, f32, f32);
f32 func_0014A800(s32, f32);

void func_00148400(unk_func_00148400_0 *arg0, s32 arg1, s32 arg2, f32 arg3) {
    f32 x;
    f32 y;

    if ((arg0->unk_08 & 0x400) ? 1 : 0) {
        x = func_0014A800(1, func_00138800(arg0)->unk_00);
        y = func_0014A800(1, func_00138800(arg0)->unk_04);
        func_00148630(arg0, arg1, arg2, arg3, x, y, func_0014A800(1, func_00138800(arg0)->unk_08));
    }
    if ((arg0->unk_08 & 0x20) ? 1 : 0) {
        if ((arg0->unk_0C & 0x20000) ? 1 : 0) {
            f32 x2;
            f32 y2;
            f32 s;

            s = func_0014A800(1, func_00138800(arg0)->unk_20);
            x2 = s * func_0014A800(0, func_00138800(arg0)->unk_14);
            y2 = s * func_0014A800(0, func_00138800(arg0)->unk_18);
            func_00148630(arg0, arg1, arg2, arg3, x2, y2, s * func_0014A800(0, func_00138800(arg0)->unk_1C));
        }
    }
}
