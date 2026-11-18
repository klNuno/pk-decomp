#include "common.h"

typedef struct unk_func_002ECB20_0 {
    s32 unk_00;
    u8 pad_04[0x14];
    struct unk_func_002ECB20_0 *unk_18;
    u8 pad_1C[0x4];
    s32 unk_20;
    s32 unk_24;
} unk_func_002ECB20_0;

typedef struct {
    u8 pad_00[0x28];
    unk_func_002ECB20_0 *unk_28;
    u8 pad_2C[0xC];
    s32 unk_38;
    u8 pad_3C[0x10];
    s32 unk_4C;
} unk_func_002ECB20_1;

class unk_func_002ECB20_2 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C(s32, s32);
};

extern "C" {
void func_002F0A20(unk_func_002ECB20_0 *);
void func_002F0AC0(unk_func_002ECB20_0 *);
s32 func_002F0B20(unk_func_002ECB20_0 *);
void func_00304530(s32, unk_func_002ECB20_0 *);
s32 func_00304590();
void func_00308B80(s32);
void func_00308BE0(s32);
extern unk_func_002ECB20_2 *D_00360634;
extern unk_func_002ECB20_0 *D_007BECD0[];

void func_002ECB20(unk_func_002ECB20_1 *arg0);
}

void func_002ECB20(unk_func_002ECB20_1 *arg0) {
    u32 n;
    unk_func_002ECB20_0 *prev;
    u32 i;
    unk_func_002ECB20_0 *p;
    unk_func_002ECB20_0 *q;

    n = 0;
    for (p = arg0->unk_28; p != 0; p = p->unk_18) {
        if (p->unk_24 == 0 && func_002F0B20(p) == 0) {
            D_007BECD0[n++] = p;
        }
    }
    if (arg0->unk_4C != 0) {
        func_00308BE0(arg0->unk_4C);
    }
    prev = 0;
    for (i = 0; i < n; i++) {
        p = D_007BECD0[i];
        func_002F0A20(p);
        p->unk_18 = prev;
        prev = p;
        for (q = arg0->unk_28; q != 0; q = q->unk_18) {
            if (q->unk_20 == p->unk_00) {
                q->unk_20 = 0;
            }
        }
        if (D_00360634 != 0) {
            D_00360634->unk_vf0C(arg0->unk_38, p->unk_00);
        }
    }
    if (arg0->unk_4C != 0) {
        func_00308B80(arg0->unk_4C);
    }
    for (i = 0; i < n; i++) {
        p = D_007BECD0[i];
        func_002F0AC0(p);
        func_00304530(func_00304590(), p);
    }
}
