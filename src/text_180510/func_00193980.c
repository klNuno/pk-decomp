#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    s16 *unk_0C;
    s32 *unk_10;
    u8 pad_14[0xE];
    s16 unk_22;
} unk_func_00193980_0;

s32 func_00193810(s32, s32, s32);

void func_00193980(unk_func_00193980_0 *arg0, s16 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    s16 i;

    for (i = 0; i < arg0->unk_22; i++) {
        if (arg0->unk_0C[i] == 0) {
            break;
        }
    }
    if (i != arg0->unk_22) {
        arg0->unk_0C[i] = 1;
        *arg1 = i;
        arg0->unk_10[i] = func_00193810(arg2, arg3, arg4);
    }
}
