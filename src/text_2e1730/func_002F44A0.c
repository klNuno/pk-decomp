#include "common.h"

typedef struct unk_func_002F44A0_0 {
    struct unk_func_002F44A0_0 *unk_00;
    struct unk_func_002F44A0_0 *unk_04;
    u8 pad_08[0x4];
    u8 unk_0C[0x10];
} unk_func_002F44A0_0;

typedef struct unk_func_002F44A0_1 {
    u8 pad_00[0x4];
    unk_func_002F44A0_0 unk_04;
} unk_func_002F44A0_1;

s32 func_002CEAF0(void *, s32, s32, s32, s32);
s32 func_002D0B40(void *);
s32 func_002D0B50(void *);

unk_func_002F44A0_0 **func_002F44A0(unk_func_002F44A0_0 **arg0, unk_func_002F44A0_1 *arg1, void *arg2) {
    unk_func_002F44A0_0 *y;
    unk_func_002F44A0_0 *x;

    y = &arg1->unk_04;
    x = arg1->unk_04.unk_00;
    while (x != NULL) {
        if (func_002CEAF0(x->unk_0C, 0, func_002D0B50(x->unk_0C), func_002D0B40(arg2), func_002D0B50(arg2)) >= 0) {
            y = x;
            x = x->unk_00;
        } else {
            x = x->unk_04;
        }
    }
    if (y == &arg1->unk_04 || func_002CEAF0(arg2, 0, func_002D0B50(arg2), func_002D0B40(y->unk_0C), func_002D0B50(y->unk_0C)) < 0) {
        *arg0 = &arg1->unk_04;
        return arg0;
    }
    *arg0 = y;
}
