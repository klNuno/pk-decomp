#include "common.h"

void func_002CDC10();
void func_002CD9A0();
void c4sdk_malloc();

s32 func_002CD230(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp3C;

    func_002CDC10(&sp3C, arg1);
    func_002CD9A0(&sp3C, arg2, 0, -1);
    func_002CDC10(arg0, &sp3C);
    c4sdk_malloc(&sp3C, 0);
    return 0;
}
