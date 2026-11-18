/* profile: o0_301 */
#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_00208980_0;

s32 fn_p_stEvalTree(s32, s32, unk_func_00208980_0 *);
s32 func_001D9F80(s32);
void func_001EDBB0(s32, s32);

s32 func_00208980(s32 arg0, s32 arg1, s32 *arg2) {
    unk_func_00208980_0 sp30;
    s32 temp_s0;
    s32 temp_s1;

    temp_s0 = ((s32 *)arg1)[-2];
    switch (temp_s0) {
    case 0x95:
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp30);
        temp_s1 = sp30.unk_00;
        *arg2 = func_001D9F80(temp_s1);
        return arg1;
    default:
        func_001EDBB0(0x2B, 0);
        return arg1;
    }
}
