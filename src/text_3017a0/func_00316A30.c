#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00316A30_0;

typedef struct {
    u32 unk_00;
    unk_func_00316A30_0 *unk_04;
} unk_func_00316A30_1;

s32 func_00316A30(unk_func_00316A30_1 *arg0, unk_func_00316A30_1 *arg1, unk_func_00316A30_1 *arg2) {
    u32 i;

    for (i = 0; i < arg0->unk_00; i++) {
        arg2->unk_04[i].unk_00 = arg0->unk_04[i].unk_00 - arg1->unk_04[i].unk_00;
        arg2->unk_04[i].unk_04 = arg0->unk_04[i].unk_04 - arg1->unk_04[i].unk_04;
        arg2->unk_04[i].unk_08 = arg0->unk_04[i].unk_08 - arg1->unk_04[i].unk_08;
    }
    return 1;
}
