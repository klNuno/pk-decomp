#include "common.h"

typedef struct unk_func_00308480_0 {
    s32 unk_00;
    s32 unk_04;
    u64 unk_08;
    u32 unk_10;
    u8 unk_14;
    u8 unk_15;
    u8 pad_16[2];
    struct unk_func_00308480_0 *unk_18;
    u8 pad_1C[4];
} unk_func_00308480_0;

void *func_002D2BC0(s32);
void func_00308B80(s32);
void func_00308BE0(s32);
extern u64 D_003607D0;
extern s32 D_003607D8;
extern unk_func_00308480_0 *D_003607E0;

unk_func_00308480_0 *func_00308480(u32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    unk_func_00308480_0 *p = NULL;

    if (arg0 != 0) {
        p = func_002D2BC0(0x20);
    }
    if (p != NULL) {
        p->unk_00 = arg2;
        p->unk_04 = arg3;
        p->unk_10 = (arg0 * 2500) / 1000;
        p->unk_08 = D_003607D0 + p->unk_10;
        p->unk_14 = 0;
        p->unk_15 = 0;
        func_00308BE0(D_003607D8);
        p->unk_18 = D_003607E0;
        D_003607E0 = p;
        func_00308B80(D_003607D8);
    }
    return p;
}
