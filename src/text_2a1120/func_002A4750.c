#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[0x4];
    s32 unk_08;
} unk_func_002A4750_0;

unk_func_002A4750_0 *func_0029DA50(s32);
s32 func_0029DB20(s32, s32);
void func_002A47A0();

void func_002A4750(s32 arg0) {
    unk_func_002A4750_0 *p;

    p = func_0029DA50(4);
    p->unk_08 = func_0029DB20(arg0, 0x40);
    p->unk_00 = func_002A47A0;
}
