#include "common.h"

typedef struct unk_func_002A47B0_0 {
    void *unk_00;
    u8 pad_04[4];
    s32 unk_08;
} unk_func_002A47B0_0;

unk_func_002A47B0_0 *func_0029DA50(s32);
s32 func_0029DB20(s32, s32);
void func_002A4800();

void func_002A47B0(s32 arg0) {
    unk_func_002A47B0_0 *temp;

    temp = func_0029DA50(4);
    temp->unk_08 = func_0029DB20(arg0, 0x80);
    temp->unk_00 = func_002A4800;
}
