#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[0x4];
    f32 unk_08;
    f32 unk_0C;
} unk_func_002A5790_0;

unk_func_002A5790_0 *func_0029DA50(s32);
void func_002A5830();

void func_002A5790(f32 *arg0) {
    f32 a;
    f32 b;
    unk_func_002A5790_0 *p;

    b = arg0[1];
    a = arg0[0];
    p = func_0029DA50(8);
    p->unk_08 = a;
    p->unk_0C = b;
    p->unk_00 = func_002A5830;
}
