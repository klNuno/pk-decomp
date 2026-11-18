/* profile: o0_301 */
#include "common.h"

typedef struct {
    union {
        s32 i;
        f32 f;
    } unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_002277F0_0;

s32 fn_p_stEvalTree();
s32 fn_szGetStringFromTextOrStringParam();
s32 func_0019D550(f32);
void itoa();

s32 func_002277F0(s32 arg0, s32 arg1) {
    unk_func_002277F0_0 temp;
    s32 temp2;
    s32 temp3;
    s32 temp4;

    arg1 = fn_p_stEvalTree(arg0, arg1, &temp);
    temp2 = fn_szGetStringFromTextOrStringParam(&temp);
    arg1 = fn_p_stEvalTree(arg0, arg1, &temp);
    if (temp.unk_0C == 8) {
        temp3 = func_0019D550(temp.unk_00.f);
    } else {
        temp3 = temp.unk_00.i;
    }
    temp4 = temp3;
    itoa(temp4, temp2, 10);
    return arg1;
}
