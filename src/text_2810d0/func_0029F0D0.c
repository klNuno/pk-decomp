#include "common.h"

typedef struct unk_func_0029F0D0_1 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_0029F0D0_1;

typedef struct unk_func_0029F0D0_0 {
    void *unk_00;
    u8 pad_04[4];
    unk_func_0029F0D0_1 unk_08;
} unk_func_0029F0D0_0;

unk_func_0029F0D0_0 *func_0029DA50(s32);
s32 func_0029DB20(s32 *, s32);
void func_0029F170();
void func_0029F1F0();

void func_0029F0D0(s32 arg0, s32 arg1, s32 *arg2) {
    unk_func_0029F0D0_0 *temp_s0;
    unk_func_0029F0D0_1 *temp_s1;
    unk_func_0029F0D0_0 *temp_v0;
    s32 temp;

    if (arg1 == 0x1004) {
        temp_s0 = func_0029DA50(0xC);
        temp_s1 = &temp_s0->unk_08;
        temp_s1->unk_00 = arg0;
        temp_s1->unk_04 = arg1;
        temp_s1->unk_08 = func_0029DB20(arg2, 0x10);
        temp_s0->unk_00 = func_0029F170;
        return;
    }
    temp = *arg2;
    temp_v0 = func_0029DA50(0xC);
    temp_v0->unk_08.unk_00 = arg0;
    temp_v0->unk_08.unk_04 = arg1;
    temp_v0->unk_08.unk_08 = temp;
    temp_v0->unk_00 = func_0029F1F0;
}
