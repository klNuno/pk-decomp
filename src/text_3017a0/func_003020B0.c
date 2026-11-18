#include "common.h"

void func_00302480(s32, s32 *);

void func_003020B0(s32 arg0, s32 arg1) {
    s32 sp1C;

    sp1C = arg1;
    func_00302480(arg0 + 8, &sp1C);
}
