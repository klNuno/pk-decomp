#include "common.h"

s32 func_002CF630(s32);
void func_002D29C0(void *, s32, s32 *, s32 *);
s32 func_002F7DB0(s32);

void func_002FADC0(s32 arg0, s32 arg1) {
    s32 sp34;
    s32 sp38;
    s32 sp3C;

    if (func_002F7DB0(arg0 + 0x48) != 0) {
        sp34 = func_002F7DB0(arg0 + 0x48);
        sp38 = func_002CF630(arg1 + 4);
        func_002D29C0(&sp3C, arg1, &sp38, &sp34);
    }
}
