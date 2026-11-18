/* profile: o0_301 */
#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} unk_func_001EB4B0_0;

typedef struct {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_001EB4B0_1;

typedef unk_func_001EB4B0_0 *(*unk_func_001EB4B0_fn)(s32, unk_func_001EB4B0_0 *, s32 *);

unk_func_001EB4B0_fn func_00208B50(s32);

unk_func_001EB4B0_0 *func_001EB4B0(s32 arg0, unk_func_001EB4B0_0 *arg1, unk_func_001EB4B0_1 *arg2) {
    s32 sp4C;
    s32 temp_s0;
    s32 temp_s1;
    unk_func_001EB4B0_fn temp_s2;

    sp4C = 0;
    temp_s1 = (arg1++)->unk_00;
    temp_s2 = func_00208B50(temp_s1);
    arg1 = temp_s2(arg0, arg1, &sp4C);
    if (sp4C != 0) {
        temp_s0 = 1;
    } else {
        temp_s0 = 0;
    }
    arg2->unk_00 = temp_s0;
    arg2->unk_0C = 6;
    return arg1;
}
