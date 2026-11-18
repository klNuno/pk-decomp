#include "common.h"

void func_0011CBB0();
void func_0011B418();
extern char D_0035CE90[];
extern char D_0035CEC0[];

void func_003083A0(s32 arg0, s32 arg1, s32 arg2) {
    char buf[0x130];

    func_0011CBB0(buf, D_0035CE90, arg1, arg2, arg0);
    func_0011B418(D_0035CEC0);
    func_0011B418(buf);
}
