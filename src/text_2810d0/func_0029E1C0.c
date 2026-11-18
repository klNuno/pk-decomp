#include "common.h"

typedef struct unk_func_0029E1C0_0 {
    void *unk_00;
    u8 pad_04[4];
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    u8 pad_14[4];
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
} unk_func_0029E1C0_0;

unk_func_0029E1C0_0 *func_0029DA50(s32);
void func_0029E250();

void func_0029E1C0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    unk_func_0029E1C0_0 *temp;

    temp = func_0029DA50(0x1C);
    temp->unk_08 = arg0;
    temp->unk_0C = arg1;
    temp->unk_10 = arg2;
    temp->unk_18 = arg3;
    temp->unk_1C = arg4;
    temp->unk_20 = arg5;
    temp->unk_00 = (void *)func_0029E250;
}
