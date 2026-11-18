#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[4];
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
} unk_func_0029E3E0_0;

unk_func_0029E3E0_0 *func_0029DA50();
void func_0029E450();

void func_0029E3E0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    unk_func_0029E3E0_0 *p;

    p = func_0029DA50(0x10);
    p->unk_08 = arg0;
    p->unk_0C = arg1;
    p->unk_10 = arg2;
    p->unk_14 = arg3;
    p->unk_00 = func_0029E450;
}
