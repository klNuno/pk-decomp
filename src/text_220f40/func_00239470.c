/* profile: o0 */
#include "common.h"

typedef struct {
    u8 unk_00;
    u8 pad_01[0xB];
    s32 unk_0C;
} unk_func_00239470_0;

s32 fn_p_stEvalTree();
s32 fn_szGetStringFromTextOrStringParam();

s32 func_00239470(s32 arg0, s32 arg1) {
    unk_func_00239470_0 param;
    s32 str;
    u8 val;

    str = 0;
    arg1 = fn_p_stEvalTree(arg0, arg1, &param);
    val = param.unk_00;
    arg1 = fn_p_stEvalTree(arg0, arg1, &param);
    str = fn_szGetStringFromTextOrStringParam(&param);
    return arg1;
}
