#include "common.h"

typedef struct unk_func_0030A940_0 {
    u8 pad_00[8];
    u32 unk_08;
    u32 unk_0C;
    u8 *unk_10;
    s32 unk_14;
} unk_func_0030A940_0;

void func_00308BE0(s32);
void func_00308B80(s32);
void func_00308090(void *, void *, u32);

u32 func_0030A940(unk_func_0030A940_0 *arg0, void *arg1, u32 arg2, u32 arg3) {
    u32 n = arg2 * arg3;

    if (n == 0) {
        return 0;
    }
    if (arg0->unk_14 != 0) {
        func_00308BE0(arg0->unk_14);
    }
    if (arg0->unk_0C + n > arg0->unk_08) {
        n = arg0->unk_08 - arg0->unk_0C;
        n -= n % arg2;
    }
    if (n != 0) {
        func_00308090(arg1, arg0->unk_10 + arg0->unk_0C, n);
        arg0->unk_0C += n;
    }
    if (arg0->unk_14 != 0) {
        func_00308B80(arg0->unk_14);
    }
    return n / arg2;
}
