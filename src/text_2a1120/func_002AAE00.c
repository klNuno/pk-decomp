#include "common.h"

typedef struct {
    void (*unk_00)();
    u8 pad_04[4];
    s32 unk_08;
    f32 unk_0C;
} unk_func_002AAE00_0;

unk_func_002AAE00_0 *func_0029DA50();
void func_002AAE50();

void func_002AAE00(s32 arg0, f32 arg1) {
    unk_func_002AAE00_0 *temp;

    temp = func_0029DA50(8);
    temp->unk_08 = arg0;
    temp->unk_0C = arg1;
    temp->unk_00 = func_002AAE50;
}
