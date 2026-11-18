#include "common.h"

typedef struct {
    s32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_002A4270_0;

typedef struct {
    void *unk_00;
    u8 pad_04[4];
    unk_func_002A4270_0 unk_08;
} unk_func_002A4270_1;

unk_func_002A4270_1 *func_0029DA50();
f32 int2dB__Fi(s32);
void func_002A4250();

void func_002A4270(s32 arg0, s32 arg1, s32 arg2) {
    unk_func_002A4270_0 *q;
    unk_func_002A4270_1 *p;

    p = func_0029DA50(0xC);
    q = &p->unk_08;
    q->unk_00 = arg0;
    q->unk_04 = int2dB__Fi(arg1);
    q->unk_08 = int2dB__Fi(arg2);
    p->unk_00 = func_002A4250;
}
