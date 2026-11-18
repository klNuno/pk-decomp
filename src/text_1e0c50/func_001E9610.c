/* profile: o0_301 */
#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[0x4];
    s32 unk_08[1];
} unk_func_001E9610_0;

typedef u8 (*unk_func_001E9610_1)(s32 *, s32, s32);

unk_func_001E9610_1 fn_p_fn_pGetDsgVarGetFunctionPtr(s32);

u8 func_001E9610(unk_func_001E9610_0 *arg0, u8 arg1, s32 arg2) {
    u8 ret;
    unk_func_001E9610_0 *p;
    s32 temp;
    unk_func_001E9610_1 fp;
    s32 idx;

    ret = 0;
    p = arg0;
    temp = p->unk_00;
    fp = fn_p_fn_pGetDsgVarGetFunctionPtr(temp);
    if (p->unk_00 == 8) {
        idx = arg1 * 3;
    } else {
        idx = arg1;
    }
    ret = fp(&p->unk_08[idx], 0, arg2);
    return ret;
}
