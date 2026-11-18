#include "common.h"

typedef struct unk_func_002A3260_0 {
    void *unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_002A3260_0;

unk_func_002A3260_0 *func_0029DA50();
s32 func_0029DB20();
void func_002A32B0();

void func_002A3260(s32 arg0) {
    unk_func_002A3260_0 *temp = func_0029DA50(4);

    temp->unk_08 = func_0029DB20(arg0, 0x400);
    temp->unk_00 = func_002A32B0;
}
