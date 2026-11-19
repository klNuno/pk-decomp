/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001BE120_0 {
    s32 unk_00;
    s32 unk_04;
} unk_func_001BE120_0;

typedef struct unk_func_001BE120_1 {
    u8 pad_00[0x1C];
    s32 unk_1C;
    unk_func_001BE120_0 *unk_20;
} unk_func_001BE120_1;

unk_func_001BE120_1 *HIE_fn_hGetSuperObjectObject(s32);
s32 func_0012DAA0(s32, s32);
s32 func_00132470(s32, s32);
void func_00132820(s32, s32);
void func_00132860(s32, s32);
s32 func_001A1F30(s32);
s32 func_001B9740(s32);
s32 func_001B9A50(s32);
void func_001BE240(s32, s32);
extern s32 D_0035FF6C;

void func_001BE120(s32 arg0, s32 arg1) {
    unk_func_001BE120_0 *temp_s0;
    s32 temp_s1;
    s32 var_s3;
    s32 temp_s2;
    s32 temp_s4;

    temp_s0 = HIE_fn_hGetSuperObjectObject(arg0)->unk_20;
    temp_s1 = func_00132470(D_0035FF6C, arg1);
    (void)temp_s1;
    if (temp_s1 != 0) {
        var_s3 = temp_s1;
    } else {
        var_s3 = func_0012DAA0(D_0035FF6C, func_001A1F30(D_0035FF6C) - 1);
    }
    temp_s0->unk_00 = var_s3;
    func_00132860(temp_s0->unk_04, arg0);
    temp_s2 = HIE_fn_hGetSuperObjectObject(arg0)->unk_1C;
    if (temp_s2 != 0) {
        temp_s4 = func_001B9740(temp_s2);
        func_00132820(temp_s4, func_001B9A50(temp_s2));
    }
    func_001BE240(temp_s0->unk_00, arg0);
}
