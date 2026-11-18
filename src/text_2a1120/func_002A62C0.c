#include "common.h"

typedef struct unk_func_002A62C0_0 {
    void (*unk_00)();
    u8 pad_04[4];
    u8 unk_08;
} unk_func_002A62C0_0;

unk_func_002A62C0_0 *func_0029DA50();
void func_002A6300();

void func_002A62C0(u8 arg0) {
    unk_func_002A62C0_0 *temp = func_0029DA50(1);
    temp->unk_08 = arg0;
    temp->unk_00 = func_002A6300;
}
