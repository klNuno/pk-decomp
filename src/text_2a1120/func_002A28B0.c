#include "common.h"

typedef struct unk_func_002A28B0_0 {
    void *unk_00;
    u8 pad_04[4];
    f32 unk_08[4];
} unk_func_002A28B0_0;

unk_func_002A28B0_0 *func_0029DA50(s32);
f32 int2dB__Fi(s32);
void func_002A27F0();

void func_002A28B0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    f32 *p;
    unk_func_002A28B0_0 *temp;

    temp = func_0029DA50(0x10);
    p = temp->unk_08;
    p[0] = int2dB__Fi(arg0);
    p[1] = int2dB__Fi(arg1);
    p[2] = int2dB__Fi(arg2);
    p[3] = int2dB__Fi(arg3);
    temp->unk_00 = func_002A27F0;
}
