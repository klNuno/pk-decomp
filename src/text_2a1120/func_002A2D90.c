#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[0x4];
    s32 unk_08;
    s32 unk_0C;
} unk_func_002A2D90_0;

unk_func_002A2D90_0 *func_0029DA50(s32);
void func_002A2E30();

void func_002A2D90(s32 *arg0) {
    s32 a;
    s32 b;
    unk_func_002A2D90_0 *p;

    b = arg0[1];
    a = arg0[0];
    p = func_0029DA50(8);
    p->unk_08 = a;
    p->unk_0C = b;
    p->unk_00 = func_002A2E30;
}
