#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002A1FE0_1;

typedef struct {
    void (*unk_00)();
    u8 pad_04[4];
    unk_func_002A1FE0_1 unk_08;
} unk_func_002A1FE0_0;

unk_func_002A1FE0_0 *func_0029DA50(s32);
f32 int2dB__Fi(s32);
void func_002A1FC0();

void func_002A1FE0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    unk_func_002A1FE0_1 *p;
    unk_func_002A1FE0_0 *temp = func_0029DA50(0x10);

    p = &temp->unk_08;
    p->unk_00 = int2dB__Fi(arg0);
    p->unk_04 = int2dB__Fi(arg1);
    p->unk_08 = int2dB__Fi(arg2);
    p->unk_0C = int2dB__Fi(arg3);
    temp->unk_00 = func_002A1FC0;
}
