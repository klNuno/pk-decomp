#include "common.h"

typedef struct unk_func_00317890_0 {
    u32 unk_00;
    f32 *unk_04;
} unk_func_00317890_0;

s32 func_00317890(unk_func_00317890_0 *arg0, unk_func_00317890_0 *arg1, unk_func_00317890_0 *arg2) {
    u32 i;
    u32 n;

    n = arg0->unk_00 * (arg0->unk_00 + 1) / 2;
    for (i = 0; i < n; i++) {
        arg2->unk_04[i] = arg0->unk_04[i] - arg1->unk_04[i];
    }
    return 1;
}
