#include "common.h"

s32 func_0031A170(s32);
void func_0031A130(s32);
extern s32 D_0036085C;

void func_0030C4F0(void) {
    s32 temp = func_0031A170(D_0036085C);

    if (temp == D_0036085C) {
        func_0031A130(D_0036085C);
        *(volatile s32 *)&D_0036085C;
    }
}
