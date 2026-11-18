#include "common.h"

typedef struct unk_func_002EF1A0_0 {
    struct unk_func_002EF1A0_0 *unk_00;
    struct unk_func_002EF1A0_0 *unk_04;
    u8 pad_08[4];
    u8 unk_0C[4];
} unk_func_002EF1A0_0;

void c4sdk_malloc();
void func_002CD2A0();
void func_002D2BB0();
void func_002EE6B0();
void func_002EF3C0();
void func_002EF3D0();

void func_002EF1A0(u8 *arg0, unk_func_002EF1A0_0 *arg1);

#define LEAF(c)                                                     \
    if (c != NULL) {                                                \
        if (c->unk_00 != NULL) func_002EF1A0(arg0, c->unk_00);      \
        if (c->unk_04 != NULL) func_002EF1A0(arg0, c->unk_04);      \
        func_002EF3D0(arg0);                                        \
        func_002EE6B0(c->unk_0C, -1);                               \
        func_002EF3C0(arg0 + 4);                                    \
        func_002D2BB0(c);                                           \
    }

#define MID(b)                                                      \
    if (b != NULL) {                                                \
        c = b->unk_00;                                              \
        LEAF(c)                                                     \
        c = b->unk_04;                                              \
        LEAF(c)                                                     \
        if (b->unk_0C != NULL) func_002CD2A0(b->unk_0C, -1);        \
        func_002D2BB0(b);                                           \
    }

void func_002EF1A0(u8 *arg0, unk_func_002EF1A0_0 *arg1) {
    unk_func_002EF1A0_0 *b;
    unk_func_002EF1A0_0 *c;

    b = arg1->unk_00;
    MID(b)
    b = arg1->unk_04;
    MID(b)
    if (arg1->unk_0C != NULL) {
        if (arg1->unk_0C != NULL) {
            c4sdk_malloc(arg1->unk_0C, 0);
        }
    }
    func_002D2BB0(arg1);
}
