#include "common.h"

typedef struct {
    u8 pad_00[4];
    s16 unk_04;
    u8 pad_06[2];
    f32 *unk_08;
    s32 *unk_0C;
} unk_func_00168780_0;

s32 func_00168780(unk_func_00168780_0 *arg0, f32 arg1) {
    s32 i;

    for (i = 0; i < arg0->unk_04 - 1; i++) {
        if (!(arg0->unk_08[i + 1] <= arg1)) {
            break;
        }
    }
    return arg0->unk_0C[i];
}
