#include "common.h"

void func_00101928(s32, s32, void *);
void func_002C91D0(void *, f32, f32, f32, f32);
f32 int2dB__Fi(s32);
extern u8 D_007B7B8C[];
extern s32 D_007B83E4[];

void func_002C8EA0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 sp50[0x40];
    f32 temp_f20;
    f32 temp_f21;
    f32 temp_f22;

    temp_f22 = int2dB__Fi(arg0);
    temp_f21 = int2dB__Fi(arg1);
    temp_f20 = int2dB__Fi(arg2);
    func_002C91D0(sp50, temp_f22, temp_f21, temp_f20, int2dB__Fi(arg3));
    func_00101928(D_007B83E4[0], D_007B83E4[0], sp50);
    D_007B7B8C[0] = 1;
}
