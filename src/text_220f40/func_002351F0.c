/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_002351F0_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_002351F0_0;

s32 fn_p_stEvalTree(s32, s32, unk_func_002351F0_0 *);
void func_00164BB0(s32);

s32 func_002351F0(s32 arg0, s32 arg1) {
    unk_func_002351F0_0 temp;
    s32 temp2;

    arg1 = fn_p_stEvalTree(arg0, arg1, &temp);
    temp2 = temp.unk_00;
    func_00164BB0(temp2);
    return arg1;
}
