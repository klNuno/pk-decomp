#include "common.h"

typedef struct unk_func_002D22A0_0 {
    struct unk_func_002D22A0_0 *unk_00;
    struct unk_func_002D22A0_0 *unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_002D22A0_0;

typedef struct unk_func_002D22A0_1 {
    s32 unk_00;
    s32 unk_04;
} unk_func_002D22A0_1;

void c4sdk_malloc();
void func_002CD2A0();
void func_002D24C0();
void func_002D24D0();
void func_002D2530();
void func_002D2BB0();

void func_002D22A0(unk_func_002D22A0_1 *arg0, unk_func_002D22A0_0 *arg1) {
    unk_func_002D22A0_0 *a;
    unk_func_002D22A0_0 *b;

    a = arg1->unk_00;
    if (a != NULL) {
        b = a->unk_00;
        if (b != NULL) {
            if (b->unk_00 != NULL) {
                func_002D22A0(arg0, b->unk_00);
            }
            if (b->unk_04 != NULL) {
                func_002D22A0(arg0, b->unk_04);
            }
            func_002D2530(arg0);
            func_002D24D0(&b->unk_0C, -1);
            func_002D24C0(&arg0->unk_04);
            func_002D2BB0(b);
        }
        b = a->unk_04;
        if (b != NULL) {
            if (b->unk_00 != NULL) {
                func_002D22A0(arg0, b->unk_00);
            }
            if (b->unk_04 != NULL) {
                func_002D22A0(arg0, b->unk_04);
            }
            func_002D2530(arg0);
            func_002D24D0(&b->unk_0C, -1);
            func_002D24C0(&arg0->unk_04);
            func_002D2BB0(b);
        }
        if (&a->unk_0C != NULL) {
            func_002CD2A0(&a->unk_0C, -1);
        }
        func_002D2BB0(a);
    }
    a = arg1->unk_04;
    if (a != NULL) {
        b = a->unk_00;
        if (b != NULL) {
            if (b->unk_00 != NULL) {
                func_002D22A0(arg0, b->unk_00);
            }
            if (b->unk_04 != NULL) {
                func_002D22A0(arg0, b->unk_04);
            }
            func_002D2530(arg0);
            func_002D24D0(&b->unk_0C, -1);
            func_002D24C0(&arg0->unk_04);
            func_002D2BB0(b);
        }
        b = a->unk_04;
        if (b != NULL) {
            if (b->unk_00 != NULL) {
                func_002D22A0(arg0, b->unk_00);
            }
            if (b->unk_04 != NULL) {
                func_002D22A0(arg0, b->unk_04);
            }
            func_002D2530(arg0);
            func_002D24D0(&b->unk_0C, -1);
            func_002D24C0(&arg0->unk_04);
            func_002D2BB0(b);
        }
        if (&a->unk_0C != NULL) {
            func_002CD2A0(&a->unk_0C, -1);
        }
        func_002D2BB0(a);
    }
    if (&arg1->unk_0C != NULL) {
        if (&arg1->unk_0C != NULL) {
            c4sdk_malloc(&arg1->unk_0C, 0);
        }
    }
    func_002D2BB0(arg1);
}
