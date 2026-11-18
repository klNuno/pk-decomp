#include "common.h"

typedef struct unk_func_002FD8B0_0 {
    struct unk_func_002FD8B0_0 *unk_00;
    struct unk_func_002FD8B0_0 *unk_04;
} unk_func_002FD8B0_0;

void func_002FDA70(u8 *);
void func_002FDA80(u8 *);
void func_002D2BB0(void *);

void func_002FD8B0(u8 *arg0, unk_func_002FD8B0_0 *arg1) {
    unk_func_002FD8B0_0 *a;
    unk_func_002FD8B0_0 *b;

    a = arg1->unk_00;
    if (a != NULL) {
        b = a->unk_00;
        if (b != NULL) {
            if (b->unk_00 != NULL) {
                func_002FD8B0(arg0, b->unk_00);
            }
            if (b->unk_04 != NULL) {
                func_002FD8B0(arg0, b->unk_04);
            }
            func_002FDA80(arg0);
            func_002FDA70(arg0 + 4);
            func_002D2BB0(b);
        }
        b = a->unk_04;
        if (b != NULL) {
            if (b->unk_00 != NULL) {
                func_002FD8B0(arg0, b->unk_00);
            }
            if (b->unk_04 != NULL) {
                func_002FD8B0(arg0, b->unk_04);
            }
            func_002FDA80(arg0);
            func_002FDA70(arg0 + 4);
            func_002D2BB0(b);
        }
        func_002D2BB0(a);
    }
    a = arg1->unk_04;
    if (a != NULL) {
        b = a->unk_00;
        if (b != NULL) {
            if (b->unk_00 != NULL) {
                func_002FD8B0(arg0, b->unk_00);
            }
            if (b->unk_04 != NULL) {
                func_002FD8B0(arg0, b->unk_04);
            }
            func_002FDA80(arg0);
            func_002FDA70(arg0 + 4);
            func_002D2BB0(b);
        }
        b = a->unk_04;
        if (b != NULL) {
            if (b->unk_00 != NULL) {
                func_002FD8B0(arg0, b->unk_00);
            }
            if (b->unk_04 != NULL) {
                func_002FD8B0(arg0, b->unk_04);
            }
            func_002FDA80(arg0);
            func_002FDA70(arg0 + 4);
            func_002D2BB0(b);
        }
        func_002D2BB0(a);
    }
    func_002D2BB0(arg1);
}
