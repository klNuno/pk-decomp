#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_002A2610_0;

typedef struct {
    void *unk_00;
    u8 pad_04[0x4];
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
} unk_func_002A2610_1;

unk_func_002A2610_1 *func_0029DA50();
void func_002A26F0();

void func_002A2610(unk_func_002A2610_0 *arg0) {
    s32 temp0;
    s32 temp1;
    s32 temp2;
    s32 temp3;
    unk_func_002A2610_1 *temp;

    temp3 = arg0->unk_0C;
    temp2 = arg0->unk_08;
    temp1 = arg0->unk_04;
    temp0 = arg0->unk_00;

    temp = func_0029DA50(0x10);
    temp->unk_08 = temp0;
    temp->unk_0C = temp1;
    temp->unk_10 = temp2;
    temp->unk_14 = temp3;
    temp->unk_00 = func_002A26F0;
}
