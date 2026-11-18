#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    u32 unk_0C;
    u8 pad_10[0x30];
    u32 unk_40;
    u8 pad_44[4];
    s32 unk_48;
} unk_func_0030A1F0_0;

void func_00308BE0(s32);
void func_00308B80(s32);

s32 func_0030A1F0(unk_func_0030A1F0_0 *arg0) {
    s32 temp;

    if (arg0->unk_48 != 0) {
        func_00308BE0(arg0->unk_48);
    }
    temp = arg0->unk_0C >= arg0->unk_40;
    if (arg0->unk_48 != 0) {
        func_00308B80(arg0->unk_48);
    }
    return temp;
}
