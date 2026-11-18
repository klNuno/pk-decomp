#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[0x4];
    s32 unk_08;
    s32 unk_0C;
} unk_func_002A4D60_0;

unk_func_002A4D60_0 *func_0029DA50(s32);
void func_002A4DB0();

void func_002A4D60(s32 arg0, s32 arg1) {
    unk_func_002A4D60_0 *p;

    p = func_0029DA50(8);
    p->unk_08 = arg0;
    p->unk_0C = arg1;
    p->unk_00 = func_002A4DB0;
}
