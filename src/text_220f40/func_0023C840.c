/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_0023C840_0 {
    s32 unk_00;
    u8 pad_04[0xC];
} unk_func_0023C840_0;

s32 *fn_p_stEvalTree(s32, s32 *, unk_func_0023C840_0 *);
void func_001EDBB0(s32, s32);

s32 *func_0023C840(s32 arg0, s32 *arg1) {
    s32 temp_s0;
    s32 temp_s1;
    unk_func_0023C840_0 sp30;

    temp_s0 = arg1[-2];
    switch (temp_s0) {
    case 0x22A:
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp30);
        temp_s1 = sp30.unk_00;
        break;
    default:
        func_001EDBB0(0x27, 0);
        return arg1;
    }
    return arg1;
}
