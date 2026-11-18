#include "common.h"

typedef struct unk_func_002F5C20_0 {
    struct unk_func_002F5C20_0 *unk_00;
    struct unk_func_002F5C20_0 *unk_04;
    u8 pad_08[0x4];
    u32 unk_0C;
    u32 unk_10;
} unk_func_002F5C20_0;

typedef struct unk_func_002F5C20_1 {
    u8 pad_00[0x4];
    unk_func_002F5C20_0 unk_04;
} unk_func_002F5C20_1;

unk_func_002F5C20_0 **func_002F5C20(unk_func_002F5C20_0 **arg0, unk_func_002F5C20_1 *arg1, u32 *arg2) {
    unk_func_002F5C20_0 *x;
    unk_func_002F5C20_0 *y;

    y = &arg1->unk_04;
    x = arg1->unk_04.unk_00;
    while (x != NULL) {
        if (!(u8)(arg2[0] == x->unk_0C ? x->unk_10 < arg2[1] : x->unk_0C < arg2[0])) {
            y = x;
            x = x->unk_00;
        } else {
            x = x->unk_04;
        }
    }
    if (y == &arg1->unk_04 || (u8)(y->unk_0C == arg2[0] ? arg2[1] < y->unk_10 : arg2[0] < y->unk_0C)) {
        *arg0 = &arg1->unk_04;
        return arg0;
    }
    *arg0 = y;
}
