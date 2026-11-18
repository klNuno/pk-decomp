#include "common.h"

typedef struct unk_func_002E1790_0 {
    u8 pad_00[0xC];
    s32 unk_0C;
    s32 unk_10;
    u8 pad_14[4];
    u8 *unk_18;
} unk_func_002E1790_0;

void func_002DB030(unk_func_002E1790_0 *, u16 *);

void func_002E1790(unk_func_002E1790_0 *arg0) {
    u16 temp;

    arg0->unk_10 += 4;
    func_002DB030(arg0, &temp);
    *(u16 *)(arg0->unk_18 + arg0->unk_0C) = temp;
    arg0->unk_0C += 4;
}
