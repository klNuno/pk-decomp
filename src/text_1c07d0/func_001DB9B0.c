#include "common.h"

typedef struct unk_func_001DB9B0_0 {
    s32 unk_00;
    s32 unk_04;
} unk_func_001DB9B0_0;

typedef struct unk_func_001DB9B0_1 {
    u8 pad_00[0x10];
    unk_func_001DB9B0_0 ***unk_10;
} unk_func_001DB9B0_1;

s32 func_001DB9B0(unk_func_001DB9B0_1 *arg0, s16 arg1, s16 arg2) {
    return (*arg0->unk_10[arg1])[arg2].unk_04;
}
