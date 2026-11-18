/* profile: o0 */
#include "common.h"

typedef struct {
    f32 unk_00;
    u8 pad_04[0xC];
} unk_func_002350B0_0;

s32 *fn_p_stEvalTree();
void func_001ABF00(f32, f32, f32);

s32 *func_002350B0(s32 arg0, s32 *arg1) {
    unk_func_002350B0_0 sp10;
    f32 x;
    f32 y;
    f32 z;

    arg1 = fn_p_stEvalTree(arg0, arg1, &sp10);
    x = sp10.unk_00;
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp10);
    y = sp10.unk_00;
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp10);
    z = sp10.unk_00;
    func_001ABF00(x, y, z);
    return arg1;
}
