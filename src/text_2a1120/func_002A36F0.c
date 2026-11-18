#include "common.h"

typedef struct {
    void (*unk_00)();
    u8 pad_04[4];
    s64 unk_08;
    s64 unk_10;
    s64 unk_18;
    s64 unk_20;
    s64 unk_28;
    s64 unk_30;
} unk_func_002A36F0_0;

u8 *func_0029DA50(s32);
void func_002A3790();

void func_002A36F0(s64 arg0, s64 arg1, s64 arg2, s64 arg3, s64 arg4, s64 arg5) {
    u8 *v = func_0029DA50(0x34);
    unk_func_002A36F0_0 *p = (unk_func_002A36F0_0 *)(v + ((~(s32)v + 1) & 7));

    p->unk_08 = arg0;
    p->unk_10 = arg1;
    p->unk_18 = arg2;
    p->unk_20 = arg3;
    p->unk_28 = arg4;
    p->unk_30 = arg5;
    p->unk_00 = func_002A3790;
}
