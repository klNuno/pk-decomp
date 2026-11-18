#include "common.h"

struct unk_func_002FFF30_0 {
    unk_func_002FFF30_0 *unk_00;
    unk_func_002FFF30_0 *unk_04;
    u8 pad_08[4];
    char *unk_0C;
};

struct unk_func_002FFF30_1 {
    u8 pad_00[4];
    unk_func_002FFF30_0 unk_04;
};

struct unk_func_002FFF30_2 {
    unk_func_002FFF30_0 *unk_00;
};

extern "C" {
int strcmp(const char *, const char *);
unk_func_002FFF30_2 *func_002FFF30(unk_func_002FFF30_2 *ret, unk_func_002FFF30_1 *arg0, char **arg1);
}

inline bool func_002FFF30_less(char *const &a, char *const &b) {
    return strcmp(a, b) < 0;
}

unk_func_002FFF30_2 *func_002FFF30(unk_func_002FFF30_2 *ret, unk_func_002FFF30_1 *arg0, char **arg1) {
    unk_func_002FFF30_0 *x = arg0->unk_04.unk_00;
    unk_func_002FFF30_0 *y = &arg0->unk_04;

    while (x != NULL) {
        if (!func_002FFF30_less(x->unk_0C, *arg1)) {
            y = x;
            x = x->unk_00;
        } else {
            x = x->unk_04;
        }
    }
    if (y == &arg0->unk_04 || func_002FFF30_less(*arg1, y->unk_0C)) {
        ret->unk_00 = &arg0->unk_04;
        return ret;
    }
    ret->unk_00 = y;
}
