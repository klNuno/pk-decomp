#include "common.h"

extern u8 D_0035F408;
extern s32 D_00367210[];
extern u8 D_0036990C[];

void func_00161EB0();
void func_00137700(s32, u8, s32, s32, s32, s32, s32);
void func_00161EA0();

void func_00161950(s32 arg0) {
    func_00161EB0();
    func_00137700(4, D_0035F408, D_00367210[D_0035F408], arg0, 100000, 4, 12);
    D_0036990C[0] = 0;
    func_00161EA0();
}
