#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
    s32 unk_10;
    u8 pad_14[0x4];
    s32 unk_18;
} unk_func_002E4CF0_0;

void func_002DCB20();
void memset();

void func_002E4CF0(unk_func_002E4CF0_0 *arg0) {
    s32 temp;

    arg0->unk_10 += 4;
    func_002DCB20(arg0, &temp);
    memset(arg0->unk_18 + arg0->unk_0C, 0, temp);
    arg0->unk_0C += temp;
}
