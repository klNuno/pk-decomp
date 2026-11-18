/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_0023E3A0_0 {
    s8 unk_00;
    u8 pad_01[0xF];
} unk_func_0023E3A0_0;

s32 fn_p_stEvalTree();
s8 func_00168FB0();
void func_00168FC0(s8);
void func_00168FE0(s8);

s32 func_0023E3A0(s32 arg0, s32 arg1) {
    unk_func_0023E3A0_0 param;
    s8 flags;
    s8 id;

    arg1 = fn_p_stEvalTree(arg0, arg1, &param);
    id = param.unk_00;
    if (id < 0x40) {
        func_00168FE0(id);
    } else {
        flags = func_00168FB0();
        switch (id) {
        case 0x40:
            flags &= ~1;
            break;
        case 0x41:
            flags |= 1;
            break;
        case 0x42:
            flags &= ~2;
            break;
        case 0x43:
            flags |= 2;
            break;
        }
        func_00168FC0(flags);
    }
    return arg1;
}
