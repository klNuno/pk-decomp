#include "common.h"

typedef struct {
    s64 unk_00;
    s64 unk_08;
    s64 unk_10;
} unk_func_002A2BE0_0;

typedef struct {
    void *unk_00;
    u8 pad_04[0x4];
    f32 unk_08;
    f32 unk_0C;
    f32 unk_10;
} unk_func_002A2BE0_1;

f32 func_00126140();
unk_func_002A2BE0_1 *func_0029DA50();
void func_002A2BD0();

void func_002A2BE0(unk_func_002A2BE0_0 *arg0) {
    f32 temp0;
    f32 temp1;
    f32 temp2;
    unk_func_002A2BE0_1 *temp;

    temp2 = func_00126140(arg0->unk_10);
    temp1 = func_00126140(arg0->unk_08);
    temp0 = func_00126140(arg0->unk_00);
    temp = func_0029DA50(0xC);
    temp->unk_08 = temp0;
    temp->unk_0C = temp1;
    temp->unk_10 = temp2;
    temp->unk_00 = func_002A2BD0;
}
