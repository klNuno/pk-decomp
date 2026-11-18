#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
    s32 unk_10;
    u8 pad_14[4];
    u8 *unk_18;
} unk_func_002E1560_0;

void func_002DBC60(unk_func_002E1560_0 *, s32 *);

void func_002E1560(unk_func_002E1560_0 *arg0) {
    s32 temp;

    temp = 0;
    arg0->unk_10 += 4;
    func_002DBC60(arg0, &temp);
    *(s32 *)(arg0->unk_18 + arg0->unk_0C) = temp;
    arg0->unk_0C += 4;
}
