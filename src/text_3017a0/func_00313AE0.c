#include "common.h"

typedef struct unk_func_00313AE0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00313AE0_0;

typedef struct unk_func_00313AE0_3 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_00313AE0_3;

typedef struct unk_func_00313AE0_2 {
    u8 pad_00[8];
    unk_func_00313AE0_3 unk_08;
    u8 pad_14[0x10];
    u8 unk_24;
} unk_func_00313AE0_2;

typedef struct unk_func_00313AE0_1 {
    u8 pad_00[0x1C];
    u8 *unk_1C;
} unk_func_00313AE0_1;

extern unk_func_00313AE0_1 *D_003608AC;

f32 func_00310970(f32);
f32 func_001E60E0(f32);
void func_00310950(unk_func_00313AE0_0 *, unk_func_00313AE0_0 *);

void func_00313AE0(s32 arg0, s32 arg1, unk_func_00313AE0_0 v, f32 scale) {
    unk_func_00313AE0_2 *dst;
    f32 len;
    f32 inv;
    unk_func_00313AE0_3 *p;

    if (D_003608AC != NULL && D_003608AC->unk_1C != NULL) {
        dst = (unk_func_00313AE0_2 *)(D_003608AC->unk_1C + 0x40);
        len = func_001E60E0(func_00310970(v.unk_00) + func_00310970(v.unk_04) + func_00310970(v.unk_08));
        if (len != 0.0f) {
            inv = 1.0f / len;
            v.unk_00 = inv * v.unk_00;
            v.unk_04 = inv * v.unk_04;
            v.unk_08 = inv * v.unk_08;
        } else {
            func_00310950(&v, &v);
        }
        v.unk_00 = scale * v.unk_00;
        v.unk_04 = scale * v.unk_04;
        v.unk_08 = scale * v.unk_08;
        p = (unk_func_00313AE0_3 *)&v;
        dst->unk_08.unk_00 = p->unk_00;
        dst->unk_08.unk_04 = p->unk_04;
        dst->unk_08.unk_08 = p->unk_08;
        dst->unk_24 = arg1 != 0;
    }
}
