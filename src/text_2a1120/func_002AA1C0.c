#include "common.h"

typedef struct unk_func_002AA1C0_0 {
    void *unk_00;
    u8 pad_04[4];
    f32 unk_08;
    f32 unk_0C;
    f32 unk_10;
    f32 unk_14;
} unk_func_002AA1C0_0;

unk_func_002AA1C0_0 *func_0029DA50(s32);
void func_002AA230();

void func_002AA1C0(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    unk_func_002AA1C0_0 *temp = func_0029DA50(0x10);

    temp->unk_08 = arg0;
    temp->unk_0C = arg1;
    temp->unk_10 = arg2;
    temp->unk_14 = arg3;
    temp->unk_00 = (void *)func_002AA230;
}
