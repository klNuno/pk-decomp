#include "common.h"

typedef struct unk_func_00193490_0 {
    u8 pad_00[8];
    s32 unk_08;
} unk_func_00193490_0;

typedef struct unk_func_00193490_1 {
    u8 pad_00[0x10];
    unk_func_00193490_0 ***unk_10;
} unk_func_00193490_1;

void func_00193490(unk_func_00193490_1 *arg0, s16 arg1, s16 arg2, s32 arg3) {
    (*arg0->unk_10[arg1])[arg2].unk_08 = arg3;
}
