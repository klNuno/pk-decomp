#include "common.h"

typedef struct unk_func_002FDA90_0 {
    struct unk_func_002FDA90_0 *unk_00;
    struct unk_func_002FDA90_0 *unk_04;
} unk_func_002FDA90_0;

void func_002FDC60(s32);
void func_002FDC50(s32);
void func_002D2BB0(void *);
void func_002FDA90(s32 arg0, unk_func_002FDA90_0 *arg1);

static inline void func_002FDA90_inl1(s32 arg0, unk_func_002FDA90_0 *arg1) {
    unk_func_002FDA90_0 *temp;

    temp = arg1->unk_00;
    if (temp != NULL) {
        if (temp->unk_00 != NULL) {
            func_002FDA90(arg0, temp->unk_00);
        }
        if (temp->unk_04 != NULL) {
            func_002FDA90(arg0, temp->unk_04);
        }
        func_002FDC60(arg0);
        func_002FDC50(arg0 + 4);
        func_002D2BB0(temp);
    }
    temp = arg1->unk_04;
    if (temp != NULL) {
        if (temp->unk_00 != NULL) {
            func_002FDA90(arg0, temp->unk_00);
        }
        if (temp->unk_04 != NULL) {
            func_002FDA90(arg0, temp->unk_04);
        }
        func_002FDC60(arg0);
        func_002FDC50(arg0 + 4);
        func_002D2BB0(temp);
    }
    func_002D2BB0(arg1);
}

void func_002FDA90(s32 arg0, unk_func_002FDA90_0 *arg1) {
    unk_func_002FDA90_0 *temp;

    temp = arg1->unk_00;
    if (temp != NULL) {
        func_002FDA90_inl1(arg0, temp);
    }
    {
        unk_func_002FDA90_0 *temp2 = arg1->unk_04;
        if (temp2 != NULL) {
            func_002FDA90_inl1(arg0, temp2);
        }
    }
    func_002D2BB0(arg1);
}
