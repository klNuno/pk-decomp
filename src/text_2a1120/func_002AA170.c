#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[0x4];
    s64 unk_08;
} unk_func_002AA170_0;

unk_func_002AA170_0 *func_0029DA50();
void func_002AA1B0();

void func_002AA170(s64 arg0) {
    unk_func_002AA170_0 *temp;

    temp = func_0029DA50(8);
    temp->unk_08 = arg0;
    temp->unk_00 = func_002AA1B0;
}
