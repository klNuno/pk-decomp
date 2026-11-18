/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_0021F0B0_0 {
    s32 unk_00;
    u8 pad_04[0x8];
    s32 unk_0C;
} unk_func_0021F0B0_0;

s32 fn_p_stEvalTree(s32, s32, unk_func_0021F0B0_0 *);
s32 func_0019B200(s32);

s32 func_0021F0B0(s32 arg0, s32 arg1, unk_func_0021F0B0_0 *arg2) {
    unk_func_0021F0B0_0 sp50;
    s32 temp;
    s32 temp2;
    s32 var = -1;

    arg1 = fn_p_stEvalTree(arg0, arg1, &sp50);
    temp = sp50.unk_00;
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp50);
    temp2 = sp50.unk_00;
    if (temp != 0 && temp2 >= 0 && temp2 < 32) {
        var = (func_0019B200(temp) & (1 << temp2)) ? 1 : 0;
    }
    arg2->unk_00 = var;
    arg2->unk_0C = 6;
    return arg1;
}
