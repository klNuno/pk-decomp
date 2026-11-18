#include "common.h"

typedef struct unk_func_0030A850_0 {
    u8 pad_00[0x8];
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[0x4];
    s32 unk_14;
} unk_func_0030A850_0;

void func_00308BE0(s32);
void func_00308B80(s32);

s32 func_0030A850(unk_func_0030A850_0 *arg0, s32 arg1, s32 arg2) {
    s32 temp;

    if (arg0->unk_14 != 0) {
        func_00308BE0(arg0->unk_14);
    }
    switch (arg2) {
    case 0:
        if (arg1 >= 0 && arg1 <= arg0->unk_08) {
            arg0->unk_0C = arg1;
        }
        break;
    case 1:
        if (arg1 <= 0) {
            temp = arg1 + arg0->unk_08;
            if (temp >= 0) {
                arg0->unk_0C = temp;
            }
        }
        break;
    case 2:
        temp = arg1 + arg0->unk_0C;
        if (temp <= arg0->unk_08 && temp >= 0) {
            arg0->unk_0C = temp;
        }
        break;
    }
    if (arg0->unk_14 != 0) {
        func_00308B80(arg0->unk_14);
    }
    return arg0->unk_0C;
}
