#include "common.h"

typedef struct unk_func_002A1DD0_0 {
    void *unk_00;
    u8 pad_04[4];
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
} unk_func_002A1DD0_0;

unk_func_002A1DD0_0 *func_0029DA50(s32);
void func_002A1E40();

void func_002A1DD0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    unk_func_002A1DD0_0 *temp;

    temp = func_0029DA50(0x10);
    temp->unk_08 = arg0;
    temp->unk_0C = arg1;
    temp->unk_10 = arg2;
    temp->unk_14 = arg3;
    temp->unk_00 = func_002A1E40;
}
