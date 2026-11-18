#include "common.h"

typedef struct unk_func_002ED500_1 {
    u8 pad_00[0x18];
    struct unk_func_002ED500_1 *unk_18;
} unk_func_002ED500_1;

typedef struct unk_func_002ED500_0 {
    u8 pad_00[0x28];
    unk_func_002ED500_1 *unk_28;
    u8 pad_2C[0x20];
    s32 unk_4C;
} unk_func_002ED500_0;

void func_00308BE0(s32);
void func_00308B80(s32);
s32 func_002CF630(s32);
void func_002D29C0(s32 *, s32, s32 *, unk_func_002ED500_1 *);

void func_002ED500(unk_func_002ED500_0 *arg0, s32 arg1) {
    s32 *volatile sp34;
    s32 sp38;
    s32 sp3C;
    unk_func_002ED500_1 *var_s0;
    s32 temp_a0;

    sp34 = &arg0->unk_4C;
    temp_a0 = *sp34;
    if (temp_a0 != 0) {
        func_00308BE0(temp_a0);
    }
    for (var_s0 = arg0->unk_28; var_s0 != NULL; var_s0 = var_s0->unk_18) {
        sp38 = func_002CF630(arg1 + 4);
        func_002D29C0(&sp3C, arg1, &sp38, var_s0);
    }
    temp_a0 = *sp34;
    if (temp_a0 != 0) {
        func_00308B80(temp_a0);
    }
}
