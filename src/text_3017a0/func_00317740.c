#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00317740_0;

typedef struct {
    u32 unk_00;
    f32 *unk_04;
} unk_func_00317740_1;

typedef struct {
    u32 unk_00;
    unk_func_00317740_0 *unk_04;
} unk_func_00317740_2;

void func_00316940(unk_func_00317740_2 *);

s32 func_00317740(unk_func_00317740_1 *arg0, unk_func_00317740_2 *arg1, unk_func_00317740_2 *arg2) {
    u32 i;
    u32 j;
    u32 k;
    f32 w;
    f32 x;
    f32 y;
    f32 z;

    func_00316940(arg2);
    k = 0;
    for (i = 0; i < arg0->unk_00; i++) {
        for (j = i; j < arg0->unk_00; j++) {
            w = arg0->unk_04[k];
            x = w * arg1->unk_04[i].unk_00;
            y = w * arg1->unk_04[i].unk_04;
            z = w * arg1->unk_04[i].unk_08;
            arg2->unk_04[i].unk_00 = x + arg2->unk_04[i].unk_00;
            arg2->unk_04[i].unk_04 = y + arg2->unk_04[i].unk_04;
            arg2->unk_04[i].unk_08 = z + arg2->unk_04[i].unk_08;
            if (i != j) {
                arg2->unk_04[j].unk_00 = x + arg2->unk_04[j].unk_00;
                arg2->unk_04[j].unk_04 = y + arg2->unk_04[j].unk_04;
                arg2->unk_04[j].unk_08 = z + arg2->unk_04[j].unk_08;
            }
            k++;
        }
    }
    return 1;
}
