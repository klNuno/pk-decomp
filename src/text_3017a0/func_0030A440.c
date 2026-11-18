#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    u32 unk_10;
    s32 unk_14;
    u8 pad_18[0x30];
    s32 unk_48;
} unk_func_0030A440_0;

void func_00308BE0();
void func_00307A00();
void func_00307A60();
void func_00308B80();

void func_0030A440(unk_func_0030A440_0 *arg0) {
    if (arg0->unk_48 != 0) {
        func_00308BE0(arg0->unk_48);
    }
    if (arg0->unk_10 != -1) {
        func_00307A00(arg0->unk_14, 1);
        func_00307A60(arg0->unk_10);
        arg0->unk_10 = -1;
    }
    if (arg0->unk_48 != 0) {
        func_00308B80(arg0->unk_48);
    }
}
