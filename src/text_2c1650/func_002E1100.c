#include "common.h"

typedef struct unk_func_002E1100_0 {
    u8 pad_00[0xC];
    s32 unk_0C;
    s32 unk_10;
    u8 pad_14[4];
    u8 *unk_18;
    u8 pad_1C[8];
    u8 *unk_24;
} unk_func_002E1100_0;

void func_002E1100(unk_func_002E1100_0 *arg0) {
    *(s32 *)(arg0->unk_18 + arg0->unk_0C) = *(s32 *)(arg0->unk_24 + (arg0->unk_10 + 4));
    *(s32 *)(arg0->unk_18 + (arg0->unk_0C + 4)) = *(s32 *)(arg0->unk_24 + (arg0->unk_10 + 8));
    arg0->unk_0C += 8;
    arg0->unk_10 += 0xC;
}
