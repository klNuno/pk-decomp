#include "common.h"

typedef struct {
    u8 unk_00;
} unk_func_002D1B30_0;

void func_002D1F30();

s32 func_002D1B30(s32 arg0, unk_func_002D1B30_0 *arg1) {
    s32 sp28;
    unk_func_002D1B30_0 sp2C;

    sp2C = *arg1;
    func_002D1F30(arg0, &sp2C, &sp28);
    return arg0;
}
