#include "common.h"

typedef struct unk_func_002CF280_0 {
    struct unk_func_002CF280_0 *unk_00;
    struct unk_func_002CF280_0 *unk_04;
    u32 unk_08;
} unk_func_002CF280_0;

void func_002CF280(unk_func_002CF280_0 *arg0, unk_func_002CF280_0 **arg1) {
    unk_func_002CF280_0 *temp = arg0->unk_04;
    unk_func_002CF280_0 *parent;

    if (*arg1 == arg0) {
        *arg1 = temp;
    }
    arg0->unk_04 = temp->unk_00;
    if (temp->unk_00 != NULL) {
        temp->unk_00->unk_08 = (u32)arg0 | (temp->unk_00->unk_08 & 1);
    }
    temp->unk_08 = (arg0->unk_08 & ~1) | (temp->unk_08 & 1);
    parent = (unk_func_002CF280_0 *)(arg0->unk_08 & ~1);
    if (arg0 == parent->unk_00) {
        parent->unk_00 = temp;
    } else {
        parent->unk_04 = temp;
    }
    temp->unk_00 = arg0;
    arg0->unk_08 = (u32)temp | (arg0->unk_08 & 1);
}
