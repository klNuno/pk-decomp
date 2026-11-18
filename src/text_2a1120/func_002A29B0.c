#include "common.h"

typedef struct unk_func_002A29B0_0 {
    void *unk_00;
    u8 pad_04[4];
    s16 unk_08;
    s16 unk_0A;
    s16 unk_0C;
} unk_func_002A29B0_0;

unk_func_002A29B0_0 *func_0029DA50(s32);
void func_002A2A10();

void func_002A29B0(s16 arg0, s16 arg1, s16 arg2) {
    unk_func_002A29B0_0 *temp;

    temp = func_0029DA50(6);
    temp->unk_08 = arg0;
    temp->unk_0A = arg1;
    temp->unk_0C = arg2;
    temp->unk_00 = (void *)func_002A2A10;
}
