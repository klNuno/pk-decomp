#include "common.h"

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
    u8 pad_08[0x4];
} unk_func_001DBBA0_2;

typedef struct {
    unk_func_001DBBA0_2 *unk_00;
} unk_func_001DBBA0_1;

typedef struct {
    u8 pad_00[0x10];
    unk_func_001DBBA0_1 **unk_10;
} unk_func_001DBBA0_0;

s32 func_001DBBA0(unk_func_001DBBA0_0 *arg0, s16 arg1, s16 arg2) {
    return arg0->unk_10[arg1]->unk_00[arg2].unk_04;
}
