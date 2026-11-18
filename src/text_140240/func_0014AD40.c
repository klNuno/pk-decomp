#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
    u8 pad_10[0x70];
    u8 unk_80[0x60];
    u8 unk_E0[0x10];
} unk_func_0014AD40_0;

u8 *func_001387B0(unk_func_0014AD40_0 *);
void func_00155FA0(void *, void *);

void func_0014AD40(unk_func_0014AD40_0 *arg0) {
    u8 *b;
    u8 *a;
    u8 *c;

    a = arg0->unk_80;
    b = arg0->unk_E0;
    if ((arg0->unk_0C & 4) ? 1 : 0) {
        c = func_001387B0(arg0) + 0xB0;
        func_00155FA0(func_001387B0(arg0) + 0x110, a);
        func_00155FA0(c, b);
    }
    func_00155FA0(a, b);
}
