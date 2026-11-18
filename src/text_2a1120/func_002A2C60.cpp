#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_002A2C60_0;

typedef struct {
    void *unk_00;
    s32 unk_04;
    unk_func_002A2C60_0 unk_08;
} unk_func_002A2C60_1;

f32 int2dB(int);

extern "C" {
unk_func_002A2C60_1 *func_0029DA50(s32);
void func_002A2BD0();

void func_002A2C60(s32 arg0, s32 arg1, s32 arg2) {
    unk_func_002A2C60_0 *temp_s0;
    unk_func_002A2C60_1 *temp_s1;

    temp_s1 = func_0029DA50(0xC);
    temp_s0 = &temp_s1->unk_08;
    temp_s0->unk_00 = int2dB(arg0);
    temp_s0->unk_04 = int2dB(arg1);
    temp_s0->unk_08 = int2dB(arg2);
    temp_s1->unk_00 = (void *)func_002A2BD0;
}
}
