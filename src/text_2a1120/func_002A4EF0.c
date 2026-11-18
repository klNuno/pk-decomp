#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[0x4];
    s32 unk_08;
} unk_func_002A4EF0_0;

unk_func_002A4EF0_0 *func_0029DA50();
void func_002A4F30();

void func_002A4EF0(s32 arg0) {
    unk_func_002A4EF0_0 *temp = func_0029DA50(4);

    temp->unk_08 = arg0;
    temp->unk_00 = func_002A4F30;
}
