#include "common.h"

typedef struct unk_func_002A53C0_1 {
    s32 unk_00;
    s32 unk_04;
} unk_func_002A53C0_1;

typedef struct unk_func_002A53C0_0 {
    void *unk_00;
    u8 pad_04[4];
    unk_func_002A53C0_1 unk_08;
} unk_func_002A53C0_0;

unk_func_002A53C0_0 *func_0029DA50(s32);
s32 func_0029DB20(s32 *, s32);
void func_002A5450();
void func_002A54B0();

void func_002A53C0(s32 arg0, s32 *arg1) {
    unk_func_002A53C0_0 *temp;
    unk_func_002A53C0_1 *temp2;

    if (arg0 == 0xB66) {
        temp = func_0029DA50(8);
        temp2 = &temp->unk_08;
        temp2->unk_00 = arg0;
        temp2->unk_04 = func_0029DB20(arg1, 0x10);
        temp->unk_00 = (void *)func_002A5450;
    } else {
        s32 val = *arg1;
        temp = func_0029DA50(8);
        temp->unk_08.unk_00 = arg0;
        temp->unk_08.unk_04 = val;
        temp->unk_00 = (void *)func_002A54B0;
    }
}
