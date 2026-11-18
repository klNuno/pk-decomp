#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_002A3580_0;

typedef struct {
    void *unk_00;
    u8 pad_04[4];
    unk_func_002A3580_0 unk_08;
} unk_func_002A3580_1;

unk_func_002A3580_1 *func_0029DA50();
s32 func_0029DB20();
void func_002A35F0();

void func_002A3580(s32 arg0, s32 arg1, s32 arg2) {
    unk_func_002A3580_1 *p;
    unk_func_002A3580_0 *q;

    p = func_0029DA50(0xC);
    q = &p->unk_08;
    q->unk_00 = arg0;
    q->unk_04 = arg1;
    q->unk_08 = func_0029DB20(arg2, arg1 * 4);
    p->unk_00 = func_002A35F0;
}
