#include "common.h"

typedef struct unk_func_00306080_0 {
    u8 *unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 unk_0C;
    u8 pad_0D[3];
    s32 unk_10;
} unk_func_00306080_0;

typedef struct unk_func_00306080_1 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_00306080_1;

void func_003057D0();
void func_00305800();
void func_0030D0F0(s32, s32, s32, s32, s32, s32, s32);
unk_func_00306080_1 *func_0030D3F0(s32);
s32 func_0030D400();
extern u8 D_0035E910[];
extern u8 D_0035E950[];
extern u8 D_0035E9E0[];
extern u8 D_0035EE40[];
extern u8 D_0035EE90[];

static inline void func_00306080_a(unk_func_00306080_0 *p) {
    p->unk_00 = D_0035E9E0;
}

static inline void func_00306080_b(unk_func_00306080_0 *p) {
    func_00306080_a(p);
    p->unk_00 = D_0035E910;
}

static inline void func_00306080_c(unk_func_00306080_0 *p) {
    func_00306080_b(p);
    p->unk_00 = D_0035E950;
}

static inline void func_00306080_d(unk_func_00306080_0 *p) {
    func_00306080_c(p);
    p->unk_00 = D_0035EE90;
}

unk_func_00306080_0 *func_00306080(unk_func_00306080_0 *arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4) {
    unk_func_00306080_0 *volatile sp68;
    s32 sp6C;
    s32 h;
    unk_func_00306080_1 *q;

    sp68 = arg0;
    {
        unk_func_00306080_0 *p = sp68;

        p->unk_00 = D_0035E9E0;
        p->unk_00 = D_0035E910;
        p->unk_00 = D_0035E950;
        p->unk_00 = D_0035EE90;
    }
    sp68->unk_00 = D_0035EE40;
    sp68->unk_04 = -1;
    sp68->unk_08 = 0;
    func_00305800();
    h = func_0030D400();
    q = func_0030D3F0(h);
    q->unk_08 = arg3;
    q->unk_00 = arg1;
    q->unk_04 = arg2;
    if (arg4) {
        q->unk_0C = 1;
    } else {
        q->unk_0C = 0;
    }
    sp68->unk_0C = arg4;
    sp68->unk_10 = arg2;
    func_0030D0F0(0x21, h, 0x10, (s32)&sp6C, 4, 1, 0);
    sp68->unk_08 = sp6C;
    func_003057D0();
    return sp68;
}
