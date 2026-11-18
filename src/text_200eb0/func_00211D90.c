/* profile: o0 */
#include "common.h"

typedef struct unk_func_00211D90_0 {
    s32 unk_00;
    u8 pad_04[0x8];
    s32 unk_0C;
} unk_func_00211D90_0;

s32 fn_p_stEvalTree(s32, s32, unk_func_00211D90_0 *);

s32 func_00211D90(s32 arg0, s32 arg1, unk_func_00211D90_0 *arg2) {
    s32 temp_s0 = 0;
    u8 temp_s1;

    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    temp_s1 = *(s8 *)arg2;
    if (temp_s1 >= 32) {
        temp_s0 = 0;
    }
    temp_s0 = 1 << temp_s1;
    arg2->unk_00 = temp_s0;
    arg2->unk_0C = 0x2C;
    return arg1;
}
