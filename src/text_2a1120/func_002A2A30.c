#include "common.h"

typedef struct {
    void (*unk_00)();
    u8 pad_04[4];
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
} unk_func_002A2A30_0;

unk_func_002A2A30_0 *func_0029DA50(s32);
void func_002A2AF0();

void func_002A2A30(s32 *arg0) {
    unk_func_002A2A30_0 *temp;
    s32 x;
    s32 y;
    s32 z;

    z = arg0[2];
    y = arg0[1];
    x = arg0[0];
    temp = func_0029DA50(0xC);
    temp->unk_08 = x;
    temp->unk_0C = y;
    temp->unk_10 = z;
    temp->unk_00 = func_002A2AF0;
}
