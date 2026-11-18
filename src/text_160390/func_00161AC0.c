#include "common.h"

void func_00161EB0();
void func_00161EA0();
extern s32 D_00369900[];

void func_00161AC0(u8 arg0) {
    func_00161EB0();
    D_00369900[0] = arg0;
    func_00161EA0();
}
