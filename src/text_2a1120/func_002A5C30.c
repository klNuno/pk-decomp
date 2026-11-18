#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[0x4];
    u8 unk_08;
} unk_func_002A5C30_0;

unk_func_002A5C30_0 *func_0029DA50();
void func_002A5C70();

void func_002A5C30(u8 arg0) {
    unk_func_002A5C30_0 *temp;

    temp = func_0029DA50(1);
    temp->unk_08 = arg0;
    temp->unk_00 = func_002A5C70;
}
