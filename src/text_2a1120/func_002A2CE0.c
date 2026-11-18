#include "common.h"

typedef struct unk_func_002A2CE0_0 {
    void *unk_00;
    s32 unk_04;
    s16 unk_08;
    s16 unk_0A;
} unk_func_002A2CE0_0;

unk_func_002A2CE0_0 *func_0029DA50();
void func_002A2D80();

void func_002A2CE0(s16 *arg0) {
    s16 temp0;
    s16 temp1;
    unk_func_002A2CE0_0 *temp;

    temp1 = arg0[1];
    temp0 = arg0[0];
    temp = func_0029DA50(4);

    temp->unk_08 = temp0;
    temp->unk_0A = temp1;
    temp->unk_00 = func_002A2D80;
}
