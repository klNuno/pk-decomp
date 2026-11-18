#include "common.h"

typedef struct {
    s16 unk_00;
    u8 pad_02[2];
    s32 unk_04[2];
} unk_func_0015B7E0_0;

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    unk_func_0015B7E0_0 *unk_0C;
} unk_func_0015B7E0_1;

s32 func_0015B7E0(unk_func_0015B7E0_1 *arg0, s32 arg1) {
    s32 i;

    for (i = 0; i < arg0->unk_08; i++) {
        if (arg0->unk_0C[i].unk_00 == -0xFFA) {
            arg0->unk_0C[i].unk_04[2] = arg1;
            return 1;
        }
    }
    return 0;
}
