#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[0xC];
    u8 unk_10[0x40];
    f32 unk_50;
    f32 unk_54;
    f32 unk_58;
    f32 unk_5C;
} unk_func_00155CD0_0;

unk_func_00155CD0_0 *func_0012C610();
void func_00151560(void *);
extern unk_func_00155CD0_0 *D_0035F960;

void func_00155CD0(void) {
    unk_func_00155CD0_0 *p;

    D_0035F960 = func_0012C610();
    p = D_0035F960;
    p->unk_00 = 1;
    func_00151560(p->unk_10);
    p->unk_50 = 1.0f;
    p->unk_54 = 1.0f;
    p->unk_58 = 1.0f;
    p->unk_5C = 1.0f;
}
