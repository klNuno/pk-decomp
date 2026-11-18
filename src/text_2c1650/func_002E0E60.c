#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
    s32 unk_10;
    u8 pad_14[0x2C];
    s32 unk_40;
} unk_func_002E0E60_0;

void func_002DCB20();

void func_002E0E60(unk_func_002E0E60_0 *arg0) {
    s32 temp;

    arg0->unk_10 += 4;
    func_002DCB20(arg0, &temp);
    arg0->unk_40 = arg0->unk_0C - temp;
}
