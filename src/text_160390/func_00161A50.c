#include "common.h"

void func_00161EA0();
void func_00161EB0();
extern u8 D_00369900[];

u8 func_00161A50(void) {
    u8 temp;

    func_00161EB0();
    temp = D_00369900[0];
    func_00161EA0();
    return temp;
}
