#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
} unk_func_0030AD60_0;

unk_func_0030AD60_0 *func_002D2BC0(s32);
void func_0030B120(unk_func_0030AD60_0 *);

unk_func_0030AD60_0 *func_0030AD60(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    unk_func_0030AD60_0 *p = func_002D2BC0(0x2C);

    p->unk_00 = 0;
    p->unk_04 = 0;
    p->unk_08 = arg0;
    p->unk_0C = arg1;
    p->unk_10 = 0;
    p->unk_14 = arg2;
    p->unk_18 = arg3;
    p->unk_1C = arg4;
    p->unk_24 = arg5;
    p->unk_28 = arg6;
    p->unk_20 = 0;
    func_0030B120(p);
    return p;
}
