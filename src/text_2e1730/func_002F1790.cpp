/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_002F1790_0 {
    struct unk_func_002F1790_0 *unk_00;
    struct unk_func_002F1790_0 *unk_04;
    u8 pad_08[4];
    s32 unk_0C;
} unk_func_002F1790_0;

typedef struct unk_func_002F1790_1 {
    s32 unk_00;
    s32 unk_04;
} unk_func_002F1790_1;

typedef struct unk_func_002F1790_2 {
    u8 pad_00[4];
    unk_func_002F1790_0 *unk_04;
} unk_func_002F1790_2;

extern "C" {
void c4sdk_malloc(...);
s32 func_002CEAF0(...);
s32 func_002D0B40(...);
s32 func_002D0B50(...);
s32 func_002D48D0(...);
void func_002F1910(...);
unk_func_002F1790_0 *func_002F1C70(unk_func_002F1790_2 *, unk_func_002F1790_0 *, bool, bool, unk_func_002F1790_1 *);

s32 *func_002F1790(unk_func_002F1790_2 *arg0, s32 *arg1) {
    unk_func_002F1790_1 sp90;
    unk_func_002F1790_0 *y;
    unk_func_002F1790_0 *found;
    unk_func_002F1790_0 *x;
    bool a;
    bool b;

    y = (unk_func_002F1790_0 *)&arg0->unk_04;
    found = 0;
    x = arg0->unk_04;
    a = 1;
    b = a;
    while (x != 0) {
        y = x;
        if (func_002CEAF0(arg1, 0, func_002D0B50(arg1), func_002D0B40(&x->unk_0C), func_002D0B50(&x->unk_0C)) < 0) {
            x = x->unk_00;
            a = 1;
        } else {
            found = x;
            x = x->unk_04;
            a = 0;
            b = 0;
        }
    }
    if (found == 0 || func_002CEAF0(&found->unk_0C, 0, func_002D0B50(&found->unk_0C), func_002D0B40(arg1), func_002D0B50(arg1)) < 0) {
        s32 *volatile p;
        s32 *r;

        p = &sp90.unk_00;
        func_002F1910(&sp90, arg1);
        sp90.unk_00 = *arg1;
        *p = func_002D48D0(*arg1, p);
        sp90.unk_04 = 0;
        r = &func_002F1C70(arg0, y, a, b, &sp90)->unk_0C;
        c4sdk_malloc(&sp90, 0);
        return r;
    }
    return &found->unk_0C;
}
}
