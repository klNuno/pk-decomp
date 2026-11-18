#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
} unk_func_00196040_0;

typedef struct {
    u8 pad_00[0x18];
    unk_func_00196040_0 *unk_18;
} unk_func_00196040_1;

void func_00196040(void *arg0, s16 arg1, s16 arg2, unk_func_00196040_0 *arg3) {
    unk_func_00196040_0 *temp;

    temp = &(*(unk_func_00196040_1 ***)((u8 *)arg0 + 0x10))[arg1]->unk_18[arg2];
    *temp = *arg3;
}
