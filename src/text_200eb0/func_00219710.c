/* profile: o0 */
#include "common.h"

typedef struct unk_func_00219710_0 {
    s32 unk_00;
    u8 pad_04[0xC];
} unk_func_00219710_0;

typedef struct unk_func_00219710_1 {
    s32 unk_00;
    u8 pad_04[0x8];
    s32 unk_0C;
} unk_func_00219710_1;

s32 fn_p_stEvalTree(s32, s32, unk_func_00219710_0 *);

s32 func_00219710(s32 arg0, s32 arg1, unk_func_00219710_1 *arg2) {
    s32 temp_s0 = 0;
    s32 temp_s1;
    unk_func_00219710_0 sp30;

    arg1 = fn_p_stEvalTree(arg0, arg1, &sp30);
    temp_s1 = sp30.unk_00;
    temp_s0 = ~temp_s1;
    arg2->unk_00 = temp_s0;
    arg2->unk_0C = 7;
    return arg1;
}
