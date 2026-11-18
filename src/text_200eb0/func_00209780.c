/* profile: o0_301 */
#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_00209780_0;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_00209780_1;

void func_00150060(s32, unk_func_00209780_0 *, s32, s32);
s32 func_001979C0(s32);

s32 func_00209780(s32 arg0, unk_func_00209780_1 *arg1) {
    s32 var_s1 = 0;
    unk_func_00209780_0 *var_s0 = NULL;
    s32 var_s2 = 0;
    s32 var_s3 = 0;

    var_s1 = func_001979C0(arg0);
    func_00150060(var_s1, var_s0, var_s2, var_s3);
    arg1->unk_00 = var_s0->unk_00;
    arg1->unk_04 = var_s0->unk_04;
    arg1->unk_08 = var_s0->unk_08;
    arg1->unk_0C = 0x15;
    return 1;
}
