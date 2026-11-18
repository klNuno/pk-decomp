#include "common.h"

typedef struct unk_func_002E1850_0 {
    u8 pad_00[0xC];
    s32 unk_0C;
    s32 unk_10;
    u8 pad_14[4];
    u8 *unk_18;
} unk_func_002E1850_0;

void func_002DB430(unk_func_002E1850_0 *, u8 *);

void func_002E1850(unk_func_002E1850_0 *arg0) {
    u8 sp2F;

    arg0->unk_10 += 4;
    func_002DB430(arg0, &sp2F);
    *(arg0->unk_18 + arg0->unk_0C) = sp2F;
    arg0->unk_0C += 4;
}
