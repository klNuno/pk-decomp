#include "common.h"

void func_002D0DA0();
void func_003044A0();
void func_002CDC10();
void func_003020A0();
void c4sdk_malloc();

void func_00301E20(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp34;
    s32 sp38;
    s32 sp3C;

    func_002D0DA0(&sp34, &sp3C);
    func_003044A0(arg2, &sp34);
    func_002CDC10(&sp38, &sp34);
    func_003020A0(arg1, &sp38);
    c4sdk_malloc(&sp38, 0);
    c4sdk_malloc(&sp34, 0);
}
