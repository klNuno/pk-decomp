#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[0x4];
    u8 unk_08;
} unk_func_002A4F40_0;

unk_func_002A4F40_0 *func_0029DA50();
void func_002A4F80();

void func_002A4F40(u8 arg0) {
    unk_func_002A4F40_0 *temp;

    temp = func_0029DA50(1);
    temp->unk_08 = arg0;
    temp->unk_00 = func_002A4F80;
}
