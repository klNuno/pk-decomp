#include "common.h"

typedef struct unk_func_002A2EF0_0 {
    f64 unk_00;
    f64 unk_08;
} unk_func_002A2EF0_0;

typedef struct unk_func_002A2EF0_1 {
    void *unk_00;
    u8 pad_04[4];
    f32 unk_08;
    f32 unk_0C;
} unk_func_002A2EF0_1;

unk_func_002A2EF0_1 *func_0029DA50(s32);
void func_002A2EE0();
f32 int2dB__Fi(f64);

void func_002A2EF0(unk_func_002A2EF0_0 *arg0) {
    f32 temp0;
    f32 temp1;
    unk_func_002A2EF0_1 *temp;

    temp1 = int2dB__Fi(arg0->unk_08);
    temp0 = int2dB__Fi(arg0->unk_00);
    temp = func_0029DA50(8);
    temp->unk_08 = temp0;
    temp->unk_0C = temp1;
    temp->unk_00 = (void *)func_002A2EE0;
}
