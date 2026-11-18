#include "common.h"

typedef struct N {
    s32 unk_00;
    struct N *unk_04;
} N;

typedef struct {
    u8 pad[0x14];
    N *unk_14;
} L;

typedef struct {
    s32 unk_00;
    struct {
        s32 unk_00;
        L *unk_04;
    } *unk_04;
} E;

typedef struct {
    u8 pad[0x14];
    N *unk_14;
    u8 pad2[8];
    E *unk_20;
    s32 unk_24;
} S;

void func_00165C90(s32, s32);

void func_00130400(s32 arg0, struct { s32 unk_00; S *unk_04; } *arg1) {
    S *s;
    N *p;
    N *prev;
    E *e;
    s16 i;

    s = arg1->unk_04;
    prev = 0;
    for (p = s->unk_14; p != 0; p = p->unk_04) {
        if (p == prev) {
            break;
        }
        func_00165C90(arg0, p->unk_00);
        prev = p;
    }
    e = s->unk_20;
    for (i = 0; i < s->unk_24; i++, e++) {
        prev = 0;
        for (p = e->unk_04->unk_04->unk_14; p != 0; p = p->unk_04) {
            if (p == prev) {
                break;
            }
            func_00165C90(arg0, p->unk_00);
            prev = p;
        }
    }
}
