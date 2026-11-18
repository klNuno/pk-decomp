#include "common.h"

typedef struct unk_func_002A2280_0 {
    f32 unk_00;
    f32 unk_04;
} unk_func_002A2280_0;

typedef struct unk_func_002A2280_1 {
    void *unk_00;
    u8 pad_04[4];
    unk_func_002A2280_0 unk_08;
    unk_func_002A2280_0 unk_10;
} unk_func_002A2280_1;

unk_func_002A2280_1 *func_0029DA50(s32);
void func_002A2360();

void func_002A2280(unk_func_002A2280_0 *arg0, unk_func_002A2280_0 *arg1) {
    unk_func_002A2280_1 *temp;
    f32 x0;
    f32 y0;
    f32 x1;
    f32 y1;

    y0 = arg0->unk_04;
    x0 = arg0->unk_00;
    y1 = arg1->unk_04;
    x1 = arg1->unk_00;
    temp = func_0029DA50(0x10);
    temp->unk_08.unk_00 = x0;
    temp->unk_08.unk_04 = y0;
    temp->unk_10.unk_00 = x1;
    temp->unk_10.unk_04 = y1;
    temp->unk_00 = func_002A2360;
}
