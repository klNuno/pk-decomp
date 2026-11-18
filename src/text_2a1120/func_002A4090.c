#include "common.h"

typedef struct {
    void (*unk_00)();
    u8 pad_04[4];
    s32 unk_08;
    f32 unk_0C;
    f32 unk_10;
    s32 unk_14;
    f32 unk_18;
    f32 unk_1C;
} unk_func_002A4090_0;

unk_func_002A4090_0 *func_0029DA50(s32);
void func_002A4120();

void func_002A4090(s32 arg0, f32 arg1, f32 arg2, s32 arg3, f32 arg4, f32 arg5) {
    unk_func_002A4090_0 *temp;

    temp = func_0029DA50(0x18);
    temp->unk_08 = arg0;
    temp->unk_0C = arg1;
    temp->unk_10 = arg2;
    temp->unk_14 = arg3;
    temp->unk_18 = arg4;
    temp->unk_1C = arg5;
    temp->unk_00 = func_002A4120;
}
