/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_0022FF70_0 {
    u8 pad_00[0x8];
    struct unk_func_0022FF70_0 *unk_08;
    u8 pad_0C[0x8];
    struct unk_func_0022FF70_0 *unk_14;
} unk_func_0022FF70_0;

typedef struct unk_func_0022FF70_1 {
    s32 unk_00;
    u8 pad_04[0x18];
} unk_func_0022FF70_1;

s32 *fn_p_stEvalTree(s32, s32 *, s32 *);
s32 func_001C2550(unk_func_0022FF70_0 *);
void func_0019A2C0(unk_func_0022FF70_0 *, s32);

s32 *func_0022FF70(s32 arg0, s32 *arg1) {
    unk_func_0022FF70_0 *spBC;
    unk_func_0022FF70_0 *var_s0;
    s32 temp_s4;
    s32 temp_fp;
    unk_func_0022FF70_0 *var_s3;
    s32 var_s6;
    unk_func_0022FF70_0 *temp_s7;
    s32 var_s1;
    s32 temp_s5;
    unk_func_0022FF70_1 spA0;
    s32 temp_s2;

    temp_fp = arg1[-2];
    arg1 = fn_p_stEvalTree(arg0, arg1, &spA0.unk_00);
    temp_s7 = (unk_func_0022FF70_0 *)spA0.unk_00;
    arg1 = fn_p_stEvalTree(arg0, arg1, &spA0.unk_00);
    temp_s4 = spA0.unk_00;
    arg1 = fn_p_stEvalTree(arg0, arg1, &spA0.unk_00);
    temp_s5 = spA0.unk_00;
    switch (temp_fp) {
    case 0x15A:
        var_s6 = 0;
        var_s0 = temp_s7->unk_08;
        spBC = var_s0;
        while (var_s0 != NULL) {
            var_s1 = func_001C2550(var_s0);
            temp_s2 = 1 << temp_s4;
            if (temp_s5 != 0) {
                var_s1 |= temp_s2;
            } else {
                var_s1 &= ~temp_s2;
            }
            func_0019A2C0(var_s0, var_s1);
            var_s6++;
            var_s3 = var_s0 = var_s0->unk_14;
            (void)var_s3;
        }
    case 0x159:
        var_s1 = func_001C2550(temp_s7);
        temp_s2 = 1 << temp_s4;
        if (temp_s5 != 0) {
            var_s1 |= temp_s2;
        } else {
            var_s1 &= ~temp_s2;
        }
        func_0019A2C0(temp_s7, var_s1);
        break;
    }
    return arg1;
}
