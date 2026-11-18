#include "common.h"

typedef struct unk_func_00139560_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_00139560_0;

typedef struct unk_func_00139560_1 {
    f32 unk_00[24];
} unk_func_00139560_1;

typedef struct unk_func_00139560_2 {
    u8 pad_00[8];
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[0xD0];
    unk_func_00139560_1 unk_E0;
} unk_func_00139560_2;

f32 func_00114D70(f32);
f32 func_00115110(f32);
void func_0014F6B0();
void func_001508D0(unk_func_00139560_1 *, unk_func_00139560_0 *, f32);
void func_00153920();
void func_00155C70();
void func_00155E80();
void func_00155EC0();

void func_00139560(unk_func_00139560_2 *arg0, f32 arg1) {
    unk_func_00139560_1 m;
    unk_func_00139560_0 axis;
    unk_func_00139560_0 pos;
    unk_func_00139560_0 r0;
    unk_func_00139560_0 r1;
    unk_func_00139560_0 r2;
    unk_func_00139560_1 *mat;
    f32 c;
    f32 s;

    if (((arg0->unk_0C & 0x80) ? 1 : 0) == 0 && arg1 != 0.0f) {
        mat = &arg0->unk_E0;
        if (((arg0->unk_08 & 8) ? 1 : 0) != 0) {
            c = func_00114D70(arg1);
            s = func_00115110(arg1);
            func_00155EC0(mat, &pos);
            func_00155C70(&m);
            r0.unk_00 = c;
            r0.unk_04 = s;
            r0.unk_08 = 0.0f;
            r1.unk_00 = -s;
            r1.unk_04 = c;
            r1.unk_08 = 0.0f;
            r2.unk_00 = 0.0f;
            r2.unk_04 = 0.0f;
            r2.unk_08 = 1.0f;
            func_0014F6B0(&m, &r0, &r1, &r2);
            func_00153920(mat, &m, mat);
            func_00155E80(mat, &pos);
        } else {
            func_00155EC0(mat, &pos);
            axis.unk_00 = 0.0f;
            axis.unk_04 = 0.0f;
            axis.unk_08 = -1.0f;
            func_001508D0(mat, &axis, arg1);
            func_00155E80(mat, &pos);
        }
    }
}
