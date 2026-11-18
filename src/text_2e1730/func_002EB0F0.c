#include "common.h"

s32 func_002CFE00(s32);
s32 func_002CF630(s32);
void func_002D29C0(s32 *, s32, s32 *, s32 *);

void func_002EB0F0(s32 arg0, s32 arg1) {
    s32 sp24;
    s32 sp28;
    s32 sp2C;

    sp24 = func_002CFE00(arg0 + 0x2C);
    if (sp24 != 0) {
        sp28 = func_002CF630(arg1 + 4);
        func_002D29C0(&sp2C, arg1, &sp28, &sp24);
    }
}
