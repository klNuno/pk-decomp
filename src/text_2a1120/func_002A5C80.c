#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[0x4];
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
} unk_func_002A5C80_0;

unk_func_002A5C80_0 *func_0029DA50();
void func_002A5D00();

unk_func_002A5C80_0 *func_002A5C80(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    unk_func_002A5C80_0 *p;

    p = func_0029DA50(0x14);
    p->unk_08 = arg0;
    p->unk_0C = arg1;
    p->unk_10 = arg2;
    p->unk_14 = arg3;
    p->unk_18 = arg4;
    p->unk_00 = func_002A5D00;
    return p;
}
