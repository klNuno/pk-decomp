#include "common.h"

typedef struct {
    s32 unk_00;
    f32 *unk_04;
} unk_func_00317A60_0;

s32 func_00317A60(unk_func_00317A60_0 *arg0, unk_func_00317A60_0 *arg1, f32 arg2) {
    u32 i;
    u32 n;

    n = (u32)(arg0->unk_00 * (arg0->unk_00 + 1)) / 2;
    for (i = 0; i < n; i++) {
        arg1->unk_04[i] = arg2 * arg0->unk_04[i];
    }
    return 1;
}
