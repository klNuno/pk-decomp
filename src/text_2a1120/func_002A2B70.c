#include "common.h"

typedef struct {
    void (*unk_00)();
    u8 pad_04[4];
    f32 unk_08;
    f32 unk_0C;
    f32 unk_10;
} unk_func_002A2B70_0;

unk_func_002A2B70_0 *func_0029DA50(s32);
void func_002A2BD0();

void func_002A2B70(f32 arg0, f32 arg1, f32 arg2) {
    unk_func_002A2B70_0 *temp;

    temp = func_0029DA50(0xC);
    temp->unk_08 = arg0;
    temp->unk_0C = arg1;
    temp->unk_10 = arg2;
    temp->unk_00 = func_002A2BD0;
}
