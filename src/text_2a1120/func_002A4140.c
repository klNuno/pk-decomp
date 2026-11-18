#include "common.h"

typedef struct {
    s32 unk_00;
    f32 unk_04;
    f32 unk_08;
    s32 unk_0C;
    f32 unk_10;
    f32 unk_14;
} unk_func_002A4140_1;

typedef struct {
    void *unk_00;
    u8 pad_04[4];
    unk_func_002A4140_1 unk_08;
} unk_func_002A4140_0;

unk_func_002A4140_0 *func_0029DA50(s32);
f32 int2dB__Fi(s32);
void func_002A4120();

void func_002A4140(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    unk_func_002A4140_1 *q;
    unk_func_002A4140_0 *p;

    p = func_0029DA50(0x18);
    q = &p->unk_08;
    q->unk_00 = arg0;
    q->unk_04 = int2dB__Fi(arg1);
    q->unk_08 = int2dB__Fi(arg2);
    q->unk_0C = arg3;
    q->unk_10 = int2dB__Fi(arg4);
    q->unk_14 = int2dB__Fi(arg5);
    p->unk_00 = func_002A4120;
}
