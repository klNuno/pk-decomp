/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001ED630_0 {
    u8 unk_00;
    u8 pad_01[3];
    s32 *unk_04;
} unk_func_001ED630_0;

typedef struct unk_func_001ED630_1 {
    u8 unk_00;
    u8 pad_01[7];
} unk_func_001ED630_1;

void *memcpy(void *, const void *, unsigned int);
s32 fn_p_stEvalTree(s32, s32, s8 *);
void func_001EC3E0(unk_func_001ED630_1 *, s32);

s32 func_001ED630(unk_func_001ED630_0 *arg0, s8 arg1, s32 arg2) {
    s32 *var_s0;
    s8 var_s1;
    s32 var_s2;
    s8 temp[0x18];
    unk_func_001ED630_1 temp2;

    var_s2 = arg2;
    var_s0 = arg0->unk_04;
    temp2.unk_00 = 0;
    while (var_s0 < arg0->unk_04 + arg0->unk_00) {
        arg2 = fn_p_stEvalTree(*var_s0, var_s2, temp);
        var_s1 = temp[0];
        if (var_s1 ^ arg1) {
            func_001EC3E0(&temp2, *var_s0);
        }
        var_s0++;
    }
    memcpy(arg0, &temp2, temp2.unk_00 * sizeof(s32) + 8);
    return arg2;
}
