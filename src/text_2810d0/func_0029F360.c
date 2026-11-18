#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[4];
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
} unk_func_0029F360_0;

unk_func_0029F360_0 *func_0029DA50(s32);
void func_0029F410();

void func_0029F360(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8) {
    unk_func_0029F360_0 *temp_v0;

    temp_v0 = func_0029DA50(0x24);
    temp_v0->unk_08 = arg0;
    temp_v0->unk_0C = arg1;
    temp_v0->unk_10 = arg2;
    temp_v0->unk_14 = arg3;
    temp_v0->unk_18 = arg4;
    temp_v0->unk_1C = arg5;
    temp_v0->unk_20 = arg6;
    temp_v0->unk_24 = arg7;
    temp_v0->unk_28 = arg8;
    temp_v0->unk_00 = func_0029F410;
}
