#include "common.h"

typedef struct unk_func_002FD830_0 {
    struct unk_func_002FD830_0 *unk_00;
    struct unk_func_002FD830_0 *unk_04;
    u8 pad_08[4];
    u32 unk_0C;
} unk_func_002FD830_0;

typedef struct {
    u8 pad_00[4];
    unk_func_002FD830_0 unk_04;
} unk_func_002FD830_1;

unk_func_002FD830_0 **func_002FD830(unk_func_002FD830_0 **arg0, unk_func_002FD830_1 *arg1, u32 *arg2) {
    unk_func_002FD830_0 *x;
    unk_func_002FD830_0 *y;

    x = arg1->unk_04.unk_00;
    y = &arg1->unk_04;
    while (x != NULL) {
        if (!(x->unk_0C < *arg2)) {
            y = x;
            x = x->unk_00;
        } else {
            x = x->unk_04;
        }
    }
    if (y == &arg1->unk_04 || *arg2 < y->unk_0C) {
        *arg0 = &arg1->unk_04;
        return arg0;
    }
    *arg0 = y;
}
