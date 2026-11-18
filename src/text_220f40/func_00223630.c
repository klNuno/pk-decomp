/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00223630_0 {
    union {
        s32 i;
        f32 f;
    } unk_00;
    u8 pad_04[0x8];
    s32 unk_0C;
} unk_func_00223630_0;

s32 fn_p_stEvalTree(s32, s32, unk_func_00223630_0 *);
s32 func_0019D550(f32);
void func_001A4690(s32, u8);

s32 func_00223630(s32 arg0, s32 arg1, s32 arg2) {
    unk_func_00223630_0 sp30;
    u8 temp;

    arg1 = fn_p_stEvalTree(arg0, arg1, &sp30);
    temp = (sp30.unk_0C == 8) ? func_0019D550(sp30.unk_00.f) : sp30.unk_00.i;
    func_001A4690(arg2, temp);
    return arg1;
}
