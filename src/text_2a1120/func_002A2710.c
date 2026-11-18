#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002A2710_0;

typedef struct {
    void *unk_00;
    u8 pad_04[4];
    f32 unk_08;
    f32 unk_0C;
    f32 unk_10;
    f32 unk_14;
} unk_func_002A2710_1;

unk_func_002A2710_1 *func_0029DA50();
void func_002A27F0();

void func_002A2710(unk_func_002A2710_0 *arg0) {
    f32 a;
    f32 b;
    f32 c;
    f32 d;
    unk_func_002A2710_1 *p;

    d = arg0->unk_0C;
    c = arg0->unk_08;
    b = arg0->unk_04;
    a = arg0->unk_00;
    p = func_0029DA50(0x10);
    p->unk_08 = a;
    p->unk_0C = b;
    p->unk_10 = c;
    p->unk_14 = d;
    p->unk_00 = func_002A27F0;
}
