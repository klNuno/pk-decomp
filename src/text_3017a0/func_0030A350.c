#include "common.h"

typedef struct unk_func_0030A350_0 {
    u8 pad_00[0xC];
    u32 unk_0C;
    u8 pad_10[0x30];
    u32 unk_40;
    u8 pad_44[0x4];
    s32 unk_48;
} unk_func_0030A350_0;

void func_00308B80(s32);
void func_00308BE0(s32);

u32 func_0030A350(unk_func_0030A350_0 *arg0, s32 arg1, s32 arg2) {
    u32 temp;

    if (arg0->unk_48 != 0) {
        func_00308BE0(arg0->unk_48);
    }
    switch (arg2) {
    case 0:
        if (arg1 >= 0 && arg1 < arg0->unk_40) {
            arg0->unk_0C = arg1;
        }
        break;
    case 1:
        if (arg1 <= 0) {
            arg0->unk_0C = arg0->unk_40 + arg1;
        }
        break;
    case 2:
        temp = arg0->unk_0C + arg1;
        if (temp < arg0->unk_40) {
            arg0->unk_0C = temp;
        }
        break;
    }
    if (arg0->unk_48 != 0) {
        func_00308B80(arg0->unk_48);
    }
    return arg0->unk_0C;
}
