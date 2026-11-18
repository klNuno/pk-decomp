#include "common.h"

typedef struct unk_func_002A52B0_0 {
    void *unk_00;
    u8 pad_04[4];
    s64 unk_08;
    s64 unk_10;
    s64 unk_18;
    s64 unk_20;
    s64 unk_28;
    s64 unk_30;
} unk_func_002A52B0_0;

u8 *func_0029DA50(s32);
void func_002A5350();

void func_002A52B0(s64 arg0, s64 arg1, s64 arg2, s64 arg3, s64 arg4, s64 arg5) {
    u8 *temp_v0;
    unk_func_002A52B0_0 *temp_a0;

    temp_v0 = func_0029DA50(0x34);
    temp_a0 = (unk_func_002A52B0_0 *)(temp_v0 + ((~(s32)temp_v0 + 1) & 7));
    temp_a0->unk_08 = arg0;
    temp_a0->unk_10 = arg1;
    temp_a0->unk_18 = arg2;
    temp_a0->unk_20 = arg3;
    temp_a0->unk_28 = arg4;
    temp_a0->unk_30 = arg5;
    temp_a0->unk_00 = func_002A5350;
}
