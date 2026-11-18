/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_0023E760_1 {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_0023E760_1;

typedef struct unk_func_0023E760_0 {
    union {
        s32 i;
        unk_func_0023E760_1 *p;
    } unk_00;
    u8 pad_04[0xC];
} unk_func_0023E760_0;

s32 *fn_p_stEvalTree(s32, s32 *, unk_func_0023E760_0 *);
s32 fn_h_StandardGameGetSuperObject(s32);
s32 *HIE_fn_hGetSuperObjectObject(s32);
s32 func_0019B1E0(s32);
void func_0019A290(s32, s32);
void func_0019B1B0(s32, s32);

s32 *func_0023E760(s32 arg0, s32 *arg1) {
    unk_func_0023E760_0 sp80;
    s32 obj;
    s32 bit;
    s32 mask;
    s32 mode;
    s32 h;
    s32 flags;
    s32 t;

    arg1 = fn_p_stEvalTree(arg0, arg1, &sp80);
    obj = fn_h_StandardGameGetSuperObject(sp80.unk_00.p->unk_04);
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp80);
    bit = sp80.unk_00.i;
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp80);
    mode = sp80.unk_00.i;
    if (obj != 0 && bit >= 0 && bit < 32) {
        h = *HIE_fn_hGetSuperObjectObject(obj);
        mask = 1 << bit;
        flags = func_0019B1E0(h);
        if (mode == 2) {
            if (flags & mask) {
                t = 0;
            } else {
                t = 1;
            }
            mode = t;
        }
        switch (mode) {
            case 0:
                flags &= ~mask;
                break;
            case 1:
                flags |= mask;
                break;
        }
        func_0019A290(obj, flags);
        func_0019B1B0(h, flags);
    }
    return arg1;
}
