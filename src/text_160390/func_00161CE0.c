#include "common.h"

void func_00161EB0();
void func_00137700();
void func_00161EA0();
extern u8 D_0035F408;
extern s32 D_00367210[];
extern u8 D_00369909[];

void func_00161CE0(s32 arg0) {
    func_00161EB0();
    func_00137700(1, D_0035F408, D_00367210[D_0035F408], arg0, 100000, 4, 12);
    D_00369909[0] = 0;
    func_00161EA0();
}
