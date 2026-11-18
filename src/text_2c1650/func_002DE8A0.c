#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_002DE8A0_0;

typedef struct {
    u8 pad_00[0x14];
    u32 unk_14;
    u8 pad_18[8];
    s32 unk_20;
    u8 pad_24[0x1C];
    s32 unk_40;
} unk_func_002DE8A0_1;

typedef struct {
    u8 pad_00[4];
    u8 *unk_04;
    unk_func_002DE8A0_1 *unk_08;
} unk_func_002DE8A0_2;

u8 *func_002D2BC0(s32);
void func_002E0CF0(void *, unk_func_002DE8A0_0 *, s32, u8 *);

s32 func_002DE8A0(unk_func_002DE8A0_2 *arg0, unk_func_002DE8A0_1 *arg1, u8 *arg2, s32 arg3) {
    unk_func_002DE8A0_0 *tbl;
    u32 n;
    u32 i;
    void *p;
    unk_func_002DE8A0_0 *e;
    u8 *q;

    arg0->unk_08 = arg1;
    if (arg1->unk_40 == -1) {
        return 1;
    }
    n = arg1->unk_14;
    tbl = (unk_func_002DE8A0_0 *)(arg2 + arg1->unk_40);
    arg0->unk_04 = func_002D2BC0(n << 4);
    for (i = 0; i < n; i++) {
        e = &tbl[i];
        q = arg2 + (arg1->unk_20 + e->unk_0C);
        p = arg0->unk_04 + i * 16;
        if (p != 0) {
            func_002E0CF0(p, e, arg3, q);
        }
    }
    return 1;
}
