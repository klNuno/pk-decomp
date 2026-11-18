#include "common.h"

typedef struct unk_func_002E0EB0_0 {
    u8 pad_00[0xC];
    s32 unk_0C;
    s32 unk_10;
} unk_func_002E0EB0_0;

void func_002DCB20();

void func_002E0EB0(unk_func_002E0EB0_0 *arg0) {
    s32 sp2C;

    arg0->unk_10 += 4;
    func_002DCB20(arg0, &sp2C);
    arg0->unk_0C -= sp2C;
}
