#include "common.h"

typedef struct unk_func_001DB9F0_0 {
    s16 unk_00;
    s16 unk_02;
    u8 pad_04[4];
} unk_func_001DB9F0_0;

typedef struct unk_func_001DB9F0_1 {
    unk_func_001DB9F0_0 *unk_00;
} unk_func_001DB9F0_1;

typedef struct unk_func_001DB9F0_2 {
    u8 pad_00[0x10];
    unk_func_001DB9F0_1 **unk_10;
} unk_func_001DB9F0_2;

void func_001DB9F0(unk_func_001DB9F0_2 *arg0, s16 arg1, s16 arg2, s16 *arg3, s16 *arg4) {
    *arg3 = arg0->unk_10[arg1]->unk_00[arg2].unk_00;
    *arg4 = arg0->unk_10[arg1]->unk_00[arg2].unk_02;
}
