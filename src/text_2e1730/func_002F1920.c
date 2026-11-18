#include "common.h"

typedef struct unk_func_002F1920_0 {
    struct unk_func_002F1920_0 *unk_00;
    struct unk_func_002F1920_0 *unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_002F1920_0;

typedef struct unk_func_002F1920_1 {
    s32 unk_00;
    unk_func_002F1920_0 unk_04;
} unk_func_002F1920_1;

s32 func_002CEAF0(s32 *, s32, s32, s32, s32);
s32 func_002D0B40(s32 *);
s32 func_002D0B50(s32 *);

unk_func_002F1920_0 **func_002F1920(unk_func_002F1920_0 **arg0, unk_func_002F1920_1 *arg1, s32 *arg2) {
    unk_func_002F1920_0 *node;
    unk_func_002F1920_0 *y;

    y = &arg1->unk_04;
    node = arg1->unk_04.unk_00;
    while (node != NULL) {
        if (func_002CEAF0(&node->unk_0C, 0, func_002D0B50(&node->unk_0C), func_002D0B40(arg2), func_002D0B50(arg2)) >= 0) {
            y = node;
            node = node->unk_00;
        } else {
            node = node->unk_04;
        }
    }
    if (y == &arg1->unk_04 || func_002CEAF0(arg2, 0, func_002D0B50(arg2), func_002D0B40(&y->unk_0C), func_002D0B50(&y->unk_0C)) < 0) {
        *arg0 = &arg1->unk_04;
        return arg0;
    }
    *arg0 = y;
}
