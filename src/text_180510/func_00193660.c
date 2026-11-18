#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_00193660_0;

typedef struct {
    u8 pad_00[0x10];
    unk_func_00193660_0 ***unk_10;
} unk_func_00193660_1;

void func_00193660(unk_func_00193660_1 *arg0, s16 arg1, s16 arg2, s32 arg3) {
    (*arg0->unk_10[arg1])[arg2].unk_04 = arg3;
}
