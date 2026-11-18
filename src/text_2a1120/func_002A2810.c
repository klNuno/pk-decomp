#include "common.h"

typedef struct {
    void *unk_00;
    s32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    f32 unk_10;
    f32 unk_14;
} unk_func_002A2810_0;

unk_func_002A2810_0 *func_0029DA50(s32);
f32 int2dB__Fi(s64);
void func_002A27F0();

void func_002A2810(s64 *arg0) {
    f32 d;
    f32 c;
    f32 b;
    f32 a;
    unk_func_002A2810_0 *p;

    a = int2dB__Fi(arg0[3]);
    b = int2dB__Fi(arg0[2]);
    c = int2dB__Fi(arg0[1]);
    d = int2dB__Fi(arg0[0]);
    p = func_0029DA50(0x10);

    p->unk_08 = d;
    p->unk_0C = c;
    p->unk_10 = b;
    p->unk_14 = a;
    p->unk_00 = func_002A27F0;
}
