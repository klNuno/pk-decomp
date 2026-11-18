#include "common.h"

typedef struct {
    u8 pad_00[0x28000];
    s32 unk_28000;
    s32 unk_28004;
    s32 unk_28008;
} unk_func_002793C0_0;

void func_002793C0(unk_func_002793C0_0 *arg0) {
    arg0->unk_28004 = 0;
    arg0->unk_28000 = 0;
    arg0->unk_28008 = 0x28000;
}
