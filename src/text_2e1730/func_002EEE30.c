#include "common.h"

typedef struct unk_func_002EEE30_0 {
    struct unk_func_002EEE30_0 *unk_00;
    struct unk_func_002EEE30_0 *unk_04;
    u8 pad_08[0x4];
    s32 unk_0C;
} unk_func_002EEE30_0;

void func_002D2BB0(void *);
void func_002E7540(s32);
void func_002EED20(void *, s32);
void func_002EF050(void *);
void func_002EF060(void *);
void func_002EEE30(u8 *arg0, unk_func_002EEE30_0 *arg1);

#define INNER(n) { \
    unk_func_002EEE30_0 *c = (n); \
    if (c->unk_00 != NULL) { func_002EEE30(arg0, c->unk_00); } \
    if (c->unk_04 != NULL) { func_002EEE30(arg0, c->unk_04); } \
    func_002EF060(arg0); \
    func_002EED20(&c->unk_0C, -1); \
    func_002EF050(arg0 + 4); \
    func_002D2BB0(c); \
}

#define MID(n) { \
    unk_func_002EEE30_0 *m = (n); \
    if (m->unk_00 != NULL) INNER(m->unk_00) \
    if (m->unk_04 != NULL) INNER(m->unk_04) \
    if (&m->unk_0C != NULL) { func_002E7540(m->unk_0C); } \
    func_002D2BB0(m); \
}

void func_002EEE30(u8 *arg0, unk_func_002EEE30_0 *arg1) {
    if (arg1->unk_00 != NULL) MID(arg1->unk_00)
    if (arg1->unk_04 != NULL) MID(arg1->unk_04)
    if (&arg1->unk_0C != NULL) {
        func_002E7540(arg1->unk_0C);
    }
    func_002D2BB0(arg1);
}
