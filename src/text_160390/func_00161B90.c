#include "common.h"

void func_00161EB0();
void func_001376C0();
void func_00161EA0();
extern u8 D_0035F408;
extern s32 D_00367210[];

void func_00161B90(void) {
    func_00161EB0();
    func_001376C0(2, D_0035F408, D_00367210[D_0035F408]);
    func_001376C0(3, D_0035F408, D_00367210[D_0035F408]);
    func_00161EA0();
}
