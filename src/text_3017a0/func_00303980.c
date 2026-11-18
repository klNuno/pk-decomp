#include "common.h"

typedef struct unk_func_00303980_0 {
    struct unk_func_00303980_0 *unk_00;
    struct unk_func_00303980_0 *unk_04;
} unk_func_00303980_0;

void func_00303B50(s32);
void func_00303B40(s32);
void func_002D2BB0(void *);
void func_00303980(s32 arg0, unk_func_00303980_0 *arg1);

static inline void func_00303980_inl1(s32 arg0, unk_func_00303980_0 *arg1) {
    unk_func_00303980_0 *temp;

    temp = arg1->unk_00;
    if (temp != NULL) {
        if (temp->unk_00 != NULL) {
            func_00303980(arg0, temp->unk_00);
        }
        if (temp->unk_04 != NULL) {
            func_00303980(arg0, temp->unk_04);
        }
        func_00303B50(arg0);
        func_00303B40(arg0 + 4);
        func_002D2BB0(temp);
    }
    temp = arg1->unk_04;
    if (temp != NULL) {
        if (temp->unk_00 != NULL) {
            func_00303980(arg0, temp->unk_00);
        }
        if (temp->unk_04 != NULL) {
            func_00303980(arg0, temp->unk_04);
        }
        func_00303B50(arg0);
        func_00303B40(arg0 + 4);
        func_002D2BB0(temp);
    }
    func_002D2BB0(arg1);
}

void func_00303980(s32 arg0, unk_func_00303980_0 *arg1) {
    unk_func_00303980_0 *temp;

    temp = arg1->unk_00;
    if (temp != NULL) {
        func_00303980_inl1(arg0, temp);
    }
    {
        unk_func_00303980_0 *temp2 = arg1->unk_04;
        if (temp2 != NULL) {
            func_00303980_inl1(arg0, temp2);
        }
    }
    func_002D2BB0(arg1);
}
