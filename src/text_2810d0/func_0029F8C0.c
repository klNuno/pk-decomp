#include "common.h"

typedef struct unk_func_0029F8C0_0 {
    s32 unk_00;
    s32 unk_04;
    f32 unk_08;
} unk_func_0029F8C0_0;

typedef struct unk_func_0029F8C0_1 {
    void *unk_00;
    u8 pad_04[4];
    unk_func_0029F8C0_0 unk_08;
} unk_func_0029F8C0_1;

unk_func_0029F8C0_1 *func_0029DA50(s32);
void func_0029F7C0();
f32 int2dB__Fi(f64);

void func_0029F8C0(s32 arg0, s32 arg1, f64 arg2) {
    unk_func_0029F8C0_0 *temp2;
    unk_func_0029F8C0_1 *temp;

    temp = func_0029DA50(0xC);
    temp2 = &temp->unk_08;
    temp2->unk_00 = arg0;
    temp2->unk_04 = arg1;
    temp2->unk_08 = int2dB__Fi(arg2);
    temp->unk_00 = (void *)func_0029F7C0;
}
