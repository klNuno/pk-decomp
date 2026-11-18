#include "common.h"

typedef struct {
    u8 unk_00;
} unk_func_002EEC90_0;

void func_002EF670();

s32 func_002EEC90(s32 arg0, unk_func_002EEC90_0 *arg1) {
    unk_func_002EEC90_0 sp28;
    s32 sp2C;

    sp28 = *arg1;
    func_002EF670(arg0, &sp28, &sp2C);
    return arg0;
}
