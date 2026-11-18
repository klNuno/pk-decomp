#include "common.h"

typedef struct unk_func_00303270_0 {
    s32 unk_00;
    u8 pad_04[0x8];
    s32 unk_0C;
} unk_func_00303270_0;

typedef struct unk_func_00303270_1 {
    void *unk_00;
    u8 pad_04[0x4];
    s32 unk_08;
} unk_func_00303270_1;

typedef struct unk_func_00303270_2 {
    u8 pad_00[0x14];
    unk_func_00303270_1 *unk_14;
    unk_func_00303270_0 *unk_18;
} unk_func_00303270_2;

typedef struct unk_func_00303270_3 {
    unk_func_00303270_2 *unk_00;
} unk_func_00303270_3;

typedef struct unk_func_00303270_4 {
    u8 pad_00[0xC];
    u8 unk_0C[0x10];
    u8 unk_1C;
} unk_func_00303270_4;

void func_002D2BB0(void *);
void func_00303580(unk_func_00303270_4 *, unk_func_00303270_1 **);
void func_003035F0(unk_func_00303270_3 *, void *, s32);
void func_00303B60(void *, unk_func_00303270_3);
void func_00304210(unk_func_00303270_0 *);

void func_00303270(unk_func_00303270_4 *arg0, s32 arg1) {
    unk_func_00303270_3 sp34;
    unk_func_00303270_1 *sp38;
    unk_func_00303270_3 sp3C;
    unk_func_00303270_0 *p;
    unk_func_00303270_1 *q;

    if (arg0->unk_1C != 0) {
        func_003035F0(&sp3C, arg0->unk_0C, arg1 + 4);
        sp34.unk_00 = sp3C.unk_00;
        sp38 = sp34.unk_00->unk_14;
        p = sp34.unk_00->unk_18;
        p->unk_0C = 0;
        if (p->unk_00 == 0) {
            sp38->unk_08--;
            func_00304210(p);
            if (sp38->unk_08 == 0) {
                func_00303580(arg0, &sp38);
                q = sp38;
                if (q != NULL) {
                    if (q->unk_00 != NULL) {
                        func_002D2BB0(q->unk_00);
                    }
                    func_002D2BB0(q);
                }
            }
            func_00303B60(arg0->unk_0C, sp34);
        }
    }
}
