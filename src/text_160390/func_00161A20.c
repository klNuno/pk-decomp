#include "common.h"

void func_00161EA0();
void func_00161EB0();
extern u8 D_00369904[];

u8 func_00161A20(void) {
    u8 temp;
    func_00161EB0();
    temp = D_00369904[0];
    func_00161EA0();
    return temp;
}
