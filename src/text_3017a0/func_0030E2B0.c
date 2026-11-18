#include "common.h"

typedef struct {
    u8 pad_00[0x1008];
    s32 unk_1008;
    s32 unk_100C;
} unk_func_0030E2B0_0;

s32 func_0031E420(s32, s32);
void func_0031E6A8(s32);

s32 func_0030E2B0(unk_func_0030E2B0_0 *arg0, s32 arg1) {
    arg0->unk_100C = func_0031E420(arg1, 1);
    if (arg0->unk_100C < 0) {
        arg0->unk_100C = func_0031E420(arg1, 0x202);
        arg0->unk_1008 = 0;
    } else {
        func_0031E6A8(arg0->unk_100C);
        arg0->unk_100C = -1;
    }
    return arg0->unk_100C >= 0;
}
