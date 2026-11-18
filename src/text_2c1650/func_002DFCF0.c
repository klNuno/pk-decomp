#include "common.h"

void func_002DE7C0();
s32 func_002DE470();
s32 func_001274A8(f32);
s32 func_00115288();
f32 int2dB__Fi(s32);
void func_002DE050(void *, f32);

void func_002DFCF0(s32 arg0, f32 *arg1) {
    u8 sp20[0x10];
    s32 temp;

    func_002DE7C0(sp20, arg0);
    if (func_002DE470(sp20) != 0) {
        temp = func_001274A8(arg1[0]);
        func_002DE050(sp20, int2dB__Fi(func_00115288(temp, func_001274A8(arg1[1]))));
    }
}
