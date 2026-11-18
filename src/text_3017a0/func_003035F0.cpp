#include "common.h"

struct unk_func_003035F0_0 {
    unk_func_003035F0_0 *unk_00;
    unk_func_003035F0_0 *unk_04;
    u8 pad_08[4];
    u32 unk_0C;
    u32 unk_10;
};

struct unk_func_003035F0_1 {
    u32 unk_00;
    u32 unk_04;
};

struct unk_func_003035F0_2 {
    u8 pad_00[4];
    unk_func_003035F0_0 unk_04;
};

struct unk_func_003035F0_3 {
    unk_func_003035F0_0 *unk_00;
};

inline bool func_003035F0_less(const unk_func_003035F0_1 &a, const unk_func_003035F0_1 &b) {
    if (b.unk_00 == a.unk_00) {
        return a.unk_04 < b.unk_04;
    }
    return a.unk_00 < b.unk_00;
}

extern "C" {
unk_func_003035F0_3 *func_003035F0(unk_func_003035F0_3 *ret, unk_func_003035F0_2 *arg0, unk_func_003035F0_1 *arg1);
}

unk_func_003035F0_3 *func_003035F0(unk_func_003035F0_3 *ret, unk_func_003035F0_2 *arg0, unk_func_003035F0_1 *arg1) {
    unk_func_003035F0_0 *x = arg0->unk_04.unk_00;
    unk_func_003035F0_0 *y = &arg0->unk_04;

    while (x != NULL) {
        if (!func_003035F0_less(*(unk_func_003035F0_1 *)&x->unk_0C, *arg1)) {
            y = x;
            x = x->unk_00;
        } else {
            x = x->unk_04;
        }
    }
    if (y == &arg0->unk_04 || func_003035F0_less(*arg1, *(unk_func_003035F0_1 *)&y->unk_0C)) {
        ret->unk_00 = &arg0->unk_04;
        return ret;
    }
    ret->unk_00 = y;
}
