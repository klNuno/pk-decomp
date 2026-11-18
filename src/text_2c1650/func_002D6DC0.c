#include "common.h"

typedef struct unk_func_002D6DC0_0 {
    struct unk_func_002D6DC0_0 *unk_00;
    struct unk_func_002D6DC0_0 *unk_04;
} unk_func_002D6DC0_0;

void func_002D2BB0(unk_func_002D6DC0_0 *);

void func_002D6DC0(unk_func_002D6DC0_0 **arg0, s32 *arg1, unk_func_002D6DC0_0 **arg2, unk_func_002D6DC0_0 **arg3) {
    unk_func_002D6DC0_0 *n;
    unk_func_002D6DC0_0 *first = *arg2;
    unk_func_002D6DC0_0 *last = *arg3;

    if (first == last) {
        *arg0 = last;
        return;
    }
    {
        n = last->unk_00;
        first->unk_00->unk_04 = n->unk_04;
        n->unk_04->unk_00 = first->unk_00;
    }
    while (*arg2 != *arg3) {
        unk_func_002D6DC0_0 *node = *arg2;
        *arg2 = node->unk_04;
        func_002D2BB0(node);
        (*arg1)--;
    }
    *arg0 = *arg3;
}
