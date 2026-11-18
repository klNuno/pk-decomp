/* profile: o0_301 */
#include "common.h"

void func_0010E2E0();
s32 func_0010E5A0();
void func_0011CBB0();
s32 func_0027C240();
s32 func_0027CD60();
void func_0027D260();
extern char D_0034F3D8[];
extern s32 D_003603A4;
extern s32 D_003603A8;
extern u8 D_007AB980[];

s32 func_0027E960(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    char sp20[0x4C];
    s32 sp6C;
    s32 temp_s0;

    func_0027D260(arg0, arg1, &D_003603A8);
    temp_s0 = func_0010E5A0(arg0, arg1, (void *)arg2, 0, 0x63, D_007AB980);
    func_0010E2E0(0, 0, &sp6C);
    if (temp_s0 != 0) {
        return 0;
    }
    func_0011CBB0(sp20, D_0034F3D8, arg2, arg2);
    arg5 = func_0027C240(arg0, arg1, sp20);
    if (func_0027CD60(arg0, arg1, sp20, arg4, arg5) != 1) {
        return 0;
    }
    func_0027D260(arg0, arg1, &D_003603A4);
    return 1;
}
