/* profile: o0_301 */
#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} unk_func_001EB5D0_0;

typedef void (*unk_func_001EB5D0_1)(s32, unk_func_001EB5D0_0 *, s32);
unk_func_001EB5D0_1 func_00208D50(s32);

void func_001EB5D0(s32 arg0, unk_func_001EB5D0_0 *arg1, s32 arg2) {
    s32 temp_s0;
    unk_func_001EB5D0_1 temp_s1;

    temp_s0 = (arg1++)->unk_00;
    temp_s1 = func_00208D50(temp_s0);
    temp_s1(arg0, arg1, arg2);
}
