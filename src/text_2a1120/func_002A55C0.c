#include "common.h"

typedef struct {
    void (*unk_00)();
    u8 pad_04[4];
    s32 unk_08;
    s32 unk_0C;
} unk_func_002A55C0_0;

unk_func_002A55C0_0 *func_0029DA50();
void func_002A5610();

void func_002A55C0(s32 arg0, s32 arg1) {
    unk_func_002A55C0_0 *temp;

    temp = func_0029DA50(8);
    temp->unk_08 = arg0;
    temp->unk_0C = arg1;
    temp->unk_00 = func_002A5610;
}
