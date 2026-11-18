#include "common.h"

void func_002C91D0();
void func_00101928();
extern s32 D_007B83E4[];
extern u8 D_007B7B8C[];

void func_002C8E60(void) {
    u8 temp[0x40];

    func_002C91D0(temp);
    func_00101928(D_007B83E4[0], D_007B83E4[0], temp);
    D_007B7B8C[0] = 1;
}
