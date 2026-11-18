#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[4];
    f32 unk_08;
    f32 unk_0C;
    f32 unk_10;
    f32 unk_14;
} unk_func_002AA250_0;

unk_func_002AA250_0 *func_0029DA50();
void func_002AA2C0();

void func_002AA250(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    unk_func_002AA250_0 *p;

    p = func_0029DA50(0x10);
    p->unk_08 = arg0;
    p->unk_0C = arg1;
    p->unk_10 = arg2;
    p->unk_14 = arg3;
    p->unk_00 = func_002AA2C0;
}
