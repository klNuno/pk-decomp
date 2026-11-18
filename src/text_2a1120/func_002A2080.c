#include "common.h"

typedef struct {
    s16 unk_00;
    s16 unk_02;
} unk_func_002A2080_0;

typedef struct {
    void *unk_00;
    u8 pad_04[4];
    unk_func_002A2080_0 unk_08;
    unk_func_002A2080_0 unk_0C;
} unk_func_002A2080_1;

unk_func_002A2080_1 *func_0029DA50();
void func_002A2160();

void func_002A2080(unk_func_002A2080_0 *arg0, unk_func_002A2080_0 *arg1) {
    s16 a0;
    s16 a1;
    s16 b0;
    s16 b1;
    unk_func_002A2080_1 *p;

    a1 = arg0->unk_02;
    a0 = arg0->unk_00;
    b1 = arg1->unk_02;
    b0 = arg1->unk_00;
    p = func_0029DA50(8);
    p->unk_08.unk_00 = a0;
    p->unk_08.unk_02 = a1;
    p->unk_0C.unk_00 = b0;
    p->unk_0C.unk_02 = b1;
    p->unk_00 = func_002A2160;
}
