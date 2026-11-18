#include "common.h"

typedef struct unk_func_002C1E50_0 {
    s16 unk_00;
    u8 unk_02;
    u8 unk_03;
    u8 pad_04[4];
    s32 unk_08;
    s32 unk_0C;
} unk_func_002C1E50_0;

void *memcpy(void *, const void *, s64);
extern unk_func_002C1E50_0 *D_007B8EF4[];

void func_002C1E50(void *arg0, s64 arg1) {
    unk_func_002C1E50_0 *p;

    p = D_007B8EF4[0];
    p->unk_00 = arg1;
    p->unk_02 = 0;
    p->unk_03 = 0x10;
    p->unk_08 = 0x11000000;
    p->unk_0C = arg1 | 0x50000000;
    memcpy(p + 1, arg0, arg1 * 16);
    D_007B8EF4[0] += (s32)(arg1 + 1);
}
