#include "common.h"

typedef struct unk_func_003046E0_0 {
    s32 unk_00;
    u8 pad_04[4];
    u32 unk_08;
    u32 unk_0C;
    u32 unk_10;
} unk_func_003046E0_0;

void func_00308B80(s32);
void func_00308BE0(s32);
extern u32 D_00360790;
extern u32 D_00360794;
extern u32 D_00360798;

u32 func_003046E0(unk_func_003046E0_0 *arg0, u32 arg1) {
    u32 temp;
    u32 temp2;

    if (arg0->unk_00 != 0) {
        func_00308BE0(arg0->unk_00);
    }
    temp = arg0->unk_0C;
    arg0->unk_0C = temp + arg1;
    arg0->unk_10++;
    if (D_00360790 < arg0->unk_10) {
        D_00360790 = arg0->unk_10;
    }
    temp2 = arg0->unk_0C - arg0->unk_08;
    if (D_00360794 < temp2) {
        D_00360794 = temp2;
    }
    if (D_00360798 < arg1) {
        D_00360798 = arg1;
    }
    if (arg0->unk_00 != 0) {
        func_00308B80(arg0->unk_00);
    }
    return temp;
}
