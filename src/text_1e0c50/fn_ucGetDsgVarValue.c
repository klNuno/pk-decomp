/* profile: o0 */
#include "common.h"

typedef u8 (*unk_fn_ucGetDsgVarValue_0)(s32, u8, s32);

unk_fn_ucGetDsgVarValue_0 fn_p_fn_pGetDsgVarGetFunctionPtr(s32);

u8 fn_ucGetDsgVarValue(s32 arg0, u8 arg1, s32 arg2, s32 arg3) {
    unk_fn_ucGetDsgVarValue_0 temp;

    temp = fn_p_fn_pGetDsgVarGetFunctionPtr(arg2);
    return temp(arg0, arg1, arg3);
}
