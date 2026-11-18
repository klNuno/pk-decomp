#include "common.h"

typedef struct {
    u8 pad_00[0x28000];
    s32 unk_28000;
    s32 unk_28004;
    s32 unk_28008;
} unk_func_002792F0_0;

s32 func_002792F0(unk_func_002792F0_0 *arg0, s32 arg1) {
    s32 size;
    s32 avail;

    size = arg0->unk_28008;
    avail = size - arg0->unk_28004;
    arg1 = (arg1 < avail) ? arg1 : avail;
    arg0->unk_28000 = (arg0->unk_28000 + arg1) % size;
    arg0->unk_28004 += arg1;
    return arg1;
}
