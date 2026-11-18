#include "common.h"

typedef struct unk_func_002A2F60_0 {
    f32 unk_00;
    f32 unk_04;
} unk_func_002A2F60_0;

typedef struct unk_func_002A2F60_1 {
    void *unk_00;
    u8 pad_04[4];
    unk_func_002A2F60_0 unk_08;
} unk_func_002A2F60_1;

unk_func_002A2F60_1 *func_0029DA50(s32);
void func_002A2EE0();
f32 int2dB__Fi(f64);

void func_002A2F60(f64 arg0, f64 arg1) {
    unk_func_002A2F60_0 *temp2;
    unk_func_002A2F60_1 *temp;

    temp = func_0029DA50(8);
    temp2 = &temp->unk_08;
    temp2->unk_00 = int2dB__Fi(arg0);
    temp2->unk_04 = int2dB__Fi(arg1);
    temp->unk_00 = (void *)func_002A2EE0;
}
