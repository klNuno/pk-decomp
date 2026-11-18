/* profile: o0 */
#include "common.h"

typedef struct unk_func_00243210_0 {
    s32 *unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_00243210_0;

s32 fn_p_stEvalTree(s32, s32, unk_func_00243210_0 *);

s32 func_00243210(s32 arg0, s32 arg1) {
    unk_func_00243210_0 sp30;
    s32 *temp_s0;
    s32 temp_s1;

    temp_s1 = ((s32 *)arg1)[-2];
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp30);
    temp_s0 = sp30.unk_00;
    switch (temp_s1) {
    case 0x2CD:
        *temp_s0 = 0x40;
        return arg1;
    case 0x2CE:
        *temp_s0 = 0x20;
        return arg1;
    default:
        return arg1;
    }
}
