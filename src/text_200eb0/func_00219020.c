/* profile: o0_301 */
#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_00219020_0;

s32 fn_p_stEvalTree();
s32 fn_szGetStringFromTextOrStringParam();
s32 func_001164E0();

s32 func_00219020(s32 arg0, s32 arg1, unk_func_00219020_0 *arg2) {
    unk_func_00219020_0 param;
    s32 str;

    arg1 = fn_p_stEvalTree(arg0, arg1, &param);
    str = fn_szGetStringFromTextOrStringParam(&param);
    arg2->unk_00 = func_001164E0(str);
    arg2->unk_0C = 6;
    return arg1;
}
