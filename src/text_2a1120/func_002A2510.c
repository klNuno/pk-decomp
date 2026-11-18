#include "common.h"

typedef struct {
    s16 unk_00;
    s16 unk_02;
    s16 unk_04;
    s16 unk_06;
} unk_func_002A2510_0;

typedef struct {
    void *unk_00;
    u8 pad_04[4];
    s16 unk_08;
    s16 unk_0A;
    s16 unk_0C;
    s16 unk_0E;
} unk_func_002A2510_1;

unk_func_002A2510_1 *func_0029DA50();
void func_002A25F0();

void func_002A2510(unk_func_002A2510_0 *arg0) {
    s16 a;
    s16 b;
    s16 c;
    s16 d;
    unk_func_002A2510_1 *p;

    d = arg0->unk_06;
    c = arg0->unk_04;
    b = arg0->unk_02;
    a = arg0->unk_00;
    p = func_0029DA50(8);
    p->unk_08 = a;
    p->unk_0A = b;
    p->unk_0C = c;
    p->unk_0E = d;
    p->unk_00 = func_002A25F0;
}
