#include "common.h"

typedef struct unk_func_002A2B10_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_002A2B10_0;

typedef struct unk_func_002A2B10_1 {
    void *unk_00;
    u8 pad_04[4];
    unk_func_002A2B10_0 unk_08;
} unk_func_002A2B10_1;

unk_func_002A2B10_1 *func_0029DA50(s32);
void func_002A2BD0();

void func_002A2B10(unk_func_002A2B10_0 *arg0) {
    unk_func_002A2B10_1 *temp;
    f32 x;
    f32 y;
    f32 z;

    z = arg0->unk_08;
    y = arg0->unk_04;
    x = arg0->unk_00;
    temp = func_0029DA50(0xC);
    temp->unk_08.unk_00 = x;
    temp->unk_08.unk_04 = y;
    temp->unk_08.unk_08 = z;
    temp->unk_00 = (void *)func_002A2BD0;
}
