#include "common.h"

typedef struct {
    s32 unk_00;
    void *unk_04;
} unk_func_002A4CC0_0;

typedef struct {
    void *unk_00;
    u8 pad_04[4];
    unk_func_002A4CC0_0 unk_08;
} unk_func_002A4CC0_1;

unk_func_002A4CC0_1 *func_0029DA50(s32);
void *func_0029DB20(void *, s32);
void func_002A4D50();
void func_002A4DB0();

void func_002A4CC0(s32 arg0, void **arg1) {
    unk_func_002A4CC0_1 *temp;
    unk_func_002A4CC0_0 *sub;
    void *val;

    if (arg0 == 0xB53) {
        temp = func_0029DA50(8);
        sub = &temp->unk_08;
        sub->unk_00 = arg0;
        sub->unk_04 = func_0029DB20(arg1, 0x10);
        temp->unk_00 = func_002A4D50;
    } else {
        val = *arg1;
        temp = func_0029DA50(8);
        temp->unk_08.unk_00 = arg0;
        temp->unk_08.unk_04 = val;
        temp->unk_00 = func_002A4DB0;
    }
}
