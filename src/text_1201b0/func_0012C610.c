#include "common.h"

s32 HMU_fn_p_vMalloc();
void func_00155C70();

s32 func_0012C610(void) {
    s32 temp;

    temp = HMU_fn_p_vMalloc(0x60, 0);
    func_00155C70(temp);
    return temp;
}
