#include "common.h"

typedef struct unk_func_002E88C0_0 {
    struct unk_func_002E88C0_0 *unk_00;
    struct unk_func_002E88C0_0 *unk_04;
    u8 pad_08[4];
    u8 unk_0C[4];
    u8 unk_10[4];
} unk_func_002E88C0_0;

void func_00307FF0();
void func_002D2BB0();
void func_002E8390();
void func_002E8AF0();
void func_002E8B00();

void func_002E88C0(u8 *arg0, unk_func_002E88C0_0 *arg1);

#define LEAF(c)                                                     \
    if (c != NULL) {                                                \
        if (c->unk_00 != NULL) func_002E88C0(arg0, c->unk_00);      \
        if (c->unk_04 != NULL) func_002E88C0(arg0, c->unk_04);      \
        func_002E8B00(arg0);                                        \
        func_002E8390(c->unk_0C, -1);                               \
        func_002E8AF0(arg0 + 4);                                    \
        func_002D2BB0(c);                                           \
    }

#define MID(b)                                                      \
    if (b != NULL) {                                                \
        c = b->unk_00;                                              \
        LEAF(c)                                                     \
        c = b->unk_04;                                              \
        LEAF(c)                                                     \
        if (b->unk_0C != NULL) func_00307FF0(b->unk_10, -1);         \
        func_002D2BB0(b);                                           \
    }

void func_002E88C0(u8 *arg0, unk_func_002E88C0_0 *arg1) {
    unk_func_002E88C0_0 *b;
    unk_func_002E88C0_0 *c;

    b = arg1->unk_00;
    MID(b)
    b = arg1->unk_04;
    MID(b)
    if (arg1->unk_0C != NULL) {
        func_00307FF0(arg1->unk_10, -1);
    }
    func_002D2BB0(arg1);
}
