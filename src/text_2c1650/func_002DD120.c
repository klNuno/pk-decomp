#include "common.h"

void func_00302110();
void func_002CDC10();

void func_002DD120(s32 arg0, u8 *arg1) {
    func_00302110(arg1);
    func_002CDC10(arg0, arg1 + 0x18);
}
