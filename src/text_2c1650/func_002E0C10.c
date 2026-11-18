#include "common.h"

typedef struct {
    u8 pad_00[0x20];
    s32 unk_20;
} unk_func_002E0C10_0;

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_002E0C10_1;

unk_func_002E0C10_0 *func_002DE810();
void func_00308BE0();
void func_002E7A30();
void func_00308B80();

void func_002E0C10(unk_func_002E0C10_1 *arg0, s32 arg1, s32 arg2) {
    unk_func_002E0C10_0 *p;

    p = func_002DE810();
    if (p->unk_20 != 0) {
        func_00308BE0(p->unk_20);
    }
    func_002E7A30(p, arg0, arg2, arg0->unk_0C);
    if (p->unk_20 != 0) {
        func_00308B80(p->unk_20);
    }
}
