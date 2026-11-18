#include "common.h"

typedef struct unk_func_0030A250_0 {
    u8 pad_00[0xC];
    u32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    u8 pad_18[0x28];
    u32 unk_40;
    u8 pad_44[0x4];
    s32 unk_48;
} unk_func_0030A250_0;

void func_00308BE0(s32);
void func_00308B80(s32);
s32 func_00307A50(s32, u32, s32, u32, s32, s32, s32);

u32 func_0030A250(unk_func_0030A250_0 *arg0, s32 arg1, u32 arg2, u32 arg3) {
    u32 n;

    n = arg2 * arg3;
    if (arg0->unk_48 != 0) {
        func_00308BE0(arg0->unk_48);
    }
    if (arg0->unk_0C + n > arg0->unk_40) {
        n = arg2 * ((arg0->unk_40 - arg0->unk_0C) / arg2);
    }
    if (n == 0) {
        if (arg0->unk_48 != 0) {
            func_00308B80(arg0->unk_48);
        }
        return 0;
    }
    arg0->unk_14 = func_00307A50(arg0->unk_10, arg0->unk_0C, arg1, n, 0x7F, 0, 0);
    arg0->unk_0C += n;
    if (arg0->unk_48 != 0) {
        func_00308B80(arg0->unk_48);
    }
    return n / arg2;
}
