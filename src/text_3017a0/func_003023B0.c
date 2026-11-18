#include "common.h"

extern u8 D_0035ED10[];
void func_003027A0();
void func_00302430();
void func_002CDC10();

void *func_003023B0(void *volatile arg0, s32 arg1) {
    s32 sp28;
    s32 sp2C;

    *(void **)arg0 = D_0035ED10;
    func_003027A0((u8 *)arg0 + 8, &sp2C, &sp28);
    func_00302430(&sp28, -1);
    func_002CDC10((u8 *)arg0 + 0x14, arg1);
    return arg0;
}
