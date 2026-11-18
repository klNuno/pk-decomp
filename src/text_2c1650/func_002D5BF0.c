#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
    s32 unk_14;
} unk_func_002D5BF0_0;

void func_002D6160();

unk_func_002D5BF0_0 *func_002D5BF0(unk_func_002D5BF0_0 *arg0, s32 arg1, s32 arg2) {
    s32 a;
    s32 b;

    func_002D6160(arg0, &b, &a);
    arg0->unk_10 = arg1;
    arg0->unk_14 = arg2;
    return arg0;
}
