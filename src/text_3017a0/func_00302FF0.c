#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[4];
    s32 unk_08;
} unk_func_00302FF0_0;

typedef struct {
    u8 pad_00[0x14];
    unk_func_00302FF0_0 *unk_14;
    s32 unk_18;
} unk_func_00302FF0_1;

typedef struct {
    unk_func_00302FF0_1 *unk_00;
} unk_func_00302FF0_2;

unk_func_00302FF0_2 func_003035F0(void *, void *);
void func_00304210(s32);
void func_00303580(void *, unk_func_00302FF0_0 **);
void func_002D2BB0(void *);
void func_00303B60(void *, unk_func_00302FF0_2);

void func_00302FF0(u8 *arg0, u8 *arg1) {
    unk_func_00302FF0_0 *q;
    unk_func_00302FF0_2 it;
    unk_func_00302FF0_0 *p;
    unk_func_00302FF0_2 tmp;

    unk_func_00302FF0_1 *n;
    s32 a;

    tmp = func_003035F0(arg0 + 0xC, arg1 + 4);
    n = tmp.unk_00;
    it.unk_00 = n;
    p = n->unk_14;
    a = n->unk_18;
    p->unk_08--;
    func_00304210(a);
    if (p->unk_08 == 0) {
        func_00303580(arg0, &p);
        q = p;
        if (q != NULL) {
            if (q->unk_00 != NULL) {
                func_002D2BB0(q->unk_00);
            }
            func_002D2BB0(q);
        }
    }
    func_00303B60(arg0 + 0xC, it);
}
