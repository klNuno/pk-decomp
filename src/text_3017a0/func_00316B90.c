#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00316B90_0;

typedef struct {
    u32 unk_00;
    unk_func_00316B90_0 *unk_04;
} unk_func_00316B90_1;

s32 func_00316B90(unk_func_00316B90_1 *arg0, unk_func_00316B90_1 *arg1, f32 arg2) {
    u32 i;

    for (i = 0; i < arg0->unk_00; i++) {
        arg1->unk_04[i].unk_00 = arg2 * arg0->unk_04[i].unk_00;
        arg1->unk_04[i].unk_04 = arg2 * arg0->unk_04[i].unk_04;
        arg1->unk_04[i].unk_08 = arg2 * arg0->unk_04[i].unk_08;
    }
    return 1;
}
