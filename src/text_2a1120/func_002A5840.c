#include "common.h"

typedef struct {
    s64 unk_00;
    s64 unk_08;
} unk_func_002A5840_0;

typedef struct {
    void *unk_00;
    u8 pad_04[4];
    f32 unk_08;
    f32 unk_0C;
} unk_func_002A5840_1;

f32 int2dB__Fi(s64);
unk_func_002A5840_1 *func_0029DA50();
void func_002A5830();

void func_002A5840(unk_func_002A5840_0 *arg0) {
    f32 b;
    f32 a;
    unk_func_002A5840_1 *p;

    a = int2dB__Fi(arg0->unk_08);
    b = int2dB__Fi(arg0->unk_00);
    p = func_0029DA50(8);
    p->unk_08 = b;
    p->unk_0C = a;
    p->unk_00 = func_002A5830;
}
