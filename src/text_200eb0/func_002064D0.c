/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_002064D0_0;

s32 fn_p_stEvalTree();
s32 func_001A1F50();
extern s32 D_005AB7F8[];

s32 func_002064D0(s32 arg0, s32 arg1, s32 *arg2) {
    unk_func_002064D0_0 *a[4];

    arg1 = fn_p_stEvalTree(arg0, arg1, a);
    *arg2 = D_005AB7F8[0] == func_001A1F50(a[0]->unk_04);
    return arg1;
}
