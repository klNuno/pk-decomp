#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 **unk_10;
} unk_func_00196020_0;

void func_00196020(unk_func_00196020_0 *arg0, s16 arg1, s32 arg2) {
    *arg0->unk_10[arg1] = arg2;
}
