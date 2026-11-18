/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_0023DEF0_0 {
    s32 unk_00;
    u8 pad_04[0xC];
} unk_func_0023DEF0_0;

s32 *fn_p_stEvalTree(s32, s32 *, unk_func_0023DEF0_0 *);
s32 fn_szGetStringFromTextOrStringParam(unk_func_0023DEF0_0 *);
void func_001D27C0(s32);

s32 *func_0023DEF0(s32 arg0, s32 *arg1) {
    unk_func_0023DEF0_0 sp30;
    s32 temp_s0;
    s32 temp_s1;

    temp_s0 = arg1[-2];
    switch (temp_s0) {
    case 0x84:
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp30);
        temp_s1 = fn_szGetStringFromTextOrStringParam(&sp30);
        func_001D27C0(temp_s1);
        return arg1;
    case 0x85:
        func_001D27C0(0);
        return arg1;
    default:
        return arg1;
    }
}
