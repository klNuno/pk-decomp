#include "common.h"

typedef struct {
    void (*unk_00)();
    u8 pad_04[4];
    s64 unk_08;
    s64 unk_10;
} unk_func_002A6260_0;

unk_func_002A6260_0 *func_0029DA50();
void func_002A62B0();

void func_002A6260(s64 arg0, s64 arg1) {
    unk_func_002A6260_0 *temp;

    temp = func_0029DA50(0x10);
    temp->unk_08 = arg0;
    temp->unk_10 = arg1;
    temp->unk_00 = func_002A62B0;
}
