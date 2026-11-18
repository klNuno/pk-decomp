/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    u8 *unk_0C;
} unk_func_002415E0_0;

unk_func_002415E0_0 *HIE_fn_hGetSuperObjectObject(s32);
s32 *fn_p_stEvalTree(s32, s32 *, s32 *);

s32 *func_002415E0(s32 arg0, s32 *arg1) {
    s32 sp30[4];
    s32 temp = arg1[-2];
    u8 *obj = HIE_fn_hGetSuperObjectObject(arg0)->unk_0C;

    arg1 = fn_p_stEvalTree(arg0, arg1, sp30);
    switch (temp) {
    case 0x2B1:
        obj[9] = 1;
        return arg1;
    case 0x2B2:
        obj[9] = 0;
        return arg1;
    default:
        return arg1;
    }
}
