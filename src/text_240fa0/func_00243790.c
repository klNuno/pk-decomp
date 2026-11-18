/* profile: o0 */
#include "common.h"

typedef struct unk_func_00243790_0 {
    s8 unk_00;
    u8 pad_01[0xF];
} unk_func_00243790_0;

s32 fn_p_stEvalTree(s32, s32, unk_func_00243790_0 *);
void func_0027C2C0();

s32 func_00243790(s32 arg0, s32 arg1) {
    unk_func_00243790_0 sp20;
    u8 temp;

    arg1 = fn_p_stEvalTree(arg0, arg1, &sp20);
    temp = sp20.unk_00;
    func_0027C2C0(temp);
    return arg1;
}
