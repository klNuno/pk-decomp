#include "common.h"

s32 HMU_fn_p_vMalloc();
void func_00155C70();
extern s32 D_0035F858;
extern s32 D_00364BD0[];

void func_0012C5C0(void) {
    s32 temp;

    temp = HMU_fn_p_vMalloc(0x60, 0);
    func_00155C70(temp);
    D_00364BD0[0] = temp;
    D_0035F858 = 1;
}
