#include "common.h"

typedef struct unk_func_0029F000_0 {
    void *unk_00;
    u8 pad_04[4];
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
} unk_func_0029F000_0;

unk_func_0029F000_0 *func_0029DA50(s32);
void func_0029F0A0();

void func_0029F000(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    unk_func_0029F000_0 *temp;

    temp = func_0029DA50(0x1C);
    temp->unk_08 = arg0;
    temp->unk_0C = arg1;
    temp->unk_10 = arg2;
    temp->unk_14 = arg3;
    temp->unk_18 = arg4;
    temp->unk_1C = arg5;
    temp->unk_20 = arg6;
    temp->unk_00 = func_0029F0A0;
}
