/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00256D30_0 {
    f32 unk_00;
    u8 pad_04[0x18];
} unk_func_00256D30_0;

s32 fn_p_stEvalTree(s32, s32, unk_func_00256D30_0 *);
s32 func_00127318(f32);
void func_002CF3D0(s32);

s32 func_00256D30(s32 arg0, s32 arg1) {
    unk_func_00256D30_0 sp10;
    f32 sp2C;

    arg1 = fn_p_stEvalTree(arg0, arg1, &sp10);
    sp2C = sp10.unk_00;
    func_002CF3D0(func_00127318(65536.0f * sp2C));
    return arg1;
}
