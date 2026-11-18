#include "common.h"

void func_003057D0(void);
void func_00305800(void);
void func_0030D0F0(s32, s32, s32, s32, s32, s32, s32);
s32 *func_0030D3F0(s32);
s32 func_0030D400(void);

void func_00305F20(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 *temp_v0;

    func_00305800();
    temp_s0 = func_0030D400();
    temp_v0 = func_0030D3F0(temp_s0);
    temp_v0[0] = arg0;
    temp_v0[1] = arg1;
    func_0030D0F0(0x20, temp_s0, 8, 0, 0, 1, 0);
    func_003057D0();
}
