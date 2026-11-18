/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_002D6560_1 {
    u8 pad_00[0x4];
    struct unk_func_002D6560_1 *unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
} unk_func_002D6560_1;

typedef struct unk_func_002D6560_0 {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0x8];
} unk_func_002D6560_0;

typedef struct unk_func_002D6560_2 {
    unk_func_002D6560_1 *unk_00;
} unk_func_002D6560_2;

extern "C" {
unk_func_002D6560_1 *func_002CF7C0(void *);
unk_func_002D6560_1 **func_002CF820(void *);
void func_002CFEF0(unk_func_002D6560_2 *);
unk_func_002D6560_1 *func_002D66D0(unk_func_002D6560_0 *);
void func_002D66E0(unk_func_002D6560_0 *, s32);
void func_002D6D40(unk_func_002D6560_2 *, void *, s32 *);
void func_002D6E70(unk_func_002D6560_2 *, unk_func_002D6560_0 *, unk_func_002D6560_2 *, s32 *);
void func_002D6FB0(unk_func_002D6560_0 *);
bool func_002D75C0(s32, s32, s32);
}

static inline bool func_002D6560_ne(unk_func_002D6560_2 *a, unk_func_002D6560_1 *b) {
    return a->unk_00 != b;
}

extern "C" bool func_002D6560(void *arg0, s32 arg1, s32 arg2) {
    bool r;
    bool ok;
    unk_func_002D6560_0 s;
    unk_func_002D6560_2 it2;
    unk_func_002D6560_2 it;
    unk_func_002D6560_2 hint;
    unk_func_002D6560_2 res;
    unk_func_002D6560_1 *n;

    r = false;
    if (arg2 != -2) {
        func_002D6D40(&it, arg0, &arg2);
        if (it.unk_00 != func_002CF7C0(arg0)) {
            r = func_002D75C0(it.unk_00->unk_10, arg1, -2);
        }
    } else {
        func_002D6FB0(&s);
        for (it2.unk_00 = *func_002CF820(arg0); func_002D6560_ne(&it2, func_002CF7C0(arg0)); func_002CFEF0(&it2)) {
            hint.unk_00 = (unk_func_002D6560_1 *)&s.unk_04;
            func_002D6E70(&res, &s, &hint, &it2.unk_00->unk_0C);
        }
        ok = false;
        if (s.unk_00 != 0) {
            ok = true;
            for (n = func_002D66D0(&s)->unk_04; n != func_002D66D0(&s); n = n->unk_04) {
                ok = func_002D6560(arg0, arg1, n->unk_08) && ok;
                if (n->unk_08 == -2) {
                    break;
                }
            }
        }
        r = ok;
        func_002D66E0(&s, 0);
    }
    return r;
}
