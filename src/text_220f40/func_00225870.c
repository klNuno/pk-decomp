/* profile: o0_301 */
#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_00225870_0;

s32 *fn_p_stEvalTree(s32, s32 *, unk_func_00225870_0 *);
void func_001A7A90(s32, s32);
void func_001A7BD0(s32);

s32 *func_00225870(s32 arg0, s32 *arg1) {
    unk_func_00225870_0 sp30;
    s32 temp_s0;
    s32 temp_s1;

    temp_s0 = arg1[-2];
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp30);
    switch (temp_s0) {
    case 0x70:
        temp_s1 = sp30.unk_00;
        func_001A7A90(arg0, temp_s1);
        return arg1;
    case 0x71:
        func_001A7BD0(arg0);
        return arg1;
    default:
        return arg1;
    }
}
