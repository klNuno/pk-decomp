/* profile: o0_301_p */
#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_0023BD00_0;

s32 fn_p_stEvalTree(s32, s32, unk_func_0023BD00_0 *);
s32 func_001D0DB0(s32);
void func_0023BB00(s32, unk_func_0023BD00_0 *, s32);

s32 func_0023BD00(s32 arg0, s32 arg1) {
    unk_func_0023BD00_0 sp50;
    s32 temp;
    s32 first;
    unk_func_0023BD00_0 *p;
    s32 ret;

    temp = ((s32 *)arg1)[-2];
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp50);
    first = sp50.unk_00;
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp50);
    p = &sp50;
    ret = func_001D0DB0(first);
    if (ret == 0) {
        return arg1;
    }
    func_0023BB00(ret, p, temp);
    return arg1;
}
