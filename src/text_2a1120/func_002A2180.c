#include "common.h"

typedef struct unk_func_002A2180_0 {
    s32 unk_00;
    s32 unk_04;
} unk_func_002A2180_0;

typedef struct unk_func_002A2180_1 {
    void *unk_00;
    u8 pad_04[4];
    unk_func_002A2180_0 unk_08;
    unk_func_002A2180_0 unk_10;
} unk_func_002A2180_1;

unk_func_002A2180_1 *func_0029DA50(s32);
void func_002A2260();

void func_002A2180(unk_func_002A2180_0 *arg0, unk_func_002A2180_0 *arg1) {
    s32 temp0, temp1, temp2, temp3;
    unk_func_002A2180_1 *temp;

    temp1 = arg0->unk_04;
    temp0 = arg0->unk_00;
    temp3 = arg1->unk_04;
    temp2 = arg1->unk_00;
    temp = func_0029DA50(0x10);

    temp->unk_08.unk_00 = temp0;
    temp->unk_08.unk_04 = temp1;
    temp->unk_10.unk_00 = temp2;
    temp->unk_10.unk_04 = temp3;
    temp->unk_00 = (void *)func_002A2260;
}
