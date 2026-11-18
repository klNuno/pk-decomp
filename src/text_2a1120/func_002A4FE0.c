#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[0x4];
    s16 unk_08;
} unk_func_002A4FE0_0;

unk_func_002A4FE0_0 *func_0029DA50();
void func_002A5020();

void func_002A4FE0(s16 arg0) {
    unk_func_002A4FE0_0 *temp = func_0029DA50(2);

    temp->unk_08 = arg0;
    temp->unk_00 = func_002A5020;
}
