#include "common.h"

typedef struct unk_func_002E96F0_0 {
    struct unk_func_002E96F0_0 *unk_00;
    struct unk_func_002E96F0_0 *unk_04;
    u8 pad_08[4];
    u8 unk_0C[4];
    u8 unk_10[4];
    u8 unk_14[4];
} unk_func_002E96F0_0;

typedef struct unk_func_002E96F0_1 {
    u8 pad_00[4];
    u8 unk_04[4];
} unk_func_002E96F0_1;

void func_002CD2A0(void *, s32);
void func_002D2BB0(void *);
void func_002E9930(void *, s32);
void func_002E9990(void *);
void func_002E99A0(void *, s32);
void func_002E9A10(unk_func_002E96F0_1 *);

void func_002E96F0(unk_func_002E96F0_1 *arg0, unk_func_002E96F0_0 *arg1) {
    unk_func_002E96F0_0 *a;
    unk_func_002E96F0_0 *b;

    a = arg1->unk_00;
    if (a != NULL) {
        b = a->unk_00;
        if (b != NULL) {
            if (b->unk_00 != NULL) {
                func_002E96F0(arg0, b->unk_00);
            }
            if (b->unk_04 != NULL) {
                func_002E96F0(arg0, b->unk_04);
            }
            func_002E9A10(arg0);
            func_002E99A0(b->unk_0C, -1);
            func_002E9990(arg0->unk_04);
            func_002D2BB0(b);
        }
        b = a->unk_04;
        if (b != NULL) {
            if (b->unk_00 != NULL) {
                func_002E96F0(arg0, b->unk_00);
            }
            if (b->unk_04 != NULL) {
                func_002E96F0(arg0, b->unk_04);
            }
            func_002E9A10(arg0);
            func_002E99A0(b->unk_0C, -1);
            func_002E9990(arg0->unk_04);
            func_002D2BB0(b);
        }
        if (a->unk_0C != NULL) {
            func_002E9930(a->unk_10, -1);
        }
        func_002D2BB0(a);
    }
    a = arg1->unk_04;
    if (a != NULL) {
        b = a->unk_00;
        if (b != NULL) {
            if (b->unk_00 != NULL) {
                func_002E96F0(arg0, b->unk_00);
            }
            if (b->unk_04 != NULL) {
                func_002E96F0(arg0, b->unk_04);
            }
            func_002E9A10(arg0);
            func_002E99A0(b->unk_0C, -1);
            func_002E9990(arg0->unk_04);
            func_002D2BB0(b);
        }
        b = a->unk_04;
        if (b != NULL) {
            if (b->unk_00 != NULL) {
                func_002E96F0(arg0, b->unk_00);
            }
            if (b->unk_04 != NULL) {
                func_002E96F0(arg0, b->unk_04);
            }
            func_002E9A10(arg0);
            func_002E99A0(b->unk_0C, -1);
            func_002E9990(arg0->unk_04);
            func_002D2BB0(b);
        }
        if (a->unk_0C != NULL) {
            func_002E9930(a->unk_10, -1);
        }
        func_002D2BB0(a);
    }
    if (arg1->unk_0C != NULL) {
        if (arg1->unk_10 != NULL) {
            func_002CD2A0(arg1->unk_14, -1);
        }
    }
    func_002D2BB0(arg1);
}
