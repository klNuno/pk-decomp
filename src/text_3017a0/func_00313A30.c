#include "common.h"

typedef struct {
    u8 unk_00;
    u8 pad_01[7];
    f32 unk_08;
    f32 unk_0C;
    f32 unk_10;
} unk_func_00313A30_1;

typedef struct {
    u8 pad_00[8];
    u8 unk_08;
    u8 pad_09[0x37];
    unk_func_00313A30_1 unk_40;
} unk_func_00313A30_0;

typedef struct {
    u8 pad_00[0x1C];
    unk_func_00313A30_0 *unk_1C;
} unk_func_00313A30_2;

extern unk_func_00313A30_2 *D_003608AC;
f32 func_00310970(f32);
f32 func_001E60E0(f32);
f64 func_001274A8(f32);
s32 func_00100100(f64, f64);
void func_00312970(unk_func_00313A30_0 *, unk_func_00313A30_1 *);

void func_00313A30(void) {
    unk_func_00313A30_0 *p;
    unk_func_00313A30_1 *q;

    if (D_003608AC != NULL) {
        p = D_003608AC->unk_1C;
        if (p != NULL) {
            q = &p->unk_40;
            if (func_00100100(func_001274A8(func_001E60E0(func_00310970(q->unk_10) + (func_00310970(q->unk_08) + func_00310970(q->unk_0C)))), 1.0) != 0 && p->unk_08 == 0) {
                func_00312970(p, q);
                p->unk_08 = 1;
                q->unk_00 = 1;
            }
        }
    }
}
