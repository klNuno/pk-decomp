#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_002A3F40_1;

typedef struct {
    void *unk_00;
    u8 pad_04[4];
    unk_func_002A3F40_1 unk_08;
} unk_func_002A3F40_0;

unk_func_002A3F40_0 *func_0029DA50(s32);
s32 func_0029DB20(f32 *, s32);
void func_002A3FF0();
void func_002A4070();

void func_002A3F40(s32 arg0, s32 arg1, f32 *arg2) {
    unk_func_002A3F40_0 *p;
    unk_func_002A3F40_1 *q;
    f32 temp_f20;

    if (arg1 == 0x1601) {
        temp_f20 = *arg2;
        p = func_0029DA50(0xC);
        p->unk_08.unk_00 = arg0;
        p->unk_08.unk_04 = arg1;
        *(f32 *)&p->unk_08.unk_08 = temp_f20;
        p->unk_00 = func_002A4070;
    } else {
        unk_func_002A3F40_0 *temp = func_0029DA50(0xC);
        unk_func_002A3F40_1 *sub = &temp->unk_08;

        sub->unk_00 = arg0;
        sub->unk_04 = arg1;
        sub->unk_08 = func_0029DB20(arg2, 0x10);
        temp->unk_00 = func_002A3FF0;
    }
}
