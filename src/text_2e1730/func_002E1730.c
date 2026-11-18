#include "common.h"

typedef struct unk_func_002E1730_0 {
    u8 pad_00[0xC];
    s32 unk_0C;
    s32 unk_10;
    u8 pad_14[4];
    u8 *unk_18;
} unk_func_002E1730_0;

void func_002DC6D0(unk_func_002E1730_0 *, f32 *);

void func_002E1730(unk_func_002E1730_0 *arg0) {
    f32 sp2C;

    arg0->unk_10 += 4;
    func_002DC6D0(arg0, &sp2C);
    *(f32 *)(arg0->unk_18 + arg0->unk_0C) = sp2C;
    arg0->unk_0C += 4;
}
