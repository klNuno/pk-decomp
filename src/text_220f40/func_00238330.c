/* profile: o0 */
#include "common.h"

typedef struct {
    f32 unk_00;
    u8 pad_04[0xC];
} unk_func_00238330_0;

s32 fn_p_stEvalTree();
void func_001F0C60(f32);
void func_001F0C80(f32);

s32 func_00238330(s32 arg0, s32 arg1) {
    unk_func_00238330_0 val;

    arg1 = fn_p_stEvalTree(arg0, arg1, &val);
    func_001F0C60(val.unk_00);
    arg1 = fn_p_stEvalTree(arg0, arg1, &val);
    func_001F0C80(val.unk_00);
    return arg1;
}
