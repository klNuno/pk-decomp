#include "common.h"

typedef struct unk_func_002D5500_0 {
    struct unk_func_002D5500_0 *unk_00;
    struct unk_func_002D5500_0 *unk_04;
    u8 pad_08[0x4];
    s32 unk_0C;
} unk_func_002D5500_0;

typedef struct {
    u8 pad_00[0x4];
    unk_func_002D5500_0 unk_04;
} unk_func_002D5500_1;

unk_func_002D5500_0 **func_002D5500(unk_func_002D5500_0 **arg0, unk_func_002D5500_1 *arg1, s32 *arg2) {
    unk_func_002D5500_0 *x;
    unk_func_002D5500_0 *y;

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
