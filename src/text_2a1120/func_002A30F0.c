#include "common.h"

typedef struct {
    s32 unk_00;
    void *unk_04;
    void *unk_08;
} unk_func_002A30F0_0;

typedef struct {
    void *unk_00;
    u8 pad_04[4];
    unk_func_002A30F0_0 unk_08;
} unk_func_002A30F0_1;

unk_func_002A30F0_1 *func_0029DA50(s32);
void *func_0029DB20(void *, s32);
void func_002A3180();

void func_002A30F0(s32 arg0, void *arg1, void *arg2) {
    unk_func_002A30F0_1 *temp;
    unk_func_002A30F0_0 *sub;
    s32 size;

    temp = func_0029DA50(0xC);
    temp->unk_08.unk_00 = arg0;
    sub = &temp->unk_08;
    size = arg0 * 4;
    sub->unk_04 = func_0029DB20(arg1, size);
    sub->unk_08 = func_0029DB20(arg2, size);
    temp->unk_00 = func_002A3180;
}
