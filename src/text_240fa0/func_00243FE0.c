/* profile: o0_301 */
#include "common.h"

typedef struct {
    s16 unk_00;
    u8 pad_02[0xE];
} unk_func_00243FE0_0;

s32 func_00208B20(s32);
void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
s32 fn_p_stEvalTree(s32, s32, unk_func_00243FE0_0 *);
u8 func_00134B20(s32, s16);

s32 func_00243FE0(s32 arg0, s32 arg1, s32 *arg2) {
    unk_func_00243FE0_0 sp30;
    s32 sp4C;
    s16 temp_s0;
    s32 temp_s1;

    temp_s1 = ((s32 *)arg1)[-2];
    fn_vGetUltraOperatorPerso(func_00208B20(temp_s1), arg0, &sp4C);
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp30);
    temp_s0 = sp30.unk_00;
    *arg2 = func_00134B20(arg0, temp_s0);
    return arg1;
}
