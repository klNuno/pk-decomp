#include "common.h"

typedef struct unk_func_002CF1F0_0 {
    struct unk_func_002CF1F0_0 *unk_00;
    struct unk_func_002CF1F0_0 *unk_04;
    u32 unk_08;
} unk_func_002CF1F0_0;

void func_002CF1F0(unk_func_002CF1F0_0 *arg0, unk_func_002CF1F0_0 **arg1) {
    unk_func_002CF1F0_0 *child;
    unk_func_002CF1F0_0 *temp;
    unk_func_002CF1F0_0 *parent;

    child = arg0->unk_00;
    if (*arg1 == arg0) {
        *arg1 = child;
    }
    arg0->unk_00 = child->unk_04;
    temp = child->unk_04;
    if (temp != NULL) {
        temp->unk_08 = (u32)arg0 | (temp->unk_08 & 1);
    }
    child->unk_08 = (arg0->unk_08 & ~1) | (child->unk_08 & 1);
    parent = (unk_func_002CF1F0_0 *)(arg0->unk_08 & ~1);
    if (arg0 == parent->unk_00) {
        parent->unk_00 = child;
    } else {
        parent->unk_04 = child;
    }
    child->unk_04 = arg0;
    arg0->unk_08 = (u32)child | (arg0->unk_08 & 1);
}
