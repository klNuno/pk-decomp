#include "common.h"

typedef struct unk_func_002A67F0_0 {
    void *unk_00;
    u8 pad_04[4];
    u8 unk_08;
    u8 unk_09;
    u8 unk_0A;
    u8 unk_0B;
} unk_func_002A67F0_0;

unk_func_002A67F0_0 *func_0029DA50(s32);
void func_002A6860();

void func_002A67F0(u8 arg0, u8 arg1, u8 arg2, u8 arg3) {
    unk_func_002A67F0_0 *temp;

    temp = func_0029DA50(4);
    temp->unk_08 = arg0;
    temp->unk_09 = arg1;
    temp->unk_0A = arg2;
    temp->unk_0B = arg3;
    temp->unk_00 = func_002A6860;
}
