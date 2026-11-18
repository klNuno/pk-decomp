/* profile: o0_301 */
#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[0x8];
    s32 unk_0C;
} unk_func_0021D9D0_0;

s32 HIE_fn_hGetSuperObjectObject(s32);
s32 *fn_p_stEvalTree(s32, s32 *, unk_func_0021D9D0_0 *);
s32 func_001971C0(s32);
s32 func_001ED550(u8 *, u8);

s32 *func_0021D9D0(s32 arg0, s32 *arg1, unk_func_0021D9D0_0 *arg2) {
    u8 *p;
    s32 ret;
    s32 type;

    type = arg1[-2];
    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    p = (u8 *)arg2->unk_00;
    switch (type) {
    case 0x34:
        arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
        arg2->unk_00 = func_001ED550(p, arg2->unk_00) == 0 ? 0 : (func_001971C0(func_001ED550(p, arg2->unk_00)) != 2 ? 0 : HIE_fn_hGetSuperObjectObject(func_001ED550(p, arg2->unk_00)));
        arg2->unk_0C = 0xB;
        return arg1;
    case 0x33:
        arg2->unk_00 = *p;
        arg2->unk_0C = 6;
        return arg1;
    }
    return arg1;
}
