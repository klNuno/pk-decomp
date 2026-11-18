#include "common.h"

void func_00161EA0();
void func_00161EB0();
extern s32 D_00369904[];

void func_00161A80(u8 arg0) {
    func_00161EB0();
    D_00369904[0] = arg0;
    func_00161EA0();
}
