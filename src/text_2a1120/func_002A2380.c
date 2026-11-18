#include "common.h"

typedef struct unk_func_002A2380_0 {
    f64 unk_00;
    f64 unk_08;
} unk_func_002A2380_0;

typedef struct unk_func_002A2380_1 {
    void *unk_00;
    u8 pad_04[4];
    f32 unk_08;
    f32 unk_0C;
    f32 unk_10;
    f32 unk_14;
} unk_func_002A2380_1;

f32 int2dB__Fi(f64);
unk_func_002A2380_1 *func_0029DA50(s32);
void func_002A2360();

void func_002A2380(unk_func_002A2380_0 *arg0, unk_func_002A2380_0 *arg1) {
    unk_func_002A2380_1 *temp_v0;
    f32 temp_f20;
    f32 temp_f21;
    f32 temp_f22;
    f32 temp_f23;
    temp_f23 = int2dB__Fi(arg1->unk_08);
    temp_f22 = int2dB__Fi(arg1->unk_00);
    temp_f21 = int2dB__Fi(arg0->unk_08);
    temp_f20 = int2dB__Fi(arg0->unk_00);
    temp_v0 = func_0029DA50(0x10);
    temp_v0->unk_08 = temp_f20;
    temp_v0->unk_0C = temp_f21;
    temp_v0->unk_10 = temp_f22;
    temp_v0->unk_14 = temp_f23;
    temp_v0->unk_00 = (void *)func_002A2360;
}
