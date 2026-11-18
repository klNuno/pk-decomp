#include "common.h"

typedef struct unk_func_002A2E40_0 {
    void (*unk_00)();
    u8 pad_04[4];
    f32 unk_08;
    f32 unk_0C;
} unk_func_002A2E40_0;

unk_func_002A2E40_0 *func_0029DA50(s32);
void func_002A2EE0();

void func_002A2E40(f32 *arg0) {
    f32 a;
    f32 b;
    unk_func_002A2E40_0 *p;
    b = arg0[1];
    a = arg0[0];
    p = func_0029DA50(8);
    p->unk_08 = a;
    p->unk_0C = b;
    p->unk_00 = func_002A2EE0;
}
