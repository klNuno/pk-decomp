#include "common.h"

typedef struct unk_func_002A2420_0 {
    void *unk_00;
    u8 pad_04[4];
    f32 unk_08[4];
} unk_func_002A2420_0;

unk_func_002A2420_0 *func_0029DA50(s32);
f32 int2dB__Fi(s64);
void func_002A2360();

void func_002A2420(s64 arg0, s64 arg1, s64 arg2, s64 arg3) {
    f32 *temp_s0;
    unk_func_002A2420_0 *temp_s1;

    temp_s1 = func_0029DA50(0x10);
    temp_s0 = temp_s1->unk_08;
    temp_s0[0] = int2dB__Fi(arg0);
    temp_s0[1] = int2dB__Fi(arg1);
    temp_s0[2] = int2dB__Fi(arg2);
    temp_s0[3] = int2dB__Fi(arg3);
    temp_s1->unk_00 = func_002A2360;
}
