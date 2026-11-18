#include "common.h"

typedef struct unk_func_002D19B0_0 {
    u8 unk_00;
} unk_func_002D19B0_0;

void func_002D2280(s32, unk_func_002D19B0_0 *, unk_func_002D19B0_0 *);

s32 func_002D19B0(s32 arg0, unk_func_002D19B0_0 *arg1) {
    unk_func_002D19B0_0 sp28;
    unk_func_002D19B0_0 sp2C;
    sp2C = *arg1;
    func_002D2280(arg0, &sp2C, &sp28);
    return arg0;
}
