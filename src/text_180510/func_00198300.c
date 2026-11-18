/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_00198300_0 {
    u8 pad_00[0x4];
    s32 unk_04;
} unk_func_00198300_0;

unk_func_00198300_0 *HIE_fn_hGetSuperObjectObject(s32);
s32 fn_ucIsAnAlwaysObject(unk_func_00198300_0 *);
void func_00197250(unk_func_00198300_0 *, s32);
s32 func_00197E90(s32);
u8 func_00198020(s32);
u8 func_001984E0(s32);
s32 func_00198500(s32);
s32 func_00198520(s32);
s32 func_00198540(s32);
s32 func_00198570(s32);

void func_00198300(s32 arg0) {
    s32 n;
    s32 cur;
    s32 next;
    s32 x;
    s32 y;
    s32 h;
    unk_func_00198300_0 *o;

    for (n = func_00198570(arg0), cur = func_00198540(arg0), y = next = (cur ? func_00198520(cur) : 0);
         cur && n;
         n--, cur = next, x = (next ? (next = func_00198520(next)) : 0)) {
        h = func_00198500(cur);
        o = HIE_fn_hGetSuperObjectObject(h);
        if (((func_00197E90(o->unk_04) && (func_00198020(o->unk_04) == 0 || func_00198020(o->unk_04) == 1)) ||
             (!func_00197E90(o->unk_04) && func_001984E0(o->unk_04) == 0)) &&
            !fn_ucIsAnAlwaysObject(o)) {
            func_00197250(o, 4);
        }
    }
}
